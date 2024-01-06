#include<iostream>
using namespace std;
/******I should use scope resolution for complex function instead of inline function *******/
class rectangle{
    public:
    int length;
    int width;
    
    int parameter();

};


int rectangle::parameter()
{
    return length*width;
}

int main()
{
    int x;
    rectangle a;
    a.length=5;
    a.width=6;
    x=a.parameter();
    cout<<x<<endl;
    return 0;
}
