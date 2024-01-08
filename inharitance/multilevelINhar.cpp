#include<iostream>
using namespace std;
class A
{
    public:
    int letter1;
/******constructor****/
    A(int x)
    {
        letter1=x;
    }
};

/************************************************************************************/
class B:virtual public A
{
    public:
    int letter2;
/******constructor****/
    A(int x)
    {
        letter2=x;
    }
};

/************************************************************************************/
class C:virtual public A
{
    public:
    int letter3;
/******constructor****/
    A(int x)
    {
        letter3=x;
    }
};

/************************************************************************************/
class D:public B,public C
{
    public:
    int letter4;
/******constructor****/
    A(int x)
    {
        letter4=x;
    }
};
/************************************************************************************/

int main()
{
    return 0;
}