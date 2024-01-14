#include<iostream>
using namespace std;
int solve(int* wrong_number,int* raw_problem, int* col_problem,int s[][3], int* correct_magic_number)
{
    int x=0;
    if(*wrong_number>correct_magic_number[0])
    {
        x=*wrong_number-correct_magic_number[0];
        s[*raw_problem][*col_problem]-=x;
        return x;
    }
    if(*wrong_number<correct_magic_number[0])
    {
        x=correct_magic_number[0]-*wrong_number;
        s[*raw_problem][*col_problem]+=x;
        return x;
    }
    return x;
}
