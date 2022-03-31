#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2][2]={5,4,4,4};
    int b[2][2]={6,7,4,8};
    int c[2][2],i,j,k,sum;
    cout <<"Matrix A is :\t\t"<<endl<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"\t\t"<<a[i][j]<<endl;
            cout<<endl;
        }
    }
    cout <<"Matrix B is :\t\t"<<endl<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"\t\t"<<b[i][j]<<endl;
            cout<<endl;
        }
    }
    cout <<endl<<"Multiplication of A and B is :"<<endl<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
                sum=0;
                for(k=0;k<2;k++){
                    sum=sum+a[i][j]*b[i][j];
                    c[i][j]=sum;
                    cout<<c[i][j]<<endl;


                }

            cout<<endl;
        }
    }




return 0;}
