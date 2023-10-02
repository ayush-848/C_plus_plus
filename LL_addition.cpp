#include<bits/stdc++.h>
using namespace std;
class node{
  public:
     int data;
     node* next;
     node(int d){
        data=d;
        next=NULL;
     }
};




void insertAtHead(node* &head,int data){
    node *temp = new node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(node* &tail,int data){
    node *temp=new node(data);
    tail->next=temp;
    tail=temp;
}

void print(node* &head){
    node* temp=head;
    while (temp->next!= NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}cout<<temp->data<<endl;
}

int main(){
    node *node1=new node(5);
    node* head=node1;
    node* tail=node1;
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);
}
