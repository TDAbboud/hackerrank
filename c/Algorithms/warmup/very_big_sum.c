/*
You are given an array of integers of size NN. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

Input

The first line of the input consists of an integer NN. The next line contains NN space-separated integers contained in the array.

Constraints 
1<=N<=10 
0<=A[i]<=10^10

Sample Input 
5
1000000001 1000000002 1000000003 1000000004 1000000005

Output 
Print a single value equal to the sum of the elements in the array. In the above sample, you would print 50000000155000000015.

Note: The range of the 32-bit integer is (−231) to (231−1) or [−2147483648,2147483647](−231) to (231−1) or [−2147483648,2147483647].
When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums. 
*/
#include <stdio.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    long long int sum = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum += arr[arr_i];
    }
    // Use lld to print long long int
    printf("%lld", sum);
    return 0;
}
