#include<iostream>
using namespace std;
class Test
{
public:
    int My_Var;
    int* ptr; 
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
cout<<"enter value"<<endl;
cin>>x;
Test first(x);

Test Second_copy_of_first(first);

cout<<first.My_Var<<endl;
cout<<Second_copy_of_first.My_Var<<endl;

    first.ptr[0]=3;
    first.ptr[1]=5;
    first.ptr[2]=4;
    first.ptr[3]=7;
    Second_copy_of_first.ptr[0]=43;
    Second_copy_of_first.ptr[1]=32;
    Second_copy_of_first.ptr[2]=22;
    Second_copy_of_first.ptr[3]=18;

    cout<<first.ptr[0]<<endl;
    cout<<first.ptr[1]<<endl;
    cout<<first.ptr[2]<<endl;
    cout<<first.ptr[3]<<endl;
    cout<<Second_copy_of_first.ptr[0]<<endl;
    cout<<Second_copy_of_first.ptr[1]<<endl;
    cout<<Second_copy_of_first.ptr[2]<<endl;
    cout<<Second_copy_of_first.ptr[3]<<endl;

    return 0;
}