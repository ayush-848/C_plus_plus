#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            cout<<n-i;
        }cout<<"\n";
    }
}