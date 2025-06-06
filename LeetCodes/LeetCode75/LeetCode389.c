// You are given two strings s and t.
//
//String t is generated by random shuffling string s and then add one more letter at a random position.
//
//Return the letter that was added to t.

#include <stdio.h>

char findTheDifference(char *s, char *t) {
    int xorResult = 0;

    // XOR all ASCII codes of characters in string s
    for (; *s != '\0'; ++s) {
        xorResult ^= *s;
    }

    // XOR all ASCII codes of characters in string t
    for (; *t != '\0'; ++t) {
        xorResult ^= *t;
    }

    // The result is the ASCII code of the added letter
    return (char)xorResult;
}
int main() {
    char s1[] = "abcd";
    char t1[] = "abcde";
    printf("Example 1 Output: %c\n", findTheDifference(s1, t1));

    char s2[] = "";
    char t2[] = "y";
    printf("Example 2 Output: %c\n", findTheDifference(s2, t2));

    return 0;
}
