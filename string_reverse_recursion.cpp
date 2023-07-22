#include<iostream>
using namespace std;
 void reverse(string& str, int i, int j ) {

    cout << "call recieved for " << str << endl;

    //base case
    if(i>j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);

}

int main() {

    string name = "abcde";
    cout << endl;
   cout<<reverse(name)<<endl;

    return 0;
}