#include<bits/stdc++.h>
using namespace std;
int main(){
vector<pair<int,int>>v;
int n,y,x,i;
cin>>n;

for(int i=0;i<n;i++){
  cin>>x>>y;
  v.push_back({x,y});
}
i=0;
while(i<n){
    cout<<v[i].first<<" "<<v[i].second<<" ";
    cout<<endl;
    i++;
}
}