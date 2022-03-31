#include <bits/stdc++.h>
using namespace std;

int main(){
      int n = 10;
      cout << " In scope level 1 : "<< n <<endl;
      {
            n++;
            cout << " In scope level 2 : "<< n << endl<<endl;
            {
                  int n = 1;
                  cout << " In scope level 3 : "<< n <<endl;
                  n++;
                  cout << " In scope level 3 : n(n++) " << n <<endl<<endl;
            }
            cout << " In scope level 2 : " << n << endl;
      }
      cout << " In scope level 1 : "<< n << endl;

return 0;}
