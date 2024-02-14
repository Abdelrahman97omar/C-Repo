#include<iostream>
using namespace std;

class Base
{
    public:
   virtual void display()
    {
        cout<<"base classs";
    }

};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"derivded classs";
    }
};

int main()
{
Derived d;
d.display();





    return 0;
}