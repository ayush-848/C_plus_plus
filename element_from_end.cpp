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

int elementFromEnd(node*&head,int n){
    if(head==NULL || n<0){
        return -1;
    }
    node *fast=head, *slow=head;
    for(int i=0;i<n;i++){
        if(fast==NULL){
            return -1;
        }fast=fast->next;
    }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }if(slow==NULL){
        return -1;
    }else return slow->data;
}


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
    insertAtHead(head,10);
    insertAtHead(head,15);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    print(head);
    cout<<elementFromEnd(head,4);
}