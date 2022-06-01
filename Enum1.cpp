#include<iostream>
using namespace std;

int main()
{
    int input = 0;
    //          1   2   3   4   5   6   7
    enum Days {Sun,Mon,Tue,Wed,Thus,Fri,Sat};
    enum Days obj;
    obj = Tue;

    cout<<obj<<"\n";
    cout<<sizeof(obj)<<"\n";

    enum Gender {Female = 1, Male = 2};

    cout<<"Enter your gender\n";
    cout<<"1 : Female\n";
    cout<<"2 : Male\n";

    cin>>input;

    switch(input)
    {
        case Female:
            cout<<"Tax free limit is 300000\n";
            break;

        case Male:
            cout<<"Tax free limit is 250000\n";
            break;

            default:
            cout<<"Invalid gender\n";
            break;    
    }
    return 0;
}