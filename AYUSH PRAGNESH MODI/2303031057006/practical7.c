#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char word[50];
    char str[50] = "Ayush Modi";
    int len1 = 1;
    int count = 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            count++;
        }
    }
    printf("no. of words %d\n", count);
    printf("Ayush Modi\n");
    printf("2303031057006\n");
}
