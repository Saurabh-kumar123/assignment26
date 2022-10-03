#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
     char name[20],sec,roll[10];
     int age;
     public:
     Student(char e[],char x,char s[],int z)
     {
          strcpy(name,e);
          strcpy(roll,s);
          age=z;
          sec=x;
     }
     void showdetail()
     {
          cout<<"name - "<<name<<endl<<"roll - "<<roll<<endl<<"age - "<<age<<endl<<"sec - "<<sec<<endl;
     }
};
int main()
{
     Student s("saurabh",'H',"0304115",22);
     s.showdetail();
     return 0;
}
