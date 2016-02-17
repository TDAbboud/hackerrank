/*
Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.  Given a sentence s, tell Roy if it is a pangram or not.

Input Format
Input consists of a string s.

Constraints 
Length of ss can be at most 103103 (1<=|s|<=1000) and it may contain spaces, lower case and upper case letters. Lower-case and upper-case instances of a letter are considered the same.

Output Format
Output a line containing pangram if ss is a pangram, otherwise output not pangram.

Sample Input
Input #1
We promptly judged antique ivory buckles for the next prize    
Input #2
We promptly judged antique ivory buckles for the prize    

Sample Output
Output #1
pangram
Output #2
not pangram
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHARS 26
int letter_cnt[MAX_CHARS] = {0};

int main() {
    char str[1000];
    scanf("%[^\n]", str);
   
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i] == ' ')
            continue;
        int index = ((int)tolower(str[i])) - 'a';
        letter_cnt[index]++;
    }
    for (int i=0; i<MAX_CHARS; i++) {
        if (letter_cnt[i] == 0) {
            printf("not pangram");
            return 0;
        }
    }
    printf("pangram");
    return 0;
}
