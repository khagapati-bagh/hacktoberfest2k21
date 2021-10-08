//Java
/*
    Author : chilling_gamer
    Date : Date format 10/09/2021
    Description : Double Linked List in Java.
*/

import java.util.*; 
   
class Main{  
    static Node head; 
    // Node Definiton of Double Linked List
    static class Node{  
        int data;  
        Node next;  
        Node prev;  
    }; 

   // Insert Node To List Function
    static void addNode( int value ) {  
        // Create a single node since the list is empty
        if (head == null) {  
            Node newNode = new Node();  
            newNode.data = value;  
            newNode.next = newNode.prev = newNode;  
            head = newNode;  
            return;  
        }  
   
        // If list is not empty find the last node
          Node last = (head).prev;    //previous of head is the last node
   
        // Create a new node  
        Node newNode = new Node();  
        newNode.data = value;  
   
        // Next of newNode will point to head since list is circular  
        newNode.next = head;  
   
        // newNode will be the previous of head node
        (head).prev = newNode;  
   
        // Change newNode => prev to last  
        newNode.prev = last;  
   
        // Make new node the next of last node 
        last.next = newNode;  
    }  
   
static void printNodes() {  
        Node temp = head;  
        // Print node values from the front
        while (temp.next != head) {
            System.out.printf ("%d ", temp.data);  
            temp = temp.next;  
        }  
        System.out.printf ("%d ", temp.data);  
   
        //Print node values from the back
        System.out.printf ("\nFrom the Back: \n");  
        Node last = head.prev;  
        temp = last;  
        while (temp.prev != last) {  
            System.out.printf ("%d ", temp.data);  
            temp = temp.prev;  
        }  
        System.out.printf ("%d ", temp.data);  
    }  
   
    public static void main(String[] args) {  
        //Empty List
        Node testList = null;  
   
        // Adding nodes to the list 
        addNode(40);  
        addNode(50);  
        addNode(60);  
        addNode(70);  
        addNode(80);  
   
        // Printing the List
        System.out.printf ("From the front: ");  
        printNodes();  
    }  
}  

