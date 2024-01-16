#include<iostream>
using namespace std;
void Calculate(int* ptrMR,int ptrS[][3]);
void Max_repeted_Wrong_number(int* correct_magic_number,int* Mgc_sqr,int* wrong_number);
void find_loc_solve(int* magic_results,int* correct_magic_number,int* wrong_number,int s[][3],int* cost);

int main()
 {
    int s[3][3]={{5,3,4},
                 {1,5,8},  
                 {6,4,2}};
    int magic_results[8]={0,0,0,0,0,0,0,0};
    int wrong_number[3]={0};//maximum different numbers will be3 out of six
    int cost=0;
    int correct_magic_number=0;   
/*******************************************************************************************/
    Calculate(magic_results,s);
    Max_repeted_Wrong_number(&correct_magic_number , magic_results ,wrong_number);
    find_loc_solve(magic_results, &correct_magic_number, wrong_number , s , &cost);
    cout<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<endl;
    cout<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<endl;
    cout<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2]<<endl;
    cout<<"cost is "<<cost<<endl;

return 0;
}
void Calculate(int* ptrMR,int ptrS[][3])
{
    int PtrMRCounter=0;
/****************to find resultes of the 3 raws *****************/
    for(int Raw=0;Raw<3;Raw++)
    {
        for (int MR_col_S_raws = 0; MR_col_S_raws < 3; MR_col_S_raws++)
        {
            ptrMR[PtrMRCounter]+=ptrS[Raw][MR_col_S_raws];
        }
     PtrMRCounter++;
    }
/****************to find resultes of the 3 coulmns *****************/
        for(int col=0;col<3;col++)
    {
        for (int MR_col_S_raws = 0; MR_col_S_raws < 3; MR_col_S_raws++)
        {
            ptrMR[PtrMRCounter]+=ptrS[MR_col_S_raws][col];
        }
            PtrMRCounter++;
    }
    ptrMR[6]=ptrS[0][0]+ptrS[1][1]+ptrS[2][2]; //for main diagonal
    ptrMR[7]=ptrS[0][2]+ptrS[1][1]+ptrS[2][0]; //for main diagonal

}
void Max_repeted_Wrong_number(int* correct_magic_number,int* Mgc_sqr,int* wrong_number)
{   
    int temp_counter=1;
    int numb_of_repeat=0;
    int wrong_number_array_counter=0;
    for (int i = 0; i < 8; i++)
    {
        // the Mgc_sqr array will be something like {12,12,14,12,12,14,12,12}
        for(int j=i+1;j<8;j++)
        {
              if(Mgc_sqr[i]==Mgc_sqr[j])
              {
                temp_counter++;
              } 
        }
        if(temp_counter>numb_of_repeat)
        {
            *correct_magic_number=Mgc_sqr[i];
            numb_of_repeat=temp_counter;
        }
        temp_counter=0;
    } 
    //now, after i have found the magic number, i have to find wrong numbers
    for (int i = 0; i < 6; i++)
    {
        if(Mgc_sqr[i] != *correct_magic_number)
        {
            wrong_number[wrong_number_array_counter]=Mgc_sqr[i];
            wrong_number_array_counter++;
        }
    }
}    
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