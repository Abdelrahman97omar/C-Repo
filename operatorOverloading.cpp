#include<iostream>
using namespace std;

class complex{
    public:
    int real;
    int img;
    public:
    complex(int a=0,int b=0)//constructor
    {
        real=a;
        img=b;
    }
    /* The normal way is -->
    complex add(complex x)*/
    complex operator+(complex x) //operator overload method    
    {
        complex temp;
        temp.real=real+x.real; //because C1 is the function that called add function, real 
        temp.img=img+x.img;    // and img are those of C1  

        return temp;
    }
};

int main()
{
    complex C1(9,11);
    complex C2(7,4);
    complex C3;
    //C3=C1.add(C2); --> normal add function
    // C3=C1.operator+(C2); for operator overflow method 
    C3=C1+C2;         // official(used) way of operator overflow method  
    cout<<C3.real<<endl;
    cout<<C3.img<<endl;
}