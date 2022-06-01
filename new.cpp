    #include<iostream>
    using namespace std;

    int main ()
    {
        int Arr[5];

        int *p = NULL;

        //p = (int *)malloc(sizeof(int)* 5);

        p = new int[5];

        if(p == NULL)
        {
            cout<<"Unable to allocate the memory\n";
        }
        else
        {
            cout<<"Memory gets allocted successfully at addderess : "<<p<<"\n";
        }

        delete []p;

        return 0;


    }