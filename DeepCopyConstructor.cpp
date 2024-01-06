#include<iostream>
using namespace std;
class Test
{
public:
    int My_Var;
    int* ptr; //not pointer to memory of object, but just memory of 4 bytes
/****************Property functions *****************/
void SetValue(int l)
{
    My_Var=l;
}

//parametarized constructor
Test (int l=1)
{
    SetValue(l);
    ptr=new int[My_Var];
}
//Normal copy constructor
// Test(Test &My_choice)        This will point to the same memory created in the heap 
// {                            by the parametarized constructor
//     My_Var=My_choice.My_Var;
//     ptr=My_choice.ptr;
// }
Test(Test &copyer)
{
    My_Var=copyer.My_Var;
    ptr=new int[My_Var];             /*create new memory in heap with same size as that
                                      by parametarized constructor*/
}
//My normal function
int Calculate()
{
    return My_Var*3;
}

};



int main()
{
    int x;
    cin>>x;
    Test first(x);

    cout<<first.Calculate()<<endl;
    first.ptr[3]=8;
    cout<<first.ptr[3]<<endl;
    
    return 0;
}