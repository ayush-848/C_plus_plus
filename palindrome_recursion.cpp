#include<iostream>
using namespace std;
bool pal(string s, int i,int j){
    if(i>j){
        return true;
    }if(s[i]!=s[j]){
        return false;
    }else return pal(s,i+1,j-1);
}
int main(){
    string s;
    cin>>s;
    if(pal(s,0,s.length()-1)){
        cout<<"It is a Palindrome"<<endl;
    }else cout<<"It is not a palindrome"<<endl;
}

