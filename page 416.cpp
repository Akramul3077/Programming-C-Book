#include<bits/stdc++.h>
using namespace std;

int main(){
      struct student{
            char* name;
            long int id;
            char* dept_name;

            struct term{
                  int sem;

                  struct gpa{
                        float gpa;
                  }gpa1;
            }term1;
            float cgpa;
      }niton;
      niton.name           = " Akram ";
      niton.id             =  522482 ;
      niton.dept_name      = " Cse ";
      niton.term1.sem      = 6;
      niton.term1.gpa1.gpa =3.50;
      niton.cgpa;

      cout << cout << " Student name      : "<< niton.name <<endl;
      cout << cout << " Student id_no     : "<< niton.id <<endl;
      cout << cout << " Student Dept_name : "<< niton.dept_name<<endl;
      cout << cout << " Student semister  : "<< niton.term1.sem<<endl;
      //cout << cout << " Student Gpa       : "<< niton.term1.gpa<<endl;
     // cout << cout << " Student Cgpa      : "<< niton.cgpa<<endl;





return 0;}
