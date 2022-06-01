#include<iostream>
using namespace std;

class Base
{
    public:
        int x;
        int y;

        virtual void fun()
        {
            cout<<"Base fun"<<"\n";
        }
        void gun()
        {
            cout<<"Base gun"<<"\n";
        }
};
class Derived : public Base
{
    public:
        int i;
        int j;
        void sun()
        {
            cout<<"Derived fun"<<"\n";
        }
};
int main()
{
    Base *bp = new Derived();
    bp->fun();
    bp->gun();

    cout<<"size of Base : "<<sizeof(Base)<<"\n";
    cout<<"size of Derived : "<<sizeof(Derived)<<"\n";

    return 0;
}
