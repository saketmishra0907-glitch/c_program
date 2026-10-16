 #include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int count[26] = {0}; // Array to store frequencies of lowercase letters 'a' through 'z'

    // Read the two input strings
    printf("Enter first string (s): ");
    scanf("%s", s);
    printf("Enter second string (t): ");
    scanf("%s", t);

    // If lengths are different, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count character frequencies
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++; // Increment for string s
        count[t[i] - 'a']--; // Decrement for string t
    }

    // Check if all frequency counts returned to zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    // If all counts are zero, it's a valid anagram
    printf("Anagram\n");
    return 0;
}