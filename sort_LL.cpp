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

node* sort(node*&head){
    node *temp=head;
    int zeroes=0,ones=0,twos=0;
    while(temp!=NULL){
        if(temp->data == 0){
            zeroes++;
        }
        else if(temp->data == 1){
            ones++;
        }
        else if(temp->data == 2){
            twos++;
        }temp=temp->next;
    }while(temp!=NULL){
        if(zeroes!=0){
            temp->data=0;
            zeroes--;
        }
        else if(ones!=0){
            temp->data=1;
            ones--;
        }
        else if(twos!=0){
            temp->data=2;
            twos--;
        }temp=temp->next; 
    }
    return head;
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
    node* a;
    insertAtTail(tail,0);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    insertAtTail(tail,0);
    insertAtTail(tail,0);
    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    print(head);
    cout<<endl;
    s
    
    }