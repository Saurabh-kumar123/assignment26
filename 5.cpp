#include<iostream>
using namespace std;
class Date
{
private:
     int day,month,year;
public:
     Date(int x,int y,int z)
     {
       day=x;
       month=y;
       year=z;
       cout<<day<<"/"<<month<<"/"<<year;
     }
};
int main()
{
     Date d(19,9,2022);
     return 0;
}
