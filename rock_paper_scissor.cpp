#include<bits/stdc++.h>
using namespace std;
char userchoice(){
 cout<<"enter your choice"<<endl;
 char c;
 do{
    cout<<"*********************************************************\n";
    cout<<"r for rock"<<endl;
    cout<<"p for paper"<<endl;
    cout<<"s for scissor"<<endl;
     cin>>c;
 }while(c!='r'&&c!='P'&&c!='p'&&c!='R'&&c!='s'&&c!='S');
 return c;
}
char computerchoice(){
    srand(time(NULL));
   int n=rand()%3+1;
   switch (n)
   {
   case 1:return 'r';
   case 2:return 'p';
   case 3:return 's';
   }
}
void show(char choice){
  switch(choice){
    case 'r':
     cout<<"rock\n";
     break;
     case 'p':
     cout<<"paper\n";
     break;
     case 's':
     cout<<"scissor\n";
     break;
   }
}
int winner(char u, char c){
    switch (u)
    {
    case 'r':
     if(c=='r')
     cout<<"tie\n";
     else if(c=='s')
     cout<<"you win\n";
     else cout<<"computer win"<<endl;
        break;
    case 's':
     if(c=='s')
     cout<<"tie\n";
     else if(c=='p')
     cout<<"you win\n";
     else cout<<"computer win"<<endl;
        break;
    case 'p':
     if(c=='p')
     cout<<"tie\n";
     else if(c=='r')
     cout<<"you win\n";
     else cout<<"computer win"<<endl;return 1;
        break;    
    }
}
int main(){
    
char user;
char computer;
user=userchoice();
computer=computerchoice();
cout<<"you choose ";
show(user);
cout<<"computer choose ";
show(computer);
cout<<endl;
winner(user,computer);

cout<<"*********************************************************"<<endl;
cout<<endl;
cout<<endl;}
