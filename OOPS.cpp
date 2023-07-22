#include <bits/stdc++.h>
using namespace std;
class AbstractEmployee{
    virtual void promotion()=0;
};
class Employee:AbstractEmployee{
private:    
  string name,company;
  int age;
public:
  void setname(string n){
    name=n;
  }
  string getname(){
    return name;
  }
  void intro(){
   cout<<"My Name is - "<<name<<endl;
   cout<<"I work at - "<<company<<endl;
   cout<<"My Age is - "<<age<<endl;
  }
  Employee(string n, string c, int a){
    name=n;
    company=c;
    age=a;
  }void promotion(){
    if(age>30)
    cout<<"promoted"<<endl;
    else cout<<"not promoted"<<endl;
  }
};
class Dev:Employee{
public:
 string favlanguage;
 Dev(string name, string company, int age, string fav)
 :Employee(name,company,age){
  favlanguage=fav;
 }void fix(){
  cout<<getname()<<" fixing bug using "<<favlanguage<<endl;
 }
};


int main(){
  //Employee a=Employee("ayush","useless",21);
  Dev d=Dev("ayush","useless",21,"java");
  d.fix();
   
}
class student{
  int a,b;
  student(string name){
    cout<<name;
  }
}