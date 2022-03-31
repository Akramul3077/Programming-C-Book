#include<bits/stdc++.h>
using namespace std;

void local_1(void);
void local_2(void);

int main(){
      int niton = 3;
      local_1();
      local_2();
      cout <<endl <<" niton within main    : "<< niton <<endl;


return 0;}

void local_1(void){
      int niton = 1;
      cout << endl <<" niton within local_1 : "<< niton <<endl;

}

void local_2(void){
      int niton = 2;
      cout<<endl<< " niton within local_2 : "<< niton <<endl;

}
