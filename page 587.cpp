#include<bits/stdc++.h>
using namespace std;

#define MAX_ELEMENT    50
#define TRUE     1
#define FALSE    0


int main(){
      int i = 0;
      int  found=TRUE;
      int  keyElement = 0;
      int totalElements = 0;
      int array [MAX_ELEMENT];

      cout << endl << " How many elements : ";
      cin >> totalElements;
      cout << endl <<endl;

      for (i=0; i<totalElements; i++ ){
            cout << " Enter element # "<<i+1<< " : ";
            cin >> array[i];
            cout <<endl;

      }

      cout <<endl << " Element to searched : ";
      cin >> keyElement;


      for (i=0;i<keyElement; i++){
            if (array[i]==keyElement){
                  cout << endl<<" " <<  keyElement << " is at "<< i+1 << endl;
                  found = TRUE;
                  break;

            }

      }
      if(FALSE==found){
            cout <<endl << keyElement<< " is not the list .";
      }




return 0;}
