#include <stdio.h>

int isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{')
        {
            stack[++top] = current;
        }
        else
        {
            if (top == -1)
                return 0;

            char opening = stack[top--];

            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{'))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    char s1[] = "()[]{}";
    printf("Test Case 1: %s\n", isValid(s1) ? "true" : "false");

    char s2[] = "([)]";
    printf("Test Case 2: %s\n", isValid(s2) ? "true" : "false");

    char s3[] = "{[]}";
    printf("Test Case 3: %s\n", isValid(s3) ? "true" : "false");

    return 0;
}