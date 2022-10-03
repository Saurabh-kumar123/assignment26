#include<iostream>
using namespace std;
class Bank
{
private:
     int principal,intrest,year,SI;
public:
     Bank(int x,int y,int z)
     {
          principal=x;
          intrest=y;
          year=z;
     }
     void calculate()
     {
          SI=(principal*intrest*year)/100;
     }
     void show()
     {
          cout<<"simple intrest is "<<SI<<endl;
     }

};

  int main()
  {
       Bank b1(2,2000,10);
       b1.calculate();
       b1.show();
  }
