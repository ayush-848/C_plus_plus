#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a,b,c;
    cout<<"enter number of elements"<<endl;
    int n;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }for(int i=0;i<n;i++){
        if(a[i]==0){
            c.push_back(a[i]);
        }else b.push_back(a[i]);
    }for(int i=0;i<c.size();i++){
        b.push_back(c[i]);
    }
    for(auto i:b){
        cout<<i<<" ";
    }
}