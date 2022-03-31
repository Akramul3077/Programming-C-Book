#include <bits/stdc++.h>
using namespace std;
int main(){
   int grade [5],i,sum=0;
   float average;
   for(i=0;i<5;i++){
        cout<<endl << i+1 <<" Enter grade : ",i+1;
        cin>>grade[i];
        sum+=grade[i];
   }
   average=sum/5.0;
   cout <<endl<<endl<<endl<<endl<<"Average is :"<<average<<endl;

return 0;}
