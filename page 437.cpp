#include<bits/stdc++.h>
using namespace std;
struct person
{
      char* name;
      int  age ;
};
void showpersoninformation(struct person p1);

int main(){
      struct person niton;
      niton.name = " M Kamruzzaman ";
      niton.age = 27;
      showpersoninformation(niton);


return 0;}

void showpersoninformation(struct person p1){
      cout << endl << " Name "<< p1.name << " Age "<< p1.age <<endl;
}
