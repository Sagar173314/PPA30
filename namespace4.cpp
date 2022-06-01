#include<iostream>

namespace Sagar 
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}

int main()
{
    std::cout<<"Jay Ganesh\n";

    Sagar::fun();

    return 0;
}

