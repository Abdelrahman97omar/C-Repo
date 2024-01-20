#include<iostream>
using namespace std;
template <class t,class r>
r calculate(t a, r b)
{
    return a+b;
}
int main()
{
    int z;
    cout<<calculate(6,7.5)<<endl;
    
return 0;
}