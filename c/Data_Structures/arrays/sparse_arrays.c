/*
    There are NN strings. Each string's length is no more than 2020 characters. There are also QQ queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.

    Input Format
    The first line contains NN, the number of strings.
    The next NN lines each contain a string.
    The N+2N+2nd line contains QQ, the number of queries.
    The following QQ lines each contain a query string.

    Constraints
    1<=N<=1000 
    1<=Q<=1000
    1<= length of any string <= 20

    Sample Input
    4
    aba
    baba
    aba
    xzxb
    3
    aba
    xzxb
    ab

    Sample Output
    2
    1
    0

    Explanation
    Here, "aba" occurs twice, in the first and third string. The string "xzxb" occurs once in the fourth string, and "ab" does not occur at all.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Using dynamic memory allocation (malloc)
void method1() {
    int N, Q;
    // read in the number of strings
    scanf("%d", &N);

    char **strings = (char **)malloc(sizeof(char *)*N);
    for (int i=0; i<N; i++)
        strings[i] = (char *)malloc(sizeof(char)*20);
    // read in all the strings
    for (int i=0; i<N; i++) {
        scanf("%s", strings[i]);
    }

    // read in the number of queries
    scanf("%d", &Q);
    char **queries = (char **)malloc(sizeof(char *)*Q);
    for (int i=0; i<Q; i++)
        queries[i] = (char *)malloc(sizeof(char)*20);
    // read in all the queries
    for (int i=0; i<Q; i++) {
        scanf("%s", queries[i]);
    }
    
    // go through all queries and check if the words exist
    for (int i=0; i<Q; i++) {
        int cnt = 0;
        for (int j=0; j<N; j++) {
            if (strcmp(queries[i], strings[j]) == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
    
    //FREE everything
    for (int i=0; i<N; i++)
        free(strings[i]);
    for (int i=0; i<Q; i++)
        free(queries[i]);
    free(strings);
    free(queries);

}


// USING VLA (Variable Length Arrays) *Only valid in C99
void method2() {
    int N, Q;
    // read in the number of strings
    scanf("%d", &N);

    char strings[N][20];
    for (int i=0; i<N; i++) {
        scanf("%s", strings[i]);
    }

    // read in the number of queries
    scanf("%d", &Q);
    char queries[Q][20];
    // read in all the queries
    for (int i=0; i<Q; i++) {
        scanf("%s", queries[i]);
    }
    
    // go through all queries and check if the words exist
    for (int i=0; i<Q; i++) {
        int cnt = 0;
        for (int j=0; j<N; j++) {
            if (strcmp(queries[i], strings[j]) == 0)
                cnt++;
        }
        printf("%d\n", cnt);
    }

}


int main() {
    method1();
    // method2();
    return 0;
}

