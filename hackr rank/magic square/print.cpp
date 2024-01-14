#include<iostream>
using namespace std;
void print(int* magic_results,int* correct_magic_number)
{
    cout<<magic_results[0]<<endl;
    cout<<magic_results[1]<<endl;
    cout<<magic_results[2]<<endl;
    cout<<magic_results[3]<<endl;
    cout<<magic_results[4]<<endl;
    cout<<magic_results[5]<<endl;
    cout<<magic_results[6]<<endl;
    cout<<magic_results[7]<<endl;
    cout<<"the most repeated no. is: "<<*correct_magic_number<<endl;

}
void print_modefied(int s[][3])
{
    cout<<s[0][0]<<" ";
    cout<<s[0][1]<<" ";
    cout<<s[0][2]<<endl;
    cout<<s[1][0]<<" ";
    cout<<s[1][1]<<" ";
    cout<<s[1][2]<<endl;
    cout<<s[2][0]<<" ";
    cout<<s[2][1]<<" ";
    cout<<s[2][2]<<endl;
}