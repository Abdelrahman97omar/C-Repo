#include<iostream>
using namespace std;
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
    // cout<<"the wrong number: "<<wrong_number[0]<<endl;
    // cout<<"the wrong number: "<<wrong_number[1]<<endl;
    // cout<<"the wrong number: "<<wrong_number[2]<<endl;   
    // cout<<"the correct number is: "<<*correct_magic_number<<endl;
}
