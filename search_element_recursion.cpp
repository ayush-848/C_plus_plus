#include <iostream>
using namespace std;
bool search(int input[],int size,int x){
    if(size==0){
        if(input[0]!=x)
        return false;
        else return true;
    }if(input[size]==x){
      return true;
    }else search(input,size-1,x);
     
    
}
int main()
{
    cout<<"enter array size"<<endl;
  int n;
  cin>>n;
  int *a=new int[n];
  int s;
  cout<<"enter number to search"<<endl;
  cin>>s;
  cout<<"enter "<<n<< " elements"<<endl;
    for (int i = 0; i < n; i++)
    {cin>>a[i];
    }
    if(search(a,n,s)){
        cout<<"true"<<endl;
    }else cout<<"false"<<endl;
}