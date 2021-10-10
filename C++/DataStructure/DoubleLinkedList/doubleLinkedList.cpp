// C++
/*
    Author : Chilling_gamer
    Date : 10/10/2021
    Description : DoubleLinkedList in c++.
*/

#include <iostream>
using namespace std;

//DoubleLinkedList node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

//Inserting a node at the front of the list
void insertAtFront(struct Node** head, int newData) {

    //Allocate memory for the new Node
    struct Node* newNode = new Node;

    //Assign data to the new node
    newNode->data = newData;

    //The new node is the head
    //The previous is null, since it is being added at the front
    newNode->next = (*head);
    newNode->prev = NULL;

    //Previous of head is the new node
    if ((*head) != NULL) {
        (*head)->prev = newNode;
    }

    //The head points to new node
    (*head) = newNode;

}


//Inserting a node after the given Node
void insertAfter(struct Node* prevNode, int newData) {
   //Check if the previous node is null
   if (prevNode == NULL) {
   cout<<"The previous node is required, it cannot be NULL";
   return;
}
   //Allocate memory for the new Node
   struct Node* newNode = new Node;

   //Assign the data to the new node
   newNode->data = newData;

   //Set the next of newNode to next of the prevIOUS node
   newNode->next = prevNode->next;

   //Set the next of previous node to newNode
   prevNode->next = newNode;

   //Set the previous of the newNode to previous node
   newNode->prev = prevNode;

   //Set the previous of new node's next to newNode
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}

//Inserting a node at the end of the list
void insertAtEnd(struct Node** head, int newData) {
   //Allocate memory for the node
   struct Node* newNode = new Node;

   //Set the last node value to head
   struct Node* last = *head;

   //Set the data for the new node
   newNode->data = newData;

   //The new node is the last node, set the next of new node to null
   newNode->next = NULL;

   //Check if the list is empty, if yes, make new node the head of list
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
    }

    //Otherwise, traverse the list to go to last node
    while (last->next != NULL)
    last = last->next;

    //Set the next of last to new node
    last->next = newNode;

    //Set the last node to previous of new node
    newNode->prev = last;
    return;
}

//Function to print content of the list from a given node
void displayList(struct Node* node) {
   struct Node* last;

   while (node != NULL) {
      cout<<node->data<<"\t";
      last = node;
      node = node->next;
   }
   }

//Main Function
int main() {
   //Starting with an empty list
   struct Node* head = NULL;

   // Insert 40 as last node
   insertAtEnd(&head, 40);

   // insert 20 at the head
   insertAtFront(&head, 20);

   // Insert 10 at the beginning
   insertAtFront(&head, 10);

   // Insert 50 at the end.
   insertAtEnd(&head, 50);

   // Insert 30, after 20.
   insertAfter(head->next, 30);

   cout<<"Double linked list: "<<endl;
   displayList(head);
   cout<<"\n";
   return 0;
}

