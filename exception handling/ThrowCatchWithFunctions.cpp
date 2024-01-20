#include<iostream>
using namespace std;
int devsion(int x,int y)
{
    if (y==0)
    {
        throw 1;
    }
    return x/y;
}

int main()
{
    int a=8,b,c;
    while (1)
    { 
    cin>>b;

    try{
        c=devsion(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"devsion by 0"<<endl;
    }
    }
}