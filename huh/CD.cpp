#include<stdio.h>

int main()
{
    int  n,i,given[100];

    printf("Enter the number of elements of the array::");
    scanf("%d",&n);

    printf("Enter the elements of the array::\n");
    for(i=0;i<n;i++){
        scanf("%d\n",&given[i]);
    }

     printf("The elements of the array are::\n");
    for(i=0;i<n;i++){
        printf("%d\n",given[i]);
    }

    return 0;
    
}
