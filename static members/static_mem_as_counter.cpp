#include<iostream>
using namespace std;

/*static variable in class can be used as a counter for the number of objects*/

class student{
    public:
    int roll_number;
static int student_number;

student()
{
    student_number++;
    roll_number=student_number; /* to save roll no of the student based on "student_number"
     which is static member and will increase by 1 as we create new object in student class*/
}
};
int student::student_number=0;
int main()
{
    student s1;
    student s2;
    student s3;
    
    cout<<s1.roll_number<<endl;
    cout<<s2.roll_number<<endl;
    cout<<s3.roll_number<<endl;

    return 0;
}