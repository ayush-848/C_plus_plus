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
void del(node*&head, int val){
     node* temp,*ptr;
     ptr=head;
     while (ptr->data!=val)
     {
        temp=ptr;
        ptr=ptr->next;
     }temp->next=ptr->next;
     free(ptr);  
}

void print(node* &head){
    node* temp=head;
    while (temp->next!= NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}cout<<temp->data<<endl;
}

int main(){
    node *node1=new node(1);
    node* head=node1;
    node* tail=node1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    insertAtTail(tail,9);
    insertAtTail(tail,10);
    del(head,7);
    print(head);
}