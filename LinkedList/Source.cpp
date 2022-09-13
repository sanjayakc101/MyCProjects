/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Lab: Practice Building a Linked List
7 Nov 2021
*/
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
class LinkedList
{
private:
	Node* head, * tail;
public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void printList()
	{
		Node* temp = new Node;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}
	void insertNode(int value)
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
	void deleteNode()
	{
		Node* current = new Node;
		Node* previous = new Node;
		current = head;
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}
	void insertFront(int value)
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}
	void insertPosition(int pos, int value)
	{
		Node* pre = new Node;
		Node* cur = new Node;
		Node* temp = new Node;
		cur = head;
		for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}
	void deleteFront()
	{
		Node* temp = new Node;
		temp = head;
		head = head->next;
		delete temp;
	}
	void deletePosition(int pos)
	{
		Node* current = new Node;
		Node* previous = new Node;
		current = head;
		for (int i = 1; i < pos; i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
	}
};
int main()
{
	LinkedList obj;
	obj.insertNode(1);
	obj.insertNode(6);
	obj.insertNode(5);
	obj.insertNode(5);
	obj.insertNode(0);
	obj.insertNode(6);
	obj.insertNode(5);
	cout << "The list of nodes\n";
	obj.printList();
	cout << "\nInsert a node to the list\n";
	obj.insertNode(9);
	obj.printList();
	cout << "\nDelete a node from the list\n";
	obj.deleteNode();
	obj.printList();
	cout << "\nInsert a node at the beginning of the list\n";
	obj.insertFront(8);
	obj.printList();
	cout << "\nInsert a node at a particular position in the list \n";
	obj.insertPosition(5, 7);
	obj.printList();
	cout << "\nDelete the node at the beginning of the list\n";
	obj.deleteFront();
	obj.printList();
	cout << "\nDelete a node at a particular position in the list\n";
	obj.deletePosition(4);
	obj.printList();
	system("pause");
	return 0;
}