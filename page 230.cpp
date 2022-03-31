#include<bits/stdc++.h>
using namespace std;

long long int find_factorial(long long int n){
    if(n<=1)
        return 1;
    else
        return (n*find_factorial(n-1));

}


int main(){
    long long int x;
    x=find_factorial(5);
    cout<<endl<<" Factorial is : "<< x <<endl;

return 0;}
