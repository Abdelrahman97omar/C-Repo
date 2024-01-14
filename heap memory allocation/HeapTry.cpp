#include<iostream>
using namespace std;
int main()
{
    /*  int x;
        int* ptr=new int;
        ptr=&x;
        this is totaly wrong, as i create an pointer to address in the heap
        then i assign an address of variable to it. This will lead to memory leak
        3shan ana 3'yart el makan ely el pointer byshawer 3aleh mn 3'er ma3ml delete
        ll locarion ely 3mltelo create fl heap.

    */
    int* ptr=new int[5];
    ptr[0]=2;
    ptr[1]=3;
    ptr[2]=1;
    ptr[3]=643;
    ptr[4]=86;   
    ptr[5]=70; 
    ptr[6]=51;
    ptr[7]=189;   
    ptr[8]=473; 
 cout<<ptr[5]<<endl;

    return 0;
}