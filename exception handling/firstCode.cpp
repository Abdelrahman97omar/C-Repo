#include<iostream>
using namespace std;
int main()
{
    int a=5,b,c;
    while (1)
    {  
    cout<<"enter number"<<endl;
    cin>>b;
    try{
        if(b==0)
        throw 401;

       c=a/b;
       cout<<"result is: "<<c<<endl; 
    }
    catch(int x)
    {
        cout<<"error "<<x<<" you entered 0 value"<<endl;
    }
    }
    return 0;
}