#include<bits/stdc++.h>
using namespace std;
void remove(int a[], int n){
    vector<int>v;
   if(n==1){
   cout<<a[0]<<endl;
    return ;
   }
   if(a[0]==a[1]){
   remove(a+1,n-1);}
   if(a[0]<a[1]){
    cout<<(a[0])<<" ";
    remove(a+1,n-1);
   }
}
int main(){
    int a[]={1,1,1,2,2,2,2,3,3,3,5,5,5,6,6};
    remove(a,sizeof(a)/sizeof(a[0]));
  

}
f.S=function(a){this.A=!0;var b=I(this);4===b&&b!==this.m&&(J(this),this.start());N(this,void 0,a);this.A=!1};