#include<iostream>
using namespace std;
int main()
{
    int a=16,b,c,z;
    cout<<"enter b "<<endl;
    cin>>b;
    cout<<"enter z "<<endl;
    cin>>z;
    try{
    //i can use more than one throw along my code as follows

        if(b==0)
        throw 1;

        c=b/a;

        if(c>5)
        throw 2;

        c=c*z;

    }
    catch(int e)
    {
        cout<<"catch "<<e<<endl;
    }
}