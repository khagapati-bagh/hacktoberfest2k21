import java.io.*;

class SinglyLinkedList {

	// reference to head / first node of the Singly Linked List
	public Node head = null;

	// hold data and a reference/link to the next Node
	class Node {

		private int data;

		private Node next;

		public Node(int data) {

			this.data = data;

			this.next = null;

		}

	}

	//add

	public void addNodeAtTheBeginning(int data) {
		System.out.println("Add a node with data " + data + " in the beginning.");

		Node newNode = new Node(data);

		if (this.head == null) {
			
			this.head = newNode;

		} else {
			
			newNode.next = this.head;

			this.head = newNode;

		}

	}

	public void addNodeAtTheEnd(int data) {

		System.out.println("Add a node with data " + data + " at the end.");
		
		Node newNode = new Node(data);

		if (this.head == null) {

			this.head = newNode;

		} else {

			Node cur = this.head;
			
			while (cur.next != null) {

				cur = cur.next;

			}

			cur.next = newNode;

		}

	}

	public void add(int position, int data) {

		System.out.println("Add a node with data " + data + " at the position " + position);
		
		Node newNode = new Node(data);

		Node cur = this.head, prev = this.head;

		if (position == 1) {

			newNode.next = head;

			this.head = newNode;

			return;

		}

		while (cur.next != null && --position > 0) {

			prev = cur;

			cur = cur.next;

		}

		prev.next = newNode;

		newNode.next = cur;

	}

	public void print() {

		if (this.head == null) {

			System.out.println("The List is empty.");

		} else {

			System.out.println("The contents of the Singly Linked List are : ");

			Node cur = this.head;

			while (cur != null) {

				System.out.print(cur.data + " -> ");

				cur = cur.next;

			}
			
			System.out.println("NULL\n");

		}

	}

	public void deleteFirstOccurenceOfData(int data) {

		System.out.println("Deleting First Occurance of data " + data + " from the list");
		
		if (this.head == null) {

			System.out.println("The List is empty.\n");

			return;

		}

		Node cur = this.head, prev = this.head;

		if (this.head.data == data) {

			this.head = this.head.next;

			return;

		}

		while (cur != null && cur.data != data) {

			prev = cur;

			cur = cur.next;

		}

		if (cur != null) {

			prev.next = cur.next;

		} else {

			System.out.println("The data " + data + " could not be found in the List");
		
		}

	}

	public static void main(String[] args) {

		SinglyLinkedList list = new SinglyLinkedList();

		System.out.println("Created a singly linked list .....");

		list.print();

		list.addNodeAtTheBeginning(100);

		list.print();

		list.addNodeAtTheBeginning(200);

		list.print();

		list.addNodeAtTheEnd(900);

		list.print();

		list.addNodeAtTheEnd(800);

		list.print();

		list.add(1, 150);

		list.print();

		list.add(4, 250);

		list.print();

		list.add(6, 250);

		list.print();

		list.deleteFirstOccurenceOfData(150);

		list.print();

	}

}

/**
 * Output:

Created a singly linked list .....
The List is empty.
Add a node with data 100 in the beginning.
The contents of the Singly Linked List are : 
100 -> NULL

Add a node with data 200 in the beginning.
The contents of the Singly Linked List are : 
200 -> 100 -> NULL

Add a node with data 900 at the end.
The contents of the Singly Linked List are : 
200 -> 100 -> 900 -> NULL

Add a node with data 800 at the end.
The contents of the Singly Linked List are : 
200 -> 100 -> 900 -> 800 -> NULL

Add a node with data 150 at the position 1
The contents of the Singly Linked List are : 
150 -> 200 -> 100 -> 900 -> 800 -> NULL

Add a node with data 250 at the position 4
The contents of the Singly Linked List are : 
150 -> 200 -> 100 -> 250 -> 900 -> 800 -> NULL

Add a node with data 250 at the position 6
The contents of the Singly Linked List are : 
150 -> 200 -> 100 -> 250 -> 900 -> 250 -> 800 -> NULL

Deleting First Occurance of data 150 from the list
The contents of the Singly Linked List are : 
200 -> 100 -> 250 -> 900 -> 250 -> 800 -> NULL

 */
