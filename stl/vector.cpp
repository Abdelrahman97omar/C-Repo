#include<iostream>
//vector is a template class
#include<vector>
using namespace std;
int main()
{
vector<int> z={8,9}; //create object from vector template class
//vector z [, , , , ,back]
//to enter new values in the vector
z.push_back(3);
z.push_back(2);
/*==========================================================================*/
vector<int> z2(z); //copy constructor z2 will be a copy of z
/*==========================================================================*/
vector<int> v(6,33); //vector of size 6 and the intial values of all of them are 33
/*================================================================*/
z2.swap(v); //put data of v in vector z
/*===================================================*/
z.push_back(6);
for(int i=0;i<=z.size();i++)
{
    cout<<z[i]<<endl;
}

z.pop_back(); // delete last element
/*==============================================================================*/
vector<int> s={1,23,4,2,65,23};

s.insert(s.begin()+1,7);
s.erase(s.begin()+3);
// s.erase(s.begin()+3,s.begin()+5); erase from element 3 to element 5

for(int x:s)
{
    cout<<"insert"<<x<<endl;
}
/*=====================================================================================*/

vector<int> k(10,25);
for(int x:k)
{
    cout<<" of k is"<< x<<endl; 
}
k.resize(5);//make size of k vector 5 not 10 but the rest of the elemnts are 
            //still present in memory
k.shrink_to_fit();//remove elements after index 5
for(int x:k)
{

    cout<<"of k after shrink is"<< x<<endl; 
}
    return 0;

}
