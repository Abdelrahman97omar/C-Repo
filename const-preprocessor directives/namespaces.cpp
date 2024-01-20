#include<iostream>
using namespace std;

    namespace fir_sec
    {
    void func()
    {
        cout<<"first"<<endl;
    }
    void func_2()
    {
        cout<<"second"<<endl;
    }
    }
/***********************************************************************/
    namespace thr_fourth
    {
    void func()
    {
        cout<<"thrid"<<endl;
    }
    void func_2()
    {
        cout<<"fourth"<<endl;
    }
    }

using namespace fir_sec;
int main()
{
     func();
     func_2();

thr_fourth::func();
thr_fourth::func_2();
    return 0;
}