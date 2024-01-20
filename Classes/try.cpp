#include<iostream>

using namespace std;

enum day{a,b,c,d,e};

int main()
{
    //i can pass array to function using the following method
    // int arr[4]={1,2,3,4};
    // int arr_size=sizeof(arr)/arr[0];
    // void calculate(int my_arr[],int size_of_array)
    // to call function
    // calculate(arr,arr_size);

    /******************************************/
    //add member to day enum

    // day f=e;
    // cout<<f<<endl;

    // /******************************* For-Each ***********************/   
    // for(int x:A)
    // {
    //     cout<<x<<endl;
    // }


    // /********************* create memory (array) in heap ****************/   
   
    // int x;
    // cin>>x;
    // int* p=new int[x];
    // for(int i =0;i<x;i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    /**********************print string *****************/
    // char arr[]="abdo";
    // string x="abdoo";

    // cout<<arr<<endl;
    // cout<<x<<endl;
/***************************************************************************************/
    // int* ptr=new int[3];
    // cout<<"size is "<<sizeof(*ptr)<<endl; /*the size of the mem. pointer is pointing to 
    //                                   in heap can't calculated using the sizeof function*/
    // cout<<sizeof(ptr)<<endl; //the size of pointer it self, which is 8byte for 64x systems
    // ptr[0]=3;
    // ptr[1]=5;
    // ptr[2]=4;
    // ptr[3]=7;

    // cout<<ptr[0]<<endl;
    // cout<<ptr[1]<<endl;
    // cout<<ptr[2]<<endl;
    // cout<<ptr[3]<<endl;
/*****************************************************************************/
    /*note that s[0]=1 and s[0] and the following lines concatenate the 2 chars
    1 and 0 into 1 char hh*/
    // int h1 = s[0] - '0';
    // int h2 = s[1] - '0';
    // int hh = h1 * 10 + h2;
    return 0;
}