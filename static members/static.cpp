#include<iostream>
using namespace std;
class car
{
    private:
    int modle_number;
    static int price; /*it's not allowed to assgin values for static members 
                        while intializing them inside the class, but i can do 
                        so when declaring it outside*/
    public:
  car(int x)
  {   
      modle_number=x;
      price=20;
  }
        static int getprice()
        {
            return price;
        }
};

    int car::price=20; //i can assign value here

int main()
{   
    cout<<car::getprice()<<endl;
    car c(3);
    cout<<car::getprice()<<endl;
   
    return 0;
}