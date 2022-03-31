#include <bits/stdc++.h>
using namespace std;

int x;
void ak(void){
      x = 10;
      cout << endl << " In x() : x = "<< x << endl;
}

int main(){
      cout << endl << " Before calling x() : x =  "<< ++x << endl;
      ak();
      cout << endl << " After  calling x() : x =  "<< x << endl;




return 0;}
