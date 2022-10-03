#include<iostream>
using namespace std;
class static_count
{
     public:
     static int k;
public:
     static_count()
     {
          k++;
     }
};
int static_count::k=0;

int main()
{
     static_count s1,d,w;
     cout<<static_count::k;
     return 0;
}
