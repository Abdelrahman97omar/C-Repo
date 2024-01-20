#include<iostream>
using namespace std;
class test
{
    int x;
    void inc_x() const
    {
        //x++; // since it's constant function in class, so it can't change the
               // the value of any attributes of the class
    }
};

void fun(const int &t,int l )
{
    // t++;     // i can't increment the value of t becuase it will 
            // directly change the value of x as it is passing by reference
}
int main()
{
    const int a=30; //the value of 'a' can't be changed at all during the code
    int x=50;
    int y=30;
    const int*ptr1=&x; 
    int const *ptr2=&y;
    fun(x,y);

    /*both pointers are the same, const pointers that can only read the value of what it's
    pointing to but can't change it*/
    /******************************************************************************/

    int k=19;
    int* const ptr3=&k; //here ptr3 is const pointer in which i can't reasign
                        // it to another variable 
    /*****************************************************************************/
    int z;
    const int const*ptr3=&z; //const pointer to constant int, this means i can't either 
                        // change the value of z  nor re asign the pointer to another address
}