#include<iostream>
using namespace std;
void Calculate(int* ptrMR,int ptrS[][3]);
void Max_repeted_Wrong_number(int* correct_magic_number,int* Mgc_sqr,int* wrong_number);
void find_loc(int* magic_results,int* correct_magic_number,int* error_location);
int solve(int wrong_number,int* raw_problem, int* col_problem,int s[][3],int* correct_magic_number);
void print_modefied(int s[][3]);
void print(int* magic_results,int* correct_magic_number);

int main()
 {
    int s[3][3]={{4,9,2},{3,5,7},{8,1,5}};
    int magic_results[8]={0,0,0,0,0,0,0,0};
    int wrong_number[3]={0};//maximum different numbers will be3 out of six
    int cost;
    int correct_magic_number=0;   
    int Error_location[3];
/*******************************************************************************************/
   
    Calculate(magic_results,s);
    Max_repeted_Wrong_number(&correct_magic_number , magic_results ,wrong_number);
    find_loc(magic_results, &correct_magic_number,Error_location);

/******************************************************************************************/
    //cost= solve(wrong_number, &raw_problem , &col_problem, s, &correct_magic_number);
    // print_modefied(s);
    // print(magic_results, &correct_magic_number);
    // print_modefied(s);
/******************************************************************************************/

return 0;
}