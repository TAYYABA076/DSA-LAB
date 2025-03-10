#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;
};

class LinkedList{
private:
	Node* head;
	
public:
	LinkedList(){
		head = nullptr;
		
	}
void insertatfirst(int data){
	Node* newNode = new Node;
	newNode->data = data;
        newNode->next = head;
        newNode->prev = nullptr;
	if(head!=nullptr){
	
	head->prev = newNode;
}
	head = newNode;
}
void insertatlast(int data){
	Node*newNode = new Node;
	newNode->data = data;
    newNode->next = nullptr;  
	if(head == nullptr){
		newNode->prev = nullptr;
		head = newNode;
	}
else{
	Node* temp = head;
	while(temp->next!= nullptr){
	temp = temp->next;
 }
	temp->next = newNode;
	newNode->prev = temp;
    }
}
void insertNth(int data,int n){
	if(n==0){
		insertatfirst(data);
		return;
	}
	Node* newNode=new Node;
	newNode->data = data;
	Node* temp = head;
	for(int i = 0; temp && i < n - 1; i++){
		temp = temp->next;
	}
		if(temp!=nullptr){
			newNode->next=temp->next;
		
		if(temp->next!=nullptr){
			temp->next->prev=newNode;
		}
			temp->next=newNode;
			newNode->prev=temp;
}
		else{
			cout << "invalid position" << endl;
		}
}
void insertcenter(int data){
	if (head == nullptr){
		insertatfirst(1);
	}
	else{
		Node* temp1 = head;
		Node* temp2 = head;
		while(temp2 != nullptr && temp2->next!=nullptr){
			temp2 = temp2->next->next;
			temp1 = temp1->next;
		}
		insertNth(3,1);
	}
}
void displayOrder(){
	  Node* temp = head;
	 while(temp!= nullptr){
	 	cout << temp->data << " ";
	 	temp = temp->next;
	  }
	  cout << endl;
    }

void displayReverse(){
	
	if(head==nullptr){
		return;
	}
	Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }

	while(temp!= nullptr){
	 	cout << temp->data << " ";
	 	temp = temp->prev;
	  }
	  cout << endl;
}
};
int main(){
	
	LinkedList list;
    list.insertatfirst(1);
	list.insertatlast(2);
	list.insertNth(3,1);
	list.insertcenter(4);
	
	cout << "list in Order: " << endl;
	list.displayOrder();
	
	cout << "list in reverse: " << endl;
	list.displayReverse();
	
	return 0;
}