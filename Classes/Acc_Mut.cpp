#include<iostream>
using namespace std;

class employee_data
{
    private:
        char gender;
        int age;

    public:
    //Those are called property functions
        void set_age(int x, int mul)
        {
            age=x*mul;
        }
        void set_gender(char g)
        {
            gender=g;
        }
        int get_age()
        {
            return age;
        }
        char get_gender()
        {
            return gender;
        }
};
int main()
{
    employee_data Ali;

    
    Ali.set_age(35,2);
    Ali.set_gender('M');

    cout<<(Ali.get_age())*2<<endl;
    cout<<(char)(Ali.get_gender()-2)<<endl;
    return 0;
}