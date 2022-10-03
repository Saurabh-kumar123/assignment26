#include<iostream>
using namespace std;
class Counter
{
private:
     int coutt=0;
     public:
      //static int k;
       //Counter(){k++;}
       int getcount()
       {
            return coutt;
       }
       void inc_count()
       {
            coutt++;
       }
};
//int Counter::k=0;
int main()
{
     Counter c;
     cout<<"before calling counter function "<<c.getcount()<<endl;
     c.inc_count();
     cout<<"after calling counter function "<<c.getcount()<<endl;
     c.inc_count();
     cout<<"last calling counter function "<<c.getcount()<<endl;
     //cout<<Counter::k;
     return 0;
}
