#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a , b, c;
    cout <<" Enter three value is ( separated by space ) :";
    cin >> a, b, c;
    cout <<endl;
    cout <<" The largest value is :";
   /* if (a>b || a>c){
        cout << a <<endl;
    }
    else if (c>a || c>b){
        cout << c <<endl;
    }
    else
        cout << b <<endl;



   if (a>b ||a>c){
        cout << a <<endl;
       }
      if else(c>a ||c>b){
        cout << c <<endl;
      }
    else
        cout << b <<endl;
*/
      if(a > b){
        if(a > c)
            cout << a <<endl;
        else
            cout << c <<endl;
            }
  else{
        if(c > b)
            cout << c <<endl;

        else
            cout << b <<endl;
        }

    return 0;
}
