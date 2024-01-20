#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    //vector is a class and have its methods
    //to call element from specefic index of the vector use vector_name.at(index)
    //to add new element to the vector use .push_back method

    vector<int> my_vector={1,2,3}; //create object of vector class

    vector<int> my_second_vector(4,50); //four elemnts, all of them are 50
    cout<<my_vector.at(1)<<endl;
    my_vector.push_back(4);
    for(int i=0;i<my_vector.size();i++)
    {
        cout<<i<<") "<<my_vector.at(i)<<endl;
    }
    cout<<my_second_vector.at(3)<<endl;
    return 0;
}