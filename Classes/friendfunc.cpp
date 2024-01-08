#include<iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;
friend complex /*return type*/ operator+(complex b, complex a);
   

};
complex /*return type*/ operator+(complex b, complex a)
 {
    complex temp;
    temp.real=b.real+a.real;
    temp.img=b.img+a.img;
    return temp;
 }


int main()
{
    complex C1,C2,C3;
    C1.real=5;
    C1.img=6;
    C2.real=7;
    C2.img=65;

    C3=C1+C2;
    cout<<C3.img<<endl;
    cout<<C3.real<<endl;
    return 0;
}