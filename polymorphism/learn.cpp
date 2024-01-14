#include<iostream>
using namespace std;

class Base
{
    public:
   virtual void display2()
    {
        cout<<"base classs";
    }
   virtual void display()=0;

};
class Derived : public Base
{
    public:
    void display2()
    {
        cout<<"derivded classs";
    }
        void display()
    {
        cout<<"first in Derived"<<endl;
    }
};

int main()
{
Derived d;
d.display();





    return 0;
}