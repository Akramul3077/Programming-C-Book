#include<bits/stdc++.h>
using namespace std;
int main(){
      char name [30];
      int age;

      cout << endl << " What is your name : ";
      cin >> name;
      cout << endl << " How old are you : ";
      cin >> age;
      if (age<=0)
            cout <<" Sorry ! age can,t be zero or negative . "<< name <<endl<<endl;
      else
            cout << " Hey "<< name <<" next year you will be "<< age+1 <<endl;


return 0;}
