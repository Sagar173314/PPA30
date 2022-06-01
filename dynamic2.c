#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size = 4;
    int *ptr = NULL;

    printf("Enter number of elements 4");
    scanf("%d",&size);

    ptr = (int *)calloc(size,sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");

    }
    else
    {
        printf("Memory succesflly allocated\n");

    }
free(ptr);
return 0;

}