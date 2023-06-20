#include <iostream>
using namespace std;

int sort(int a[],int n){
 if (n<= 0)
        return 0;
    return (sort(a, n - 1) + a[n - 1]);
}
int main(){
  /*cout<<"enter size of array"<<endl;
  int n;
  cin>>n;
  int *a=new int[n];
  cout<<"enter the elements inside the array"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }*/
  int a[]={1,2,3,4,5};
  int n=5;
  cout<<sort(a,n)<<endl;
  }