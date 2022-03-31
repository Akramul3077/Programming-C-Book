#include<bits/stdc++.h>
using namespace std;
struct student{
      string name;
      int id_no;
      string dept_name;
      string shift_name;
      int roll_no;

};


int main(){
      struct student akram;

      cout << " Enter your name       : ";
      cin >> akram.name;

      cout<<endl << " Enter your id_no      : ";
      cin >> akram.id_no;

      cout<<endl << " Enter your dept_name  : ";
      cin >> akram.dept_name;

      cout<<endl << " Enter your shift_name : ";
      cin >> akram.shift_name;

      cout<<endl << " Enter your roll_no    : ";
      cin >> akram.roll_no;

      cout << endl<<" ************************************ " <<endl <<endl;


      cout << " Student data "<<endl ;
      cout << " ------------------------------"<<endl <<endl;

      cout << " Name        :   "<< akram.name << endl<<endl;
      cout << " id_no       :   "<< akram.id_no << endl<<endl;
      cout << " dept_name   :   "<< akram.dept_name << endl<<endl;
      cout << " shift_name  :   "<< akram.shift_name << endl<<endl;
      cout << " roll_no     :   "<< akram.roll_no << endl<<endl;

      cout << endl <<endl <<endl;


return 0;}
