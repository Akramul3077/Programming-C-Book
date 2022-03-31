#include<bits/stdc++.h>
using namespace std;

int stringlength(char* str);

int main(){

      char* pch ="Home computing group";
      int len;
      len = stringlength(pch);

      cout << endl << " string length : "<< len << endl;



return 0;}

int stringlength(char* str){
      int n = 0;
      while(n++,*str++ !='\0' );
            return n-1;




}
