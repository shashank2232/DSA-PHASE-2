#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    // constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

// Inserting at head (&head is done to do changes in original linked list instead of a copy)
void insertAtHead(Node* &head,int d)
{
    // creating a new node
    Node*temp = new Node(d);
    temp->next=head;
    head=temp;
}

// Printing the linked list
void print(Node* &head)
{
    Node*temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// Inserting at tail (inserting a new node at last of linked list)
void insertAtTail(Node* &tail,int d)
{
    // creating a new node
    Node*temp = new Node(d);
    tail->next=temp;
    tail=temp;

}

// Inserting in middle
void insertAtMiddle(Node* &head,Node* &tail,int position,int d)
{
    // (inserting at head) if position is 0 i.e. we want to insert at head,simply call func insertAtHead
    if(position==0)
    {
        insertAtHead(head,d);
        return;
    }
    Node*temp = head;
    int count=0;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    // inserting at tail
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node*nodeToInsert = new Node(d);            // this node is having value we want to insert in middle of list
    nodeToInsert->next = temp->next;            // point next of our new node to next of temp 
    temp->next = nodeToInsert;                  // then simply point next of temp to new Node , so now new node has been inserted in the middle at a given position
}
int main() { 
	// your code goes here
    Node*node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // pointing head to the new node i.e. node1
    Node*head = node1;
    print(head);                                // 10
    insertAtHead(head,12);
    print(head);                                // 12 10
    insertAtHead(head,15);
    print(head);                                // 15 12 10

    // tail node
    Node*tail = node1;
    insertAtTail(tail,20);
    print(head);                               // 15 12 10 20
    
    // inserting in middle of linked list
    insertAtMiddle(head,tail,2,50);
    print(head);
    cout<<"Head: "<<head->data<<endl<<"Tail: "<<tail->data<<endl;

	return 0;
}