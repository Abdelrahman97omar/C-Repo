#include<iostream>
using namespace std;

    class rectangle{
    public:    
        int length;
        int width;
    int area()
    {
        return length*width;
    }
    int peremeter()
    {
        return (length*2)+(width*2);
    }
    };

    class convert{
        public:
        float rate;
        int amount;

        float con()
        {
            return rate*amount;
        }
    };

int  main()
{
    int Area_first;
    int Area_second;
    int parameter_first;
    int parameter_second;

    rectangle r1,r2;

    r1.length=5;
    r1.width=7;

    r2.length=3;
    r2.width=4;

    Area_first= r1.area();
    Area_second=r2.area();
    parameter_first=r1.peremeter();
    parameter_second=r2.peremeter();

    cout<<"the area of the first rectangle is: "<<Area_first<<endl;
    cout<<"the area of the srecond rectangle is: "<<Area_second<<endl;
    cout<<"the parameir of the first rectangle is: "<<parameter_first<<endl;
    cout<<"the paremiter of the second rectangle is: "<<parameter_second<<endl;

    convert first;
    convert* ptr=&first;
    ptr->rate=3.08f;
    ptr->amount=55;

    cout<<"the converted value is: "<<ptr->con()<<endl;
    cout<<"the size of the pointer is: "<<sizeof(ptr)<<endl;
    cout<<"the size of the integer is: "<<sizeof(int)<<endl;

    return 0;
}