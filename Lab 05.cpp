#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
class LinkedList{
	Node* head;
public:
LinkedList(){
	head = nullptr;
}
void insertatend(int data){
	Node* newNode = new Node;
	newNode->data=data;
	newNode->next=nullptr;
if(head==nullptr){
	head = newNode;
}
else{
	Node* temp = head;
	while(temp->next!=nullptr){
		temp = temp->next;
	}
	temp->next=newNode;
   }
 }
 
 void displayfirst(){
 	if(head!=nullptr){
 		cout << "First Node:" << head->data << endl;
	 }
	 cout << "Empty List" << endl;
 }
void displaylast(){
	if(head==nullptr){
		cout << "Empty List" << endl;
	}
	else{
		Node* temp = head;
	while(temp->next!=nullptr){
		temp = temp->next;
	}
	cout << "Last Node:" << temp->data << endl;
}
}
void displayNth(int n){
	Node*temp = head;
	int count = 1;
	while(temp!=nullptr && count < n){
		temp = temp->next;
		count++;
	}
	if(temp!=nullptr){
	   cout << "Nth Node:" << temp->data << endl;	
	}
	else{
		cout << "Invalid Position" << endl;
	}
}
void displaycenter(){
	if (head == nullptr){
		cout << "Empty List" << endl;
	}
	else{
		Node* temp1 = head;
		Node* temp2 = head;
		while(temp2 && temp2->next!=nullptr){
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		cout << "Center Node: " << temp1->data << endl;
	}
}
};

int main(){
	
	LinkedList list;
	
	list.insertatend(2);
	list.insertatend(3);
	list.insertatend(4);
	list.insertatend(5);
	list.insertatend(6);
	
	list.displayfirst();
	list.displaylast();
	list.displayNth(3);
	list.displaycenter();	
	
	return 0;
}