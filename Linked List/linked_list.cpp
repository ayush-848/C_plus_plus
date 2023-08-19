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
void insertAtPosition(node* &tail, node* &head, int pos, int d){
   

    if(pos==1){
        insertAtHead(head,d);
        return; 
    }

     node* temp=head;
    int count = 0;


    while (count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
     node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
    
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
    insertAtHead(head,10);
    insertAtHead(head,15);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtPosition(tail,head,2,77);
    print(head);
}
