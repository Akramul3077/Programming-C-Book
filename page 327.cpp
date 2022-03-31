#include<bits/stdc++.h>
using namespace std;
int main(){
      char ch ='n';
      int i,x=300;
      float y = 10.375;
      double z = 99.99;

      char *chptr;
      void *ptr;
      chptr = &ptr ;
      for (i=0;i<18;i++){
            cout << " Address = "<< chptr++ <<" Data = "<< *chptr<<endl;
      }


return 0;}
