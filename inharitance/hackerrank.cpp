#include <iostream>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    char h1,h2;
    int carry=0;
    h1=s[0];
    h2=s[1];

    if(s[8]=='P')
    {   
        if((h2+'2')>'9')  
        {
            cout<<"hiiii"<<endl;
            h2+='2';
            h2=h2-'9';
            h2=h2-'1';
            h1='2';  
        }   
        else
        {
            h1+='1';
            h2+='2';
            
        } 
    }
s[0]=h1;
s[1]=h2;
return s;
}

int main()
{
string x;
x=timeConversion("03:00:00PM");
cout<<x<<endl;

    return 0;
}
 