#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int width;
public:
/***********************Properties functions***********************/
/***********************Mutators functions***********************/
void SetLength(int l)
{
    if(l<0)
    length=0;
    else
    length=l;
}
void SetWidth(int w)
{
    if(w<0)
    width=0;
    else
    width=w;
}
/***********************Constructors***********************/
/******** NON-param. Constructors *********/

rectangle()
{
    cout<<"Now in non-parametrized constructor of base claas "<<endl;
    length=0;
    width=0;
}
/**********Param. Constructors **********/

rectangle(int l,int w)
{
    cout<<"Now in parametrized of Base class"<<endl;
    SetLength(l);
    SetWidth(w);
}
void display()
{
    cout<<"the length and width in rectangle are:"<<length<<" "<<width<<endl;
}
};
/*************************************************************************/
/******************** Cuboid Class*******************************/

class cuboid: public rectangle
{   private:
    int hight;
    public:

int GetHight()
{
    return hight;
}
/***********************Constructors***********************/
    cuboid()
    {
        cout<<"Now in drived non parametrized class"<<endl;
    }
        cuboid(int l,int w,int h):rectangle(w,h)
    {
        hight=l;
        cout<<"Now in drived parametrized class"<<endl;
    }
    // int volume()
    // {
    //     int v;
    //     return v= GetLength()*GetWidth()*hight;
    // }
    void display()
    {
        rectangle::display();
        cout<<"the hight in cuboid is: "<<hight<<endl;
    }
};
/************************************************************************/
int main()
{
    rectangle R1(7,6); //using normal param. constructor
    cuboid D(1,2,3);
    D.display();


    return 0;
}
/*in function overriding, if i defined the same function with the same 
signture(name of function and its parameters) and i call it by object in the 
drived class, it will only call the function in the drived class*/
