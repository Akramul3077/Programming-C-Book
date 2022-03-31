#include<bits/stdc++.h>
using namespace std;

struct person{
      char* name;
      int age;
};


int main(){
      struct person niton,rakib;
      strcpy (niton.name "M Kamruzzaman");
      niton.age=27;
      rakib=niton;
      cout << endl << "niton : Name = "<<niton.name <<" Age = "<< niton.age;
      cout << endl << "rakib : Name = "<<rakib.name <<" Age = "<< rakib.age;


return 0;}
