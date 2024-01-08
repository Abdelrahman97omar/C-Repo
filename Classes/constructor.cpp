#include<iostream>
using namespace std;

//There is always a "default constructor" invoked whenever you try to create an object
/*There are also parametarized, NON-parametarized and copy constructors you can create to 
 construct your objects*/

class Rectangle
{
private:
    int length;
    int width;


public:
/****************Property functions *****************/
void SetLength(int l)
{
    if(l>0)
    length=l;
    else
    length=0;
}
void SetWidth(int w)
{   
    if(w>0)
    width=w;
    else
    width=0;
}
int GetLength()
{
    return length;
}
int GetWidth()
{
    return width;
}
/***************** The constructors *******************************/

//****** 1-Paramitarized Construct
Rectangle (int l, int w)
{
    SetLength(l);
    SetWidth(w);
}
//****** 2- Non-Paramitarized Construct
Rectangle()
{
    length=0;
    width=0;
}
/******* 3-Mixed types {if the l and w have no arguments sent from the call of the 
 construct, they will be assigned by 0*/
// Rectangle (int l=0, int w=0)
// {
//     SetLength(l);
//     SetWidth(w);
// }
/**************** Copy constructor *******************/
/*in this type, i pass the address of already existing object and copy it's features
in the object i am creating*/
Rectangle(Rectangle &My_choice)
{
    length=My_choice.length;
    width=My_choice.width;
}
int area()
{
    return length*width;
}
};



int main()
{   

Rectangle r;
Rectangle r2(12,10);
Rectangle r3(r2);

cout<<"the area of first "<<r.area()<<endl;
cout<<"the area of second "<<r2.area()<<endl;
cout<<"the area of third is: "<<r3.area()<<endl;

    return 0;
}