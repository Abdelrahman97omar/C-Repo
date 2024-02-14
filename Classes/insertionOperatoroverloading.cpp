#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    complex()
    {
        real=5;
        img =7;
    }
    ostream & operator<<(ostream &o/*variable to store the operatore*/,complex &c)
    // ostream & is the return type
    {
        o<<c.real<<" "<<c.img<<endl;
    }
};


int main()
{
    complex c;
    o<<c;
    return 0;
}