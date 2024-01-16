#include<iostream>
using namespace std;
void find_loc_solve(int* magic_results,int* correct_magic_number,
                          int* wrong_number,int s[][3],int* cost)
{

    /* The different will be either:
            1- 1 row -- 1 coulmn
            2- 2 row -- 1 coulmn
            3- 2 coulmn -- 1 raw
            4- 3 row -- 1 coulmn 
            5- 3 coulmn -- 1 raw
        so, i have to work on the 2 or 3 raws/coulmns that have the probblem by changing
        the elements in the 1 different coulmn/raw               
                error               
                 /\   
                 ||       
        | 4 | 3 | 8|==>error
        | _ | _ | _|            //this means to work on the third elemnt of
        | 4 | 6 | 7|==>error      the first and second raws
        |_  | _ | _|
        | 3 | 5 | 6|
    */
   int ROWS[3]={1,1,1}; 
   int Col[3] ={1,1,1}; 
   int wrong_no_arr_counter=0;

    for (int i = 0; i < 6; i++)
    {
        if(i<3 && (magic_results[i]== *correct_magic_number))
        {
            ROWS[i]=0;
        }
        if(i>=3 && (magic_results[i]== *correct_magic_number))
        {
            Col[i-3]=0;
        } 
    }
    
/*_____________________________________________________________________________________*/

    //note: magic_results{R1,R2,R3,C1,C2,C3}

for (int i = 0; i < 3; i++)
{
  int temp=0;
  int x=0;
    for(int j=0;j<3;j++)
        {   
            temp=ROWS[i]&Col[j];
            if(temp==1)
                {
                if(wrong_number[wrong_no_arr_counter]>*correct_magic_number)
                    {   
                    x=wrong_number[wrong_no_arr_counter]-*correct_magic_number;
                    *cost+=(wrong_number[wrong_no_arr_counter]-*correct_magic_number);
                    cout<<"number before modefication in first if "<<s[i][j]<<endl;         
                    s[i][j]-=x; 
                    cout<<"number after modefication in first if "<<s[i][j]<<endl;
                    cout<<"x is "<<x<<endl;
                    cout<<"cost is "<<*cost<<endl;
                    cout<<"_______________________________________________"<<endl;
                    temp=0;
                    
                    wrong_no_arr_counter++;
                    }
                else if(wrong_number[wrong_no_arr_counter]< *correct_magic_number)
                {
                    cout<<"wrong number in solve "<<wrong_number[wrong_no_arr_counter]<<endl;
                    cout<<"correct number in solve "<<*correct_magic_number<<endl;    
                    x=*correct_magic_number - wrong_number[wrong_no_arr_counter];
                    *cost+=(*correct_magic_number-wrong_number[wrong_no_arr_counter]);
                    cout<<"number before modefication in second if "<<s[i][j]<<endl;
                    s[i][j]+=x;
                    cout<<"number after modefication in second if "<<s[i][j]<<endl;
                    cout<<"x is "<<x<<endl;
                    cout<<"cost is "<<*cost<<endl;
                    cout<<"_______________________________________________"<<endl;                    temp=0;
                    wrong_no_arr_counter++;
                            
                }
            }        
        }            
    } 
}