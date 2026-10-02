#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char* strs[], int strsSize)
{
    int i = 0;

    while (strs[0][i] != '\0')
    {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != current || strs[j][i] == '\0')
            {
                printf("%.*s\n", i, strs[0]);
                return;
            }
        }

        i++;
    }

    printf("%s\n", strs[0]);
}

int main()
{
    // Test Case 1
    char* strs1[] = {"flower", "flow", "flight"};

    printf("Test Case 1: ");
    longestCommonPrefix(strs1, 3);

    // Test Case 2 - no common prefix
    char* strs2[] = {"dog", "racecar", "car"};

    printf("Test Case 2: ");
    longestCommonPrefix(strs2, 3);

    return 0;
}