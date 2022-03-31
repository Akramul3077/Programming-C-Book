#include<bits/stdc++.h>
using namespace std;

struct node{
      char name[30];
      char id_no[10];
      char major[10];
      struct node*next;

};
typedef struct node link;
link*head;

void get_info(void);


int main(){
      get_info();
      getch();


return 0;}

void get_info(void){
      link*tail, *node;
      char ch;
      tail = head = NULL;

      cout <<endl << " DO you want to enter data ? [ y/n ] ";
      ch=getch();

      while(ch != 'n'){
            node=(link *)malloc(sizeof(link));
            cout << endl << " Student name  : ";
            gets(node-> name);
            fflush(stdin);

            cout << endl << " Student Id#   : ";
            gets(node-> id_no);
            fflush(stdin);

            cout << endl << " Student major : ";
            gets(node-> major);

            node->next=NULL;

            if(head==NULL){
                  head = node;

            }
            else{
                  tail->next=node;
            }
            tail=node;
            cout << endl <<endl <<endl <<" Do you want to enter again [ y/n ]";
            ch=getch();


      }
      cout << endl << "\t\tName\t\tId#\t\tMajor"<<endl;
      cout <<endl <<"\t\t~~~~\t\t\t~~~\t\t\t\t~~~~~"<<endl;


      while(head !=NULL){
            cout << endl <<"\t\t"<<head->name<<"\t\t\t"<<head->id_no<<"\t\t\t"<<head->major<<endl;
            head= head->next;
      }



}

