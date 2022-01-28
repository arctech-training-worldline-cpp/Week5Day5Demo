#include <iostream>
using namespace std;
/*
we have used bptr twice first points to base object and second points to derived object, 
but both the times it executed BC:show function to make ti call DC ((DC*)bptr)->show()
*/
class BC
{
    public:
        int b;
        //virtual void show()
        void show()
        {
            cout <<endl<< "From Base :" << b << endl;
        }
};

class DC : public BC
{
    public:
        int d;
        void show()
        {
            cout << "From Derived d: " << d << " b : " << b << endl;
        }
};
int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    bptr->b = 100; //access b via base pointer
    bptr->show();

    DC derived;
    bptr = &derived;
    bptr->b = 200;
    bptr->show();

    ((DC*)bptr)->show();

    return 0;
}
