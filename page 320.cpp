#include<bits/stdc++.h>
using namespace std;
int main(){
      int x , *ptr ,a[5]={20,30,40,50,60};
      ptr = a;
      x = *ptr++;
      cout << " ptr = "<< ptr <<"\t x = "<< x <<endl;
      x = *++ptr;
      cout << " ptr = "<< ptr <<"\t x = "<< x <<endl;
      x = ++*ptr;
      cout << " ptr = "<< ptr <<"\t x = "<< x <<endl;

      cout << " ptr = "<< ptr <<"\t a[2] = "<< a[2] <<endl;





return 0;}
