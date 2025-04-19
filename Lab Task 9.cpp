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
	   head=nullptr;
}
void insert_at_start(int d){
	
	Node* newNode = new Node;
	newNode->data=d;
	if(head == nullptr){
		head = newNode;
		newNode->next = head;
	}
	else{
		newNode->next = head;
		Node* temp = head;
		while(temp->next!=head){
			temp = temp->next;
		}
		temp->next=newNode;
		head = newNode;
	}
}
void insert_at_last(int value){
	Node* newNode = new Node();
	newNode->data=value;
	if(head == nullptr){
		head = newNode;
		newNode->next = head;
	}
	else{
		Node* temp = head;
		while(temp->next!=head){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next =head;
	}
}
void insertNth(int value, int n){
	Node* newNode = new Node();
	newNode->data = value;
	
	if(n <=0){
		cout << "Invalid pos" << endl;
		return;
	}
	if(n==1){
		insert_at_start(value);
		return;
	}
	Node*temp = head;
	for(int i =1;i<n-1&& temp!=nullptr;i++){
		temp = temp->next;
	}
	if(temp->next==head && n > 2){
		cout<< "Invalid Position" << endl;
		delete newNode;
	}else{
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

void insertatCenter(int value){
	Node* newNode = new Node();
	newNode->data=value;
	if(head == nullptr){
		head = newNode;
		newNode->next = head;
		return;
	}else{
	
	Node* slow= head;
	Node* fast= head;
	while(fast->next!= head && fast->next->next!= head){
		slow = slow->next;
		fast = fast->next->next;
	}
	newNode->next=slow->next;
	slow->next=newNode;
}
}	
void displayList() {
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return;
    }
Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head); 
    cout << endl;
}
void displayReverse(Node* current, Node* start){
	if(current->next!= start){
		displayReverse(current->next, start);
	}
	cout << current->data << " ";
}
void displayReverseOrder(){
	if(head!=nullptr){
		displayReverse(head,head);
	}
	cout << endl;
}
};
int main(){
	LinkedList list;
	list.insert_at_start(2);
	list.insert_at_start(4);
	list.insert_at_last(6);
	list.insertNth(3,7);
	list.insertatCenter(5);
cout << "Display in Order" << endl;
list.displayList();

cout << "Display in reverse Order" << endl;
list.displayReverseOrder();
return 0;
}