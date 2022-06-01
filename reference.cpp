#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &x = no;

    int *p = &no;

    cout<<sizeof(no)<<"\n";
    cout<<sizeof(&no)<<"\n";
    cout<<x<<"\n";
    cout<<*p<<"\n";
    cout<<sizeof(p)<<"\n";
    
    return 0;

}
