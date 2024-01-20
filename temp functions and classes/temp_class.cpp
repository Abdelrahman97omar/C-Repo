#include<iostream>
using namespace std;
/*************           This is class to create array and add and delete elements out of it         ************/
template <class T>
class stack{
private:
    T* stk; //pointer to be array
    int top;
    int size;
public:
    stack(int x)
    {
        size=x;
        top=-1;
        stk=new T[size];
    }

    void push(T x); //functions in template classes shoeld be intialized outside the class
    T   pop();      //functions in template classes shoeld be intialized outside the class
};
/************************** the scope of 1st template<class T> finishes here ***********************/
template<class T>
void stack<T>:: push(T x)
{
    if(top==size-1)
    cout<<"full"<<endl;
    else
    top++;
    stk[top]=x;
}
/************************** the scope of 2nd template<class T> finishes here ***********************/
template<class T>
T stack<T> ::pop()
{
    T x=0;
    if(top==-1)
    cout<<"smpty"<<endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}
/**********************************************************************************************************/
int main()
{
    stack<int> s(10); //<int> for data type, it could be float, double or whatever
    s.push(5);
    s.push(7);
    s.push(3);
    s.push(98);

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}