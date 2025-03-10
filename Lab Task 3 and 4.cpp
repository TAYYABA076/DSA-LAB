                                              //Question No:03 AND 04

#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};
class LinkedList{
private:
	Node* head;
public:
	LinkedList(){
		head = nullptr;
	}
void insert_at_start(int data){
	Node* newNode = new Node;
	newNode->data=data;
	newNode->next = head;
	head = newNode;
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

void insert_at_position(int data, int pos){
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = nullptr;
	if(pos<1){
		cout << "invalid pos:" << endl;
		return;
	}
	else if(pos == 1){
		insert_at_start(data);
	}
	else{
		
		Node* temp = head;
		for(int i=1; i<pos-1;i++){
			temp = temp->next;
			if(temp == nullptr){
				cout << "invalid pos:" << endl;
				return;
			}
		}
			newNode->next = temp->next;
			temp->next = newNode;
		
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
	
	list.insert_at_start(10);
	list.display();
	
	list.insert_at_end(20);
	list.display();
	
	list.insert_at_end(30);
	list.display();
	
	list.insert_at_position(15,5);
	list.display();
	
	list.insert_at_position(25,2);
	list.display();
	
	return 0;
}
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             