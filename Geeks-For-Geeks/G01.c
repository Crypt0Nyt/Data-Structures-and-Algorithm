//Program to reverse a string

#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, len;
    char S[100];
    scanf("%d", &T);
    getchar();
    while (T--)
    {
        gets(S);
        len = strlen(S);
        for (i = len - 1; i >= 0; i--)
        {
            printf("%c", S[i]);
        }
        printf("\n");
    }

    return 0;
}
