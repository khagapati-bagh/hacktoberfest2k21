#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void printList(struct Node *head){

    struct Node *p = head;

    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

Node *partition(Node *head, Node *tail){

    Node *prev = head;
    Node *cur = head->next;
    Node *pivot = head;

    while(cur!=tail->next){

        if(cur->data < pivot->data){
            swap(prev->next->data, cur->data);
            prev=prev->next;
        }
        cur=cur->next;
    }
    swap(pivot->data, prev->data);

    return prev;

}

void quickSortRec(Node *head, Node *tail){

    if( head==tail || tail==NULL || head==NULL )
    return ;

    Node *pivot = partition(head, tail);

    quickSortRec(head, pivot);
    quickSortRec(pivot->next, tail);
}

void quickSort(Node **headRef){

    Node *tail = *headRef ;

    while(tail->next!=NULL){
        tail=tail->next;
    }

    quickSortRec(*headRef, tail);
}

int main(){
    
    
    Node* first = new Node(7);
    first->next = new Node(6);
    first->next->next = new Node(5);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(3);
    first->next->next->next->next->next = new Node(2);
    first->next->next->next->next->next->next = new Node(1);

    cout<<"list = ";
    printList(first);

    cout<<"\nQuickSort = ";
    quickSort(&first);
    printList(first);

    return 0;
}
