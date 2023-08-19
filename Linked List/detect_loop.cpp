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

bool detectloop(node*&head){
    int k=0;
    node *fast=head,*slow=head;
    while (fast->next!=NULL && fast!=NULL) 
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            k++;
            break;
        }
    }if(k==1){
        return true;
    }else return false;
    
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
    print(head);
    tail->next=head->next;
    if(detectloop(head)){
        cout<<"true"<<endl;
    }else  cout<<"false"<<endl;
}