#include<iostream>
using namespace std;
#ifndef PI 
    #define PI 3.14         // object-like macro
#endif
#ifndef c 
    #define c  cout
#endif
#ifndef SQUARE
    #define SQUARE(x) (x*x)  // function-like macro
#endif
#ifndef great
    #define great(x,y) (x>y?x:y)
#endif
int main()
{
    int x= PI;
    c<<SQUARE(x)<<endl;

    int a=10, b=12;
    c<<great(a,b)<<endl;
    return 0;
}