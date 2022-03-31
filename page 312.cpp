#include <bits/stdc++.h>
using namespace std;
int main(){
      int x , y , *z;
      x = 44;
      y = 40;
      z = &x;

      cout << " x = "<< x << "\t y = "<< y << "\t z = "<< z <<endl<<endl;
      y = *z; *z = 10;
      cout << " x = "<< x << "\t y = "<< y << "\t z = "<< z <<endl<<endl;


return 0;}
