#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};
class LinkedList{
public:
         Node* head;
	public:
	      LinkedList(){
	      	head = nullptr;
 }
 	
void insert_at_end(int data){
	Node*newNode = new Node;
	newNode->data = data;
	newNode->next=nullptr;
	if(head == NULL){
		head = newNode;
	}
else{
	Node* temp = head;
	while(temp->next!= nullptr){
	temp = temp->next;
 }
	temp->next = newNode;
    }
}
void mergeLists(Node* head1, Node* head2){
	
	if(head1 == nullptr){
		head = head2;
		return;
	}
	Node* temp = head1;
	while(temp->next!= nullptr){
		temp = temp->next;
	}
	temp->next=head2;
  }
  
void display(){
	if(head == nullptr){
		cout << "List is empty" << endl;
		return;
	}
	Node* temp = head;
	 while(temp!= nullptr){
	 	cout << temp->data << " ";
	 	temp = temp->next;
	  }
	  cout << endl;
    }
};
int main(){
	LinkedList list1, list2;
	
	list1.insert_at_end(2);
	list1.insert_at_end(4);
	list1.insert_at_end(6);
	
	
	list2.insert_at_end(3);
	list2.insert_at_end(5);
	list2.insert_at_end(9);
	
	cout << "List 1:"  << endl;
	list1.display();
	
	cout << "List 2:" << endl ;
	list2.display();
	
	list1.mergeLists(list1.head, list2.head);
	cout << "Mrege List:" << endl;
	list1.display();
	
	return 0;
	
}