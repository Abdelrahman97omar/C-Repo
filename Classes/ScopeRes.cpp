#include<iostream>
using namespace std;
/******I should use scope resolution for complex function instead of inline function *******/
class rectangle{
    public:
    int length;
    int width;
    
    int parameter(int s);

};


int rectangle::parameter(int s)
{
    return length*width*s;
}

int main()
{
    int x,y=3;
    rectangle a;
    a.length=5;
    a.width=6;
    x=a.parameter(y);
    cout<<x<<endl;
    return 0;
}
