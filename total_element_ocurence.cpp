#include <iostream>
using namespace std;

int l=0;
int search(int a[],int n,int s,int c){
    if(n==c){
    return l;}
    if(a[c]==s){
        l++;
    }
    return search(a,n,s,c+1);
    
}
int main(){
  int n;
  cin>>n;
  int *a=new int[n];
  int s;
  cout<<"enter "<<n<< " elements"<<endl;
    for (int i = 0; i < n; i++)
    {cin>>a[i];
    }cout<<"enter s"<<endl;
    cin>>s;
    cout<<search(a,n,s,0)<<endl;
}