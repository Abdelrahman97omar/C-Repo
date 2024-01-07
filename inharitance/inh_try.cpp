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
/***********************Accessors functions***********************/
int GetLength()
{
    return length;
}
int GetWidth()
{
    return width;
}
/***********************Constructors***********************/
/******** NON-param. Constructors *********/

rectangle()
{
    cout<<"default constructor of base claas "<<endl;
    length=0;
    width=0;
}
/**********Param. Constructors **********/

rectangle(int l,int w)
{
    SetLength(l);
    SetWidth(w);
}
/***********************Copy constructor***********************/
rectangle(rectangle &x)
{
    length=x.length;
    width=x.width;
}
/***************************** Main methods ************************************/
int calculate(rectangle B)
{
    int temp;
    temp=length*width*B.length*B.width;
    return temp;
}

};
class cuboid: public rectangle
{   private:
    int hight;
    public:
    cuboid()
    {
        cout<<"non parametrized of drived class"<<endl;
    }
};
int main()
{
    int x=5;
    cout<<x<<endl;
    // rectangle R1(7,6);
    // rectangle R2(R1);
    cuboid d;
    // cout<<R1.GetLength()<<endl;
    // cout<<R1.GetWidth()<<endl;
    // cout<<R2.GetLength()<<endl;
    // cout<<R2.GetWidth()<<endl;
    // cout<<R1.calculate(R2)<<endl;
}

