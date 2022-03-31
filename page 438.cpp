#include<bits/stdc++.h>
using namespace std;

struct person {
      char* name;
      int  age;
};

void showpersoninformation(struct person p1);

int main(){
      struct person niton;
      niton.name = " M Kamruzzaman ";
      niton.age = 27;
      cout << endl << " In main(), before calling showpersoninformation()"<<endl;
      cout << endl << " Name = "<< niton.name << " Age " << niton.age <<endl;

      cout <<endl <<endl <<" In showpersoninformation()"<<endl<<endl;
      showpersoninformation(niton);

      cout << endl <<endl << " In main(), After calling showpersoninformation()"<<endl<<endl;
      cout << " Name = "<< niton.name << " Age "<< niton.age<<endl;

return 0;
}
void showpersoninformation(struct person p1)
{
      p1.name = "Rokibul Ahsan";
      p1.age = 26;
      cout << endl << " Name = "<< p1.name << " Age "<< p1.age <<endl;

}
