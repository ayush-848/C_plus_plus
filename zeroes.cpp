#include<iostream>
using namespace std;
int zero(int a[], int n, int s,int c){
  if(n==c){
    return 0;
  }if(a[c]==s){
    return 1+zero(a,n,s,c+1);
  }else return zero(a,n,s,c+1);
}
int main(){
   int n,i;
   string s;
    cin>>n;
   s=to_string(n);
   int l=s.length();
  int *a=new int[l];
  for(i=l-1;i>=0;i--){
    a[i]=n%10;
    n=n/10;
  }cout<<zero(a,l,0,0);}