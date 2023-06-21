#include <iostream>
using namespace std;
int k;
int search(int a[],int n,int s){
/*if(n==c){
    return -1;}
    if(a[c]==s){
        return c;
    }
    search(a,n,s,c+1);*/
    if(n==0)
    return -1;
    if(a[0]==s){
        return k;
    }
    else {
        k++;
        search(a+1,n-1,s);
    }
  
}
int main()
{
    cout<<"enter array size"<<endl;
  int n;
  cin>>n;
  int *a=new int[n];
  int s;
  cout<<"enter "<<n<< " elements"<<endl;
    for (int i = 0; i < n; i++)
    {cin>>a[i];
    }
  cout<<"enter number to search"<<endl;
  cin>>s;
  int p=search(a,n,s);
  if(p==-1){
    cout<<"not present"<<endl;
  }
  else
     cout<<"your element is present in "<<search(a,n,s)+1<<"th position"<<endl;
}