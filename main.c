#include<stdio.h>

int i = 10;
extern int j;
extern void fun();
extern int no;

int main()

{
    printf("Inside main\n");
    printf("value of i is : %d\n",i);
    printf("value of j is : %d\n",j);
    printf("%d",no);
    fun();
    
    return 0;

}