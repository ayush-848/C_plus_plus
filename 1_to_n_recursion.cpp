#include <iostream>
using namespace std;
void power(int x,int k){
    if(x==1)
    {return;}

cout<<k-x<<" ";

power(x-1,k);
}
int main(){
    int x;
    cin>>x;
    int k=x+2;
    power(x+1,k);

}