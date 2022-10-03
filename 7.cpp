#include<iostream>
using namespace std;
class Box
{
private:
     int length,breath,height,volumn;
public:
     Box()
     {

     }
     Box(int x,int y,int z)
     {
          length=x;
          breath=y;
          height=z;
     }
     void calculate()
     {
          volumn = length*breath*height;
     }
     void show()
     {
          cout<<"Volumn is "<<volumn<<endl;
     }
};
  int main()
  {
       Box b1(4,7,2);
       b1.calculate();
       b1.show();
       return 0;
  }
