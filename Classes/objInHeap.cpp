#include<iostream>
using namespace std;
/*********************  create and object of class in the heap memory    ************************/
class client{
    public:
        int Age;
        char gender;
        };

int main()
{
    client Ali;
    client abdo;
 /**********************************************************************************************/   
    client* ptr;        //create a pointer that save a memory in heap for an obect (no name for obj, just memory) 
    ptr=new client;
    ptr=&abdo;

    ptr->Age=65;
    ptr->gender='M';

    cout<<abdo.Age<<endl;
    cout<<abdo.gender<<endl;

    //Another way tp create memory in heap in 1 line >> client* ptr=new client;

    client* ptr1= new client; /*create pointer in stack that points to piece of memorey 
                                in heap of the same size of the class*/
    ptr1=&Ali;
    ptr1->Age=25;
    ptr1->gender='M';

    cout<<Ali.Age<<endl;
    cout<<Ali.gender<<endl;


    cout<<"the adress of ptr "<<ptr<<endl;
    cout<<"the adress of ptr1 "<<ptr1<<endl;
    cout<<"the adress of abdo "<<&abdo<<endl;
    cout<<"the adress of Ali "<<&Ali<<endl;

    delete ptr;
    delete ptr1;

}
