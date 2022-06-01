#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int *p = &no;

    int *(&q) = p;

    cout<<*q<<"\n";
    cout<<&no<<"\n";
    cout<<*p<<"\n";
    
    return 0;
}