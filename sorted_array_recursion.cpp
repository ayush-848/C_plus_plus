#include <iostream>
using namespace std;
bool sort(int a[],int n){
    if(n==0 || n==1){
       return true;
    }if(a[0]>a[1]){
        return false;
    }else{
        return sort(a+1,n-1);
    }
}
int main(){
  cout<<"enter size of array"<<endl;
  int n;
  cin>>n;
  int *a=new int[n];
  cout<<"enter the elements inside the array"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"your array is:- "<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl<<endl;
  if(sort(a,n)){
    cout<<"sorted"<<endl;
  }else cout<<"not sorted"<<endl;
}