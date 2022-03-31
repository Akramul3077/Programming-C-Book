#include <bits/stdc++.h>
using namespace std ;
int main (){
    int i , vowel ,consonant , digit , word ,other;
    char strings [80],c;
    i = vowel = consonant = digit = word = other = 0;
    cout <<"Program to count vowels , consonant , words , digit "<<endl;
    cout <<"and other characters in the string ............"<<endl<<endl;

    cout <<"Type a string :";
    cin >>("%[^\n]", strings);

    while((c = tolower(strings [i++]))! ='\0'){
        if (c =='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u')
            ++vowel;
        else
            if ((c>'a' &&c<'e') || (c>'e' &&c<'i')||(c>'i' &&c<'o') || (c>'o' &&c<'u') ||(c>'u'))
            ++consonant;
        else
            if (c>='0' &&c<=='9')
            ++digit;
        else
            ++other;
    }

    ++word;
    cout <<" # of vowels            :"<<vowel<<endl;
    cout <<" # of consonants        :"<<consonants<<endl;
    cout <<" # of Digit             :"<<digit<<endl;
    cout <<" # of Words             :"<<words<<endl;
    cout <<" # of Other characters  :"<<other<<endl;





return 0;}
