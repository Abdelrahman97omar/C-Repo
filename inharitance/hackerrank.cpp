#include <iostream>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int h1,h2;
    int carry=0;
    h1=s[0];
    h2=s[1];
    if(s[8]=='P')
    {   
        if((char)(h2+2)>'9')  
        {
            h2+=2;
            h2=h2-10;
            h1='2';  
        cout<<"h1 is"<<endl;
        }   
        else
        {
            h1+=1;
            h2+=2;
            
        } 
    }
s[0]=(char)h1;
s[1]=(char)h2;
cout<<s[0]<<"  "<<s[1]<<endl;
return s;
}

int main()
{
string x;
x=timeConversion("03:00:00PM");
cout<<x<<endl;

    return 0;
}
 