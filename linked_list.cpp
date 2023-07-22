
/*class node{
    public:
    node *next;
    int data;
    node(int data){
        this -> data=data;
        next=NULL;
    }
};
void print(node *head){
    node *temp=head;
    while(temp -> next !=NULL){
        cout<<temp -> data<<" -> ";
        temp=temp -> next;
    }cout<<temp -> data<<endl;
}

int main() {
   node n1(1);
   node *head=&n1;
   node n2(5);
   node n3(7);
   node n4(11);
   node n5(13);
   n1.next=&n2;
   n2.next=&n3;
   n3.next=&n4;
   n4.next=&n5;
   print(head);
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node *next;
    int data;
    node(int value){
        data=value;
        next=NULL;
    }
};
node* insertAtTail(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
        node *newNode=new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }cin>>data;
    }return head;
}
void print(node *head){
    node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<temp->data<<endl;
}
int main(){
   node *head=NULL;
   insertAtTail();
   print(head);

}*/

#include <iostream>
using namespace std;
class node {
public:
	int data;

	node* next;
	node(int d){
	data = d;
	next = NULL;
	}
};
void insertAtHead(node*& head, int data)
{
	 node* temp = new node(data);
    if(head == NULL)
        head = temp;
    else
    {
        temp -> next = head;
        head = temp;
    }
}
void insertAtTail(node*&head,int data){
    //creation of a new node
    node* tail = new node(data);
    //empty list
    if(head == NULL)
        head = tail;
    else
    {
        node* temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = tail;
    }
}
void print(node* head)
{
	while (head->next != NULL) {
		cout << head->data << "->";
		head = head->next;
	}cout<<head->data<<endl;
}
void input_value(node*&head,int a,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(a==1){
            insertAtTail(head,x);
        }else{
            insertAtHead(head,x);
        }
    }
}
int main()
{
	node* head = NULL;
    int n,a;
    cout<<"enter 1 to insert in head and 2 to insert in tail"<<endl;
    cin>>a;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    input_value(head,a,n);
	print(head);
}
