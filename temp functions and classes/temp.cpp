#include<iostream>
using namespace std;

/*Write the class AddElements here*/
template<typename T>
class AddElements
{
    private:
    T a;

public:
    AddElements(T x)
    {
        a=x;
    }
    T add(T x);
    std::string concatenate(std::string x);
};

/*--------------Here, the template function is for any data type---------------*/
template <typename T>
T AddElements<T>::add(T x) {
    return x + a;
}
/*--------------Here, the template is for string only "specialized template"---------------*/
template <>
std::string AddElements<std::string>::concatenate(std::string x) 
{
    return a+x;
}
/*===============================================================================*/
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1=3.1,element2=2.9;
        AddElements<float> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1=3, element2=2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1="abdo", element2="omar";
        AddElements<std::string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
