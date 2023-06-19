#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,target;
    cin>>n;
   vector<int>a;
    for(i=0;i<n;i++){
        int p;
        cin>>p;
        a.push_back(p);
    }
    cin>>target;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
}