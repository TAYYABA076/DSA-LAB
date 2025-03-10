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
	newNode->data = data;
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
void deletefirst(){
	
	if( head == nullptr){
		return;
		Node*temp = head;
		head = head->next;
		delete temp;
	}
}
void deletelast(){
	if(head==nullptr){
		delete head;
		head = nullptr;
	}
	Node* temp = head;
	while(temp->next&&temp->next->next!=nullptr){
		temp = temp->next;
	}
		delete temp->next;
		temp->next = nullptr;
	
}
void deleteNth(int n){
	if(head == nullptr) return;
	if(n==0){
		deletefirst();
		return;
	}
	Node* temp = head;
	for(int i = 0; temp && i < n - 1; i++){
		temp = temp->next;
	}
		if(temp && temp->next){
			Node* todelete = temp->next;
			temp->next=temp->next->next;
			delete todelete;
		}
	
}
void deletecenter(){
	if(head || head->next == nullptr){
		
		Node* temp1 = head;
		Node* temp2 = head;
		Node* prev = nullptr;
		while(temp2&& temp2->next!=nullptr){
			prev = temp1;
			temp1=temp1->next;
			temp2 = temp2->next->next;
		}
		if(prev){
		
		prev->next=temp1->next;
		delete temp1;
	}
	}
}
void display(){
	 Node* temp = head;
	 while(temp!= nullptr){
	 	cout << temp->data << " ";
	 	temp = temp->next;
	  }
	  cout << endl;
    }
};

int main(){
	LinkedList list;
	list.insertatend(3);
	list.insertatend(4);
	list.insertatend(5);
	list.insertatend(6);
	list.insertatend(7);
	
	cout << "Original List:" << endl;
	list.display();
	
	list.deletefirst();
	cout << "Afte deleting first:" << endl;
	list.display();	
	
	list.deletelast();
	cout << "Afte deleting Last:" << endl;
	list.display();	
	
	list.deleteNth(3);
	cout << "Afte deleting nth pos:" << endl;
	list.display();	
	
	list.deletecenter();
	cout << "Afte deleting center:" << endl;
	list.display();	
	
	return 0;
}