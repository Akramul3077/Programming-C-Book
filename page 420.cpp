#include<bits/stdc++.h>
using namespace std;
int main(){
      struct partsinfo{
            char p_name[24];
            char p_no[10];
            char cmpny[30];
            float price;
      };
      int n;

      struct partsinfo filter[5]={
            cout << " Air Filter "<<" AF2809 "<< " CAT "<<  1800.00 <<endl;
            cout << " Fuel Filter "<<" FF180A "<< " CAT "<<  950.00 <<endl;
            cout << " Hyd Filter "<<" HF1008C "<< " CAT "<<  1290.00 <<endl;
            cout << " Hyd Filter "<<" MA123HH "<< " MA "<<  3000.00 <<endl;
            cout << " oil Filter "<<" OFC912 "<< " FLE "<<  1800.00 <<endl;

      };

      cout << " NAME      ID     VENDOR     PRICE     "<<endl;
      cout << "---------------------------------------"<<endl;

      for ( n=0 ; n<5 ; n++){

            cout << endl << filter[n].p_name << endl;
            cout << endl << filter[n].p_no << endl;
            cout << endl << filter[n].cmpny << endl;
            cout << endl << filter[n].price << endl;
      }



return 0;}
