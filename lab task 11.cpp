#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	
	Node(int d){
		data = d;
		next = nullptr;
}
};
class Queue{
private:
   Node* front = nullptr;
    Node* rare = nullptr;
public:    
void enqueue(int d){
	Node* newNode = new Node(d);
	
	if(rare == nullptr){
		front = rare = newNode;
	}
	else{
		rare->next = newNode;
		rare = newNode;
	}
}

void dequeue(){
	if(front == nullptr){
		cout << "Queue is empty";
}
	else{
		Node* temp = front;
		front = temp->next;
		temp->next = front;
		delete temp;
	}
}

void display(){
	if(front == nullptr){
	cout << "Queue is empty";
	return;
	}
	
	Node* temp = front;
	while(temp!= nullptr){
		cout << temp->data << ":";
		temp = temp->next;
	}
	cout << endl;
}
};

int main(){
	Queue Q;
	Q.enqueue(5);
	Q.enqueue(10);
	Q.enqueue(15);
	Q.display();

	Q.dequeue();
	Q.display();
	
	Q.dequeue();
	Q.display();
	
	Q.dequeue();
	Q.display();
	
	return 0;
}





//class Queuearray{
//	int Queue[100];
//	int front, rare;
//	
//public:
//	Queuearray(){
//	front = rare = -1;
//}
//
//void enqueue(int val){
//	if(rare>=99){
//		cout << "Queue overflow" << endl;
//	}
//	else{
//		if(front == -1) front=0;
//		Queue[++rare] = val;
//	}
//}
//
//void dequeue(){
//	if(front == -1 || front > rare){
//		cout << "Queue underflow" << endl;
//	}
//	else{
//		front++;
//	}
//}
//
//void display(){
//	if(front == -1 || front > rare){
//		cout << "Queue is empty" << endl;
//	}
//	else{
//		cout << "Queue:";
//		for(int i = front; i<=rare; i++)
//		cout << Queue[i] << " " ;
//		cout << endl;
//	}
//}
//};
//
//int main(){
//	Queuearray qu;
//	
//	qu.enqueue(10);
//	qu.enqueue(20);
//	qu.display();
//	
//	qu.dequeue();
//	qu.display();
//	
//	return 0;
//	
//}
//
//
//
