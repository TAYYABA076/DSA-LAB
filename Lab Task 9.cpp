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
};
int main(){
	LinkedList list;
	list.insert_at_start(2);
	list.insert_at_start(4);
	list.insert_at_start(6);
	
cout << "List after insert ata start" << endl;
list.displayList();

return 0;
}