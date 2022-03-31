#include <bits/stdc++.h>
using namespace std;
int main(){
      int i;
      char ch, str[50];
      i=0;
      cout << " Type few character : ";
      while(ch=getchar() !='\n'){
            str[i] = ch;
            i++;

      }
      str[i] = '\0';
      cout << endl << " You have typed : "<< str << endl;


return 0;}
