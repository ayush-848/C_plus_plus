#include <iostream>
using namespace std;

int isDivisible(string s) {
    long even = 0;
    long odd = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        long bit = s[i] ;
        if (i % 2 == 0) {
            even += bit;
        } else {
            odd += bit;
        }
    }

    long d = even - odd;
    if (d % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<isDivisible(s)<<endl;
}