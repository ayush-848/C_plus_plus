#include<bits/stdc++.h>
using namespace std;
int missing(int a[],int n){
    if(n==1){
        return n-1;
    }
    if(a[n-1]==n-1)
    {
        (a,n-1);
    }else return n-1;

}
int main() {
    int n;
    cin>>n;
    return 0;
    int a[]={1,2,3,5,6,7,8};
    cout<<missing(a,8)<<endl;
}