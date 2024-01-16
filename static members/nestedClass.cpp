#include<iostream>
using namespace std;
class outer{
public:
int a;
static int b;
    void display()
    {
        cout<<x<<endl;
    }
    class inner{
        public:
        int x;
        void show()
        {
            cout<<b;
        }
        inner second;
    };
};
int outer:: b;
int main()
{
    outer first;
    first.display();
    second.show();
}