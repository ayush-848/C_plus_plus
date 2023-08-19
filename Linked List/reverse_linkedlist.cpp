#include <bits/stdc++.h>
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

insertAtTail(node* &tail,int d){
  node* temp =new node(d);
  tail->next = temp;
  tail =temp;
}

insertAtHead(node* &head,int d){
    node *temp = new node(d);
    temp->next=head;
    head=temp;
}

void print(node* &head){
    node* temp=head;
    while (temp->next!= NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}cout<<temp->data<<endl;
}


node* reverse(node* head){
     node* prev = NULL;
     node* curr = head;
     node* temp;
     while(curr!=NULL){
      temp=curr->next;
      curr->next=prev;
      prev=curr;
      curr=temp;
     }return prev;
}


int main(){
    node *node1=new node(1);
    node* head=node1;
    node* tail=node1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    print(head);
    node* newhead=reverse(head);
    print(newhead);
}
