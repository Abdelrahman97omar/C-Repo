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
/***********************Copy constructor***********************/
rectangle(rectangle &x)
{
    length=x.length;
    width=x.width;
}
/***************************** Main methods ************************************/
int area()
{
    int temp;
    temp=length*width;
    return temp;
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
    int volume()
    {
        int v;
        return v= GetLength()*GetWidth()*hight;
    }
};
/************************************************************************/
int main()
{
    rectangle R1(7,6); //using normal param. constructor
    rectangle R2(R1);  //using copy constructor

    cuboid D(1,2,3);

    // cout<<R1.GetLength()<<endl;
    // cout<<R1.GetWidth()<<endl;
    // cout<<R2.GetLength()<<endl;
    // cout<<R2.GetWidth()<<endl;
    // cout<<R1.area()<<endl;
    // cout<<R2.area()<<endl;

    cout<<"Hight is: "<<D.GetHight()<<endl;
    cout<<"Width is: "<<D.GetWidth()<<endl;
    cout<<"Length is: "<<D.GetLength()<<endl;

    cout<<"vlume of cuboid is: "<<D.volume()<<endl;

    return 0;
}
/*the default constrcutor will be called once i call constructor 
in drived class unless:
            1- i have created no defualt constructor in the base class
            2- i constructed an object that needs the param constructor
               in the base class(so it won't call the defualt- only param construct.)
___________________________________________________________
tarteb el parameters fl constructor bta3 el drived class mesh mohem
cuboid(int l,int w,int h):rectangle(w,h)
or
cuboid(int l,int w,int h):rectangle(l,h)
or
cuboid(int l,int w,int h):rectangle(w,l)

{
    hight=l;
    or
    hight=w;
    or
    hight=h;

}

*/
