#include<bits/stdc++.h>
using namespace std;
int search(int a[],int n,int s,int c){
  if(a[0]==s){
    return 0;
  }
    if(c==0){
        return -1;
    }
    if(a[c]==s){
        return c;
    }else search(a,n,s,c-1);
}
int main(){
     cout<<"enter array size"<<endl;
  int n;
  cin>>n;
  int *a=new int[n];
  int s,c;
  cout<<"enter "<<n<< " elements"<<endl;
    for (int i = 0; i < n; i++)
    {cin>>a[i];
    }
  cout<<"enter number to search"<<endl;
  cin>>s;
  c=n;
  int p=search(a,n,s,c);
  if(p==-1){
    cout<<"not present"<<endl;
  }
  else
     cout<<"your element is present in "<<p<<"th position"<<endl;
}