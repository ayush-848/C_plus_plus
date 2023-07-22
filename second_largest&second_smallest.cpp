#include<bits/stdc++.h>
using namespace std;
int ssmallest(int a[],int n){
     int smallest=a[0];
    int second=a[1];
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            second=smallest;
            smallest=a[i];

        }else if(a[i]>smallest&&a[i]<second){
            second=a[i];
        }
    }return second;
}
int slargest(int a[],int n){
    int largest=a[0];
    int second=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            second=largest;
            largest=a[i];

        }else if(a[i]<largest&&a[i]>second){
            second=a[i];
        }
    }return second;
}
int main() {
    int n;
    cin>>n;
    int *a= new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }cout<<"["<<slargest(a,n)<<","<<ssmallest(a,n)<<"]"<<endl;
}