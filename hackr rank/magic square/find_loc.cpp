#include<iostream>
using namespace std;
void find_loc(int* magic_results,int* correct_magic_number,int* error_location)
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
   int ROWS[3]={1,2,4}; /* for raw 1->00000001 raw 2->00000010 raw 3->00000100 */
   int Col[3]={1,2,4};  /* for col 1->00000001 col 2->00000010 col 3->00000100 */
   int Error_location[9];
   int Error_location_counter=0;
    for (int i = 0; i < 6; i++)
    {
        if(i<3 && (magic_results[i]==*correct_magic_number))
        {
            ROWS[i]=0;
        }
        if(i>3 &&(magic_results[i]==*correct_magic_number))
        {
            Col[i]=0;
        } 
    }
    /*it will iterate 9 times to find the intersecting rows with coulmns
        error_location[0]-> for row 1 and coulmn 1
        error_location[1]-> for row 1 and coulmn 2 
        error_location[2]-> for row 1 and coulmn 3
        error_location[3]-> for row 2 and coulmn 1 
        error_location[4]-> for row 2 and coulmn 2
        error_location[5]-> for row 2 and coulmn 3 
        error_location[6]-> for row 3 and coulmn 1
        error_location[7]-> for row 3 and coulmn 2 
        error_location[8]-> for row 3 and coulmn 3
    */
            cout<<"row"<<ROWS[0]<<endl;
            cout<<"row"<<ROWS[1]<<endl;
            cout<<"row"<<ROWS[2]<<endl;
            cout<<"col "<<Col[0]<<endl; 
            cout<<"col "<<Col[1]<<endl; 
            cout<<"col "<<Col[2]<<endl; 


    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
        error_location[Error_location_counter]=ROWS[i]&Col[j];
        cout<<"error locations "<<error_location[Error_location_counter]<<endl;
        Error_location_counter++;
        }
    } 
}