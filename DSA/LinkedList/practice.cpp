#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtHead(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&Tail, int d)
{
  Node *temp = new Node(d);
  Tail->next = temp;
  Tail = temp;
}

void insertAtPosition(Node *&head, Node *&Tail, int Position, int d)
{
  // if adding on pos1
  if (Position == 1)
  {
    insertAtHead(head, d);
    return;
  }

  // for traversing
  Node *temp = head;
  int count = 1;
  while (count < Position - 1)
  {
    temp = temp->next;
    count++;
  }

  // for pos = last

  if (temp->next == NULL)
  {
    insertAtTail(Tail, d);
    return;
  }

  // main part for insertAtPosition

  Node *nodetoInsert = new Node(d);
  nodetoInsert->next = temp->next;
  temp->next = nodetoInsert;
}

void print(Node *&head)
{
  Node *temp = head; // used to create temporary pointer temp which points at head
  while (temp != NULL)
  {
    cout << temp->data << " ";
    cout << temp->next << " ";
    cout << endl;
    temp = temp->next;
  }
}

int main()
{
  Node *node1 = new Node(24);
  Node *head = node1;
  Node *Tail = node1;
  insertAtHead(head, 12);
  print(head);
  insertAtPosition(head, Tail, 2, 69);
  cout << "#####" << endl;
  print(head);

  insertAtPosition(head, Tail, 1, 1);
  cout << "#####" << endl;
  print(head);

  insertAtPosition(head, Tail, 3, 100);
  cout << "#####" << endl;
  print(head);
  return 0;
}