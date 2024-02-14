#include<iostream>
#include<vector>
using namespace std;
int main()
{   vector<int> s={1,2,3};
    vector<int>::iterator a=s.begin();
    // auto it=s.begin(); // iterators are usally defined as auto
    cout<<*a<<endl;
    a++;
    cout<<*a<<endl;
    a++;
    cout<<*a<<endl;
    a++;
cout<<"-----------------------"<<endl;
    vector<int> z={7,3,65};
    vector<int>::iterator b=z.end()-1; //.end() method makes the iterator points to address
                                        // after the last index
    cout<<*b<<endl;
    b--;
    cout<<*b<<endl;
    b--;
    cout<<*b<<endl;
    b--;

    return 0;
}