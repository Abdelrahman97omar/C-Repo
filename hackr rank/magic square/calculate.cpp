#include<iostream>
using namespace std;

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