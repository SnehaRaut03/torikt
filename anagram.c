#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(const char *str1, const char *str2) {
    // Get the lengths of both strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they cannot be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Arrays to store the count of each character in both strings
    int count1[256] = {0};
    int count2[256] = {0};

    // Count occurrences of characters in the first string
    for (int i = 0; i < len1; i++) {
        count1[(int)str1[i]]++;
    }

    // Count occurrences of characters in the second string
    for (int i = 0; i < len2; i++) {
        count2[(int)str2[i]]++;
    }

    // Compare the counts of each character
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not an anagram
        }
    }

    return 1; // Strings are anagrams
}

int main() {
    char str1[100], str2[100];

    // Input the two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
