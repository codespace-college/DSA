#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100] = "Ayush Modi\n";
    char str2[100] = "2303031057006\n";
    char str[100];
    strcat(str1, str2);
    printf("%s", str1);
}
