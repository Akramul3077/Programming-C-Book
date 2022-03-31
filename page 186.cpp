#include <bits/stdc++.h>
using namespace std;
int main (){
    int count ,score,total;
    count = total = 0;
    while(count < 4 ){
        cout<<endl <<" Enter your score :";
        cin >>score;
        if ((score<0)||(score>100))
            continue;
        total+=score;
        cout <<endl<<" Total score is :"<<total<<endl<<endl;
        count++;
    }

return 0;}
