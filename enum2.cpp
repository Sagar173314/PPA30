#include<iostream>
using namespace std;

int main()
{
    enum Marvellous_Batches {PPA = 0, LSP = 1, Python = 2, LB = 3};
    int fees[] = {15000,16000,17000,18000};
    const float Duration[] = {3.5,4.0,3.5,4.5};
    int choice = 0;

    cout <<"Select the batch that you want to join\n";
    cout<<"0 : PPA\n";
    cout<<"1 : LB\n";
    cout<<"2 : Python\n";

    cin>>choice;

    switch (choice)
    {
        case PPA:
        cout<<"Thank you for selecting Pre Placement activity batch\n";
        cout<<"Duration : "<<Duration[PPA]<<"\n";
        cout<<fees are : "<<fees[PPA]<<"\n";
        break;
        case LB:
        cout<<"Thank you for selecting Logic building  batch\n";
        cout<<"Duration : "<<Duration[LB]<<"\n";
        cout<<fees are : "<<fees[LB]<<"\n";
        break;

        case Python:
        cout<<"Thank you for selecting Python batch\n";
        cout<<"Duration : "<<Duration[Python]<<"\n";
        cout<<fees are : "<<fees[Python]<<"\n";
        break;

        default :
        cout<<"Sorry there is no such batch\n";
        cout<<"contact admin : 7020713938\n";




    }
    
}