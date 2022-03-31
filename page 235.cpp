#include <bits/stdc++.h>
using namespace std;

void recursivecall(int);


int main(){

      int a;
      cout<<" Enter your value : ";
      cin>>a;
      recursivecall(a);




return 0;}

void recursivecall( int x){
      if(x==0)
            return;
      cout<<endl<<" "<<  x <<endl;
      recursivecall(x-1);
      cout<<" call end ."<<endl<<endl;

}
