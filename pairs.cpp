#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    p=make_pair(5,"ayush");
    pair<int,string>&p1=p;
    p1.first=9;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<< p.first<<" "<<p.second<<endl;
    
}