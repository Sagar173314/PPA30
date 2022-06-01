#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun Marvellous\n";
    }
}

namespace Infosystems
{
    void fun()
    {
        std::cout<<"Inside  fun Infosystem\n";
    }
}

int main()
{
    std::cout<<"Jay Ganesh\n";

    using namespace Marvellous;
    using namespace Infosystems;

    Infosystems::fun();
    Marvellous::fun();
    return 0;
}