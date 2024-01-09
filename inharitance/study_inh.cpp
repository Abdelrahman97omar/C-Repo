#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int width;
    public:
rectangle(int length=0,int width=0)
{
    this->width=width;
    this->length=length;
}
void display()
{
    cout<<"length and width in class rectangle "<<width<<" "<<length<<endl;
}
int area()
{
    return length*width;
}
}; 
class cuboid: public rectangle
{
private:
    int hight;
public:
cuboid(int l, int w, int hight):rectangle(l,w)
{
   this-> hight=hight;
}
void display()
{
    rectangle::display();
    cout<<"in cuboid class, hight is"<<hight<<endl;
}
int volume()
{
    int vol,area;
    area=rectangle::area();
    vol=hight*area;
    return vol;
}
};

int main()
{
    cuboid D(2,3,4);
    D.display();
    cout<<"In main function,the area is "<<D.area()<<endl;
    cout<<"In main function,the volume is "<<D.volume()<<endl;
    return 0;
}