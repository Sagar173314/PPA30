#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int (&Brr)[5] = Arr;

    cout<<sizeof(Arr)<<"\n";
    cout<<&Brr<<"\n";
    cout<<Arr[2]<<"\n";

    return 0;
}