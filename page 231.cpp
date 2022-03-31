#include <bits/stdc++.h>
using namespace std;
void back_point(void){
 char ch;
 if((ch=getchar()) != '\n')
            back_point();
 putchar(ch);
}


int main(){
      cout<<" Type a line of text :";
      back_point();


return 0;}
