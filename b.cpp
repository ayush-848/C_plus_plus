#include<stdio.h>
using namespace std;
int main(){
    char ch;
    scanf("%c",&ch);
    int n=(int)ch;
    printf("%d \n",n);
    n=n+32;
     printf("%d \n",n);
    char c=(char)n;
    printf("%c \n",c);
}