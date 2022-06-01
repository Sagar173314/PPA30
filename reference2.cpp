#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &x = no;
    int &y = no;

    cout<<sizeof(no)<<"\n";
    cout<<sizeof(&x)<<"\n";
    cout<<sizeof(&y)<<"\n";
    cout<<&x<<"\n";
    cout<<&y<<"\n";

    return 0;
}
