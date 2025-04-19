#include<iostream>
using namespace std;

//class Node{
//public:
//    int data;
//    Node* next;
//
//Node(int d){
//	data = d;
//	next = nullptr;
//}
//};
//
//class stack{
//private:
//    Node* top;
//public:
//    stack(){
//   top = nullptr;	
//}
//
//void push(int value){
//	Node* newNode = new Node(value);
//	newNode->next = top;
//	top = newNode;
//}
//
//void pop(){
//	if(top==nullptr){
//		cout << "Empty List " << endl;
//		return;
//	}
//	Node* temp = top;
//	top = top->next;
//	delete temp;
//}
//
//void display(){
//	Node* temp = top;
//	if(temp==nullptr){
//		cout << "stack is empty" << endl;
//		return;
//	}
//	while(temp!=nullptr){
//	cout << temp->data << " ";
//		temp = temp->next;	
//	}
//	cout << endl;
//}	
//};
//
//int main(){
//    stack s;
//    
//    s.push(5);
//    s.display();
//    
//    s.push(10);
//    s.display();
//    
//    s.push(15);
//    s.display();
//    
//    s.pop();
//    s.display();
//    
//    s.pop();
//    s.display();
//    
//    s.pop();
//    s.display();
//    
//	return 0;	
//}




class Stackarray{
	int stack[100];
	int top;
	
public:
	Stackarray(){
	top = -1;
}

void push(int val){
	if(top>=99){
		cout << "Stack overflow" << endl;
	}
	else{
		stack[++top] = val;
	}
}

void pop(){
	if(top < 0){
		cout << "Stack underflow" << endl;
	}
	else{
		top--;
	}
}

void display(){
	if(top < 0){
		cout << "Stack empty" << endl;
	}
	else{
		cout << "Stack:";
		for(int i = top; i>=0; i--)
		cout << stack[i] << " " ;
		cout << endl;
	}
}
};

int main(){
	Stackarray sa;
	
	sa.push(5);
	sa.push(10);
	sa.display();
	
	sa.pop();
	sa.display();
	
	return 0;
	
}