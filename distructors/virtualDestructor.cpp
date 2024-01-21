#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"constructor of base class"<<endl;
    }
    virtual ~A()
    {
        cout<<"destructor of base class"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"constructor of derived class"<<endl;
    }
    ~B()
    {
        cout<<"destructor of derived class"<<endl;
    }
};
int main()
{   
    A* ptr=new B();
    delete ptr; /* i have to write virtual before ~A (base class) to make delete
                   the object created from the derived class*/
    return 0;
              
}