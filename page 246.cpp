#include <bits/stdc++.h>
using namespace std;
int x = 10;

void x1(void){
      cout << endl << " from x1()   : x = "<< x <<endl;
      x = 15;
}
void x2(void){
      cout << endl << " from x2()   : x = "<< x <<endl;

}

int main(){
      cout << endl << " from main() : x = "<< x <<endl;
      x1();
      x2();


return 0;}
