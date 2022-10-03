#include<iostream>
using namespace std;
class Complex
{
private:
     int real,img;
public:
     void setdata(int x,int y){real=x;img=y;}
     void showdata()
     {
        cout<<real<<"+"<<img<<"i"<<endl;
     }
     Complex add(Complex c)
     {
          Complex temp;
          temp.real=real+c.real;
          temp.img=img+c.img;
          return temp;
     }
};
  int main()
  {
       Complex c1,c2,c3,c4;
       c1.setdata(3,6);
       c2.setdata(5,1);
       c1.showdata();
       c2.showdata();
       c3=c1.add(c2);
       c3.showdata();

       return 0;
  }
