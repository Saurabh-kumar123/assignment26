#include<iostream>
using namespace std;
class Cube
{
private:
     int a;
public:
     Cube(){cout<<"default constractor"<<endl;}
     Cube(int x)
     {
          a=x*x*x;
          cout<<"volume of cube is "<<a<<endl;
     }
     ~Cube(){cout<<"destractor"<<endl;}
};
 int main()
 {
      Cube c1(6),c2,c3;
      return 0;
 }
