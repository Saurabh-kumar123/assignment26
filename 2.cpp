#include<iostream>
using namespace std;
class Time
{
private:
     int hor,mm,sec;
public:
     void settime(int x,int y,int z){hor=x;mm=y;sec=z;}
     void showtime(){cout<<hor<<":"<<mm<<":"<<sec<<endl;}
     void normalize()
     {
          mm=mm+sec/60;
          sec=sec%60;
          hor=hor+mm/60;
           mm=mm%60;
     }
     Time add(Time t)
     {
          Time temp;
          temp.hor=hor+t.hor;
          temp.mm=mm+t.mm;
          temp.sec=sec+t.sec;
          return temp;
     }
};
int main()
{
     Time t1,t2,t3;
     t1.settime(4,60,12);
     t1.showtime();
     t2.settime(2,60,70);
     t2.showtime();
     t3=t1.add(t2);
     t3.showtime();
     t3.normalize();
     t3.showtime();
     return 0;
}
