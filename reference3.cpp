#include<iostream>
using namespace std;

int main()
{
    int no = 10;
    int &x = no;

    int *p = &x;
    
    cout<<no<<"\n";
    cout<<&no<<"\n";
    cout<<&x<<"\n";
    cout<<sizeof(&x)<<"\n";
    cout<<sizeof(no)<<"\n";
    cout<<sizeof(*p)<<"\n";

    return 0;
}