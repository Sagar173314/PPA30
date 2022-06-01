#include<iostream>
using namespace std;

class  A
{
    public:
            int i;
    private:
            int j;       
    protected:
            int k;
};

class B : protected A
{
    public:

    private:

    protected:
    
};

int main()
{
    return 0;
}