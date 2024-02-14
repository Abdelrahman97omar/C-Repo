#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read_my_file("my_file.txt");
    read_my_file.open();
    string a;
    string b;
    int    x;

    read_my_file>>a; 
    read_my_file>>b; 
    read_my_file>>x; 
    cout<<a<<" "<<b<<" "<<x<<endl;
    if(read_my_file.eof())
    {
        read_my_file.close();
    }
}