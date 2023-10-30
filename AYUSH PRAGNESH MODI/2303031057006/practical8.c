#include <stdio.h>
#include <string.h>
int main()
{
    // char str[10];
    char str1[100] = "parul university";
    char str2[100] = "parul university";
    int i, n;
    int count = 1;
    n = strcmp(str1, str2);
    if (n == 0){
        printf("equal\n");
        printf("Ayush Modi\n");
        printf("2303031057006\n");
    }
    else{
        printf("not equal");
        printf("Ayush Modi\n");
        printf("2303031057006\n");
    }
}