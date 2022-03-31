#include <bits/stdc++.h>
using namespace std;
int x = 10;
void ak(){
      cout << endl << " In x() : x = "<< x << endl;
      {
            int x = 100;
            cout << endl << " In x(), Outside block statement : x = "<< x << endl;
      }
      cout << endl << " In x(), Inside block statement  : x = "<< x << endl;
}


int main(){

      ak();
      cout << endl << endl << " In main () : x = "<< x << endl;


return 0;}
