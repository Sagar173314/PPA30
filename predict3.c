#include<stdio.h>
int main()
{
    int no = 10;
    int *p = NULL;
   // int *q = NULL;
    p = &no;
    
    printf("%d\n",no);
    printf("%d\n",*p);
   // printf("%d\n",*q);

    *p = 11;
   // *q = 21;

    printf("%d\n",no);
    printf("%d\n",*p);
    //printf("%d\n",*q);

    return 0;
}