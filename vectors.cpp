#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n;
int main(){
cin>>n;
int i,x;
for(i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
i=0;
while (i<n){
    cout<<v[i]<<" "<<endl;
    i++;
}


}