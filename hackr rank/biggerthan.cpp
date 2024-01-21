#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
    // int a=6, b=1, c=14, d=1;

{    if(a>b)
    {   
        if(a>c)
        {  
             if(a>d)
            {
                return a;
            }
            else if(c>d)
            {
                return c;
            }
            else {
            return d;
            }
        }

    }
     if(a>c)
        {  
             if(a>d)
            {
                return a;
            }
            else if(c>d)
            {
                return c;
            }
            else {
            return d;
            }
        }
    /*******************************/
    else if(b>c)
    {
        if(b>d)
        {return b;}
        else 
        {return d;}
    }
    else if(c>d)
    {return c;     
    }
    else
    return d;
    
    return 0;
}

int main() {
    int a=6, b=1, c=14, d=1;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}