#include<iostream>
using namespace std;
class test{
    public:
    int x;
    int y;
    test(int a,int b);
    test ();
    test(test &h); 
    ~test();
    void display(string v);
};
/***************************************************************************************/
test::test(int a,int b)
    {
        cout<<"hello"<<endl;
        x=a;
        y=b;
    }
test::test()
    {
        cout<<"default constructor"<<endl;
        x=5;
        y=4;
    }
test::test(test &h)
    {
        //i wrote this function to be called when the function void fun(test g)
        // create a copy 'g' which is done by the copy constructor
        x=h.x;
        y=h.y;
        cout<<"this is the copy constructor"<<endl;
    }
test::~test()
    {
        cout<<"done"<<endl;
    }
void fun(test g)
    {
        cout<<"the end of function"<<" "<<g.x*g.y<<endl;
    }
 void test::display(string v)
    {
        cout<<"hi in display"<<" "<<v<<endl;
    }
/************************************************************************************/
int main()
{
    test first(5,6);
    // first.~test();
    // test second(0,0);
    // test* ptr=new test(1,2);
    // delete ptr;
    // test third(3,4);
    // first.display("first");
    // cout<<"before function"<<endl;
    fun(first);
    cout<<"after function"<<endl;
    return 0;
}