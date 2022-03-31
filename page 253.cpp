#include<bits/stdc++.h>
using namespace std;
int x = 100;
void local_var(void);
void static_var(void);
void global_var(void);

int main(){
      cout << endl << " First Time  : "<<endl<<endl;
      local_var();
      static_var();
      global_var();
      cout << endl << " Second Time : "<<endl<<endl;
      local_var();
      static_var();
      global_var();


return 0;}

void local_var(void){
      int x = 1 ;
      cout << " As a local variable :  "<< endl;
      cout << "\t  x   = " << x <<endl;
      x++;
      cout<< "\t  x++ = "<< x <<endl;

}
void static_var(void){
     static int x = 10 ;
      cout << " As a static variable :  "<< endl;
      cout << "\t  x   = " << x <<endl;
      x++;
      cout<< "\t  x++ = "<< x <<endl;

}
void global_var(void){
      int x ;
      cout << " As a global variable :  "<< endl;
      cout << "\t  x   = " << x <<endl;
      x++;
      cout <<"\t  x++ = "<< x <<endl;

}


