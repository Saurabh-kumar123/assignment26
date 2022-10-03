#include<iostream>
using namespace std;
class e_Bill
{
private:
     int c_no,unit;
     char c_name[20];
     double bill;
public:
     void setdata()
     {
          cout<<"Details of customer are ::"<<endl<<endl;
          cout<<"Customer No is - "<<c_no<<endl;
          cout<<"Customer Name is - "<<c_name<<endl;
          cout<<"Total unit used in - "<<unit<<endl;
          cout<<"Total bill of Customer : "<<bill<<endl;
     }
     void get()
     {
        cout<<"enter details customer Below ::\n"<<endl;
        cout<<"enter customer no : ";
        cin>>c_no;
        cout<<"\nenter customer name : ";
        cin>>c_name;
        cout<<"\nenter No of unit is used : ";
        cin>>unit;
        cout<<endl;
     }
     void calculate()
     {
          if(unit<=100)
               bill=100*1.20;
          else if(unit<=200)
               bill= (100*1.20)+(unit-100)*2;
          else if(unit>200)
               bill=(100*1.20+100*2)+(unit-200)*3;
     }
};

   int main()
   {
        e_Bill b1;
        b1.get();
        b1.calculate();
        b1.setdata();
        return 0;
   }
