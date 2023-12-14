#include <stdio.h> 
void main() { 
    int i,j,k,l;
    int a[100],b[100],c[100],m,n;

    printf("Enter the number of elements in 1st array: \n");
    scanf("%d",&m);
    printf("Enter the elemenents of 1st array: \n");
    for (i=0;i<=m;i++){
        scanf("%d",&a[i]);
        c[k]=a[i];
    }
    printf("Enter the number of elements in 2nd array: \n");
    scanf("%d",&n);
    printf("Enter the elements in 2nd array: \n");
    for (j=0;j<=n;j++){
        scanf("%d",&b[j]);
        c[k]=b[j];
    }
    
    //Final array
    printf("Final array after sorting: \n");
    for(k=0;k<=m;k++){
        printf("%d\t",c[k]);
    }
}