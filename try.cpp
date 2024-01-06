#include<iostream>

using namespace std;

enum day{a,b,c,d,e};

int main()
{

    //add member to day enum

    // day f=e;
    // cout<<f<<endl;

    // /******************************* For-Each ***********************/   
    // for(int x:A)
    // {
    //     cout<<x<<endl;
    // }


    // /*create memory (array) in heap*/
    // int x;
    // cin>>x;
    // int* p=new int[x];
    // for(int i =0;i<x;i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    
    // char arr[]="abdo";

    // cout<<arr;
/***************************************************************************************/
    int* ptr=new int[3];
    cout<<"size is "<<sizeof(*ptr)<<endl; /*the size of the mem. pointer is pointing to in heap
                                          can't calculated using the sizeof function*/
    cout<<sizeof(ptr)<<endl;  //the size of pointer it self, which is 8byte for 64x systems
    ptr[0]=3;
    ptr[1]=5;
    ptr[2]=4;
    ptr[3]=7;

    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;
    cout<<ptr[3]<<endl;
    
    return 0;
}