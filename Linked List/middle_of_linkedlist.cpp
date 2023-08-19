#include <bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node(int d)
  {
    data = d;
    next = NULL;
  }
};

insertAtTail(node *&tail, int d)
{
  node *temp = new node(d);
  tail->next = temp;
  tail = temp;
}

insertAtHead(node *&head, int d)
{
  node *temp = new node(d);
  temp->next = head;
  head = temp;
}

int getlength(node *&head)
{
  int c = 0;
  while (head != 0)
  {
    c++;
    head = head->next;
  }
  return c;
}

int middle(node *&head)
{
  node *temp = head;
  int len = getlength(head);
  int ans = len / 2;
  int l = 0;
  while (l < ans)
  {
    temp = temp->next;
    l++;
  }
  return temp->data;
}
int mid(node *&head)
{
  node *slow = head;
  node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}
void print(node *&head)
{
  node *temp = head;
  while (temp->next != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << temp->data << endl;
}

int main()
{
  node *node1 = new node(1);
  node *head = node1;
  node *tail = node1;
  insertAtTail(tail, 2);
  insertAtTail(tail, 3);
  insertAtTail(tail, 4);
  insertAtTail(tail, 5);
  insertAtTail(tail, 6);
  insertAtTail(tail, 7);
  insertAtTail(tail, 8);
  print(head);
  cout << endl
       << middle(head) << endl;
  cout << mid(head) << endl;
}