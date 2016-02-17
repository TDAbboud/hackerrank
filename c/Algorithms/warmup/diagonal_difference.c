/*
 Given a square matrix of size N×NN×N, calculate the absolute difference between the sums of its diagonals.

Input Format
The first line contains a single integer, NN. The next NN lines denote the matrix's rows, with each line containing NN space-separated integers describing the columns.

Output Format
Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

Sample Input
3
11 2 4
4 5 6
10 8 -12

Sample Output
15

Explanation
The primary diagonal is: 
11
      5
            -12

Sum across the primary diagonal: 11 + 5 - 12 = 4
The secondary diagonal is:
            4
      5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15
 */
#include <stdio.h>
#include <math.h>


int method2() {
    int n; 
    int s1=0, s2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }

    for (int i=0; i < n; i++) {
        s1 += a[i][i];
        s2 += a[i][N-1-i];
    }
    printf("%d", abs(s1-s2));
}


int main(){
    int n; 
    scanf("%d",&n);
    int left_diagonal = 0, left_cnt = 0;
    int right_diagonal = 0, right_cnt = n-1;
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
          if (a_i == left_cnt && a_j == left_cnt){
              left_diagonal += a[a_i][a_j];
          }
          if (a_i == left_cnt && a_j == right_cnt) {
              right_diagonal += a[a_i][a_j];
          }
       }
        left_cnt++;
        right_cnt--;
    }
    int sum = abs(left_diagonal - right_diagonal);    
    printf("%d", sum);
    
    return 0;
}

