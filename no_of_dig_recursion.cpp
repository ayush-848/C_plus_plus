#include<iostream>
using namespace std;
int dig(int n){
    if(n==0)
    return 0;
    else
        
        return 1+dig(n/10);
    

}
int main(){
    int n;
    cin>>n;
    cout<<dig(n)<<endl;
}