#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=nullptr;
    }
};
class Stack{
    private:
    Node* top;
    public:
    Stack(){
        top=nullptr;
    }
    void push(int v){
        Node* newNode = new Node(v);
        newNode->next=top;
        top=newNode;
        cout<<v<<" pushed"<<endl;
    }
    void pop(){
         if(top==nullptr){
            return;
        }
        Node* temp = top;
        cout<<temp->data<<"Removed"<<endl;
        top=top->next;
        delete temp;
    }
    void display(){
        if(top==nullptr){
            return;
        }
        cout<<"Elements: "<<endl;
        Node *curr=top;
        while(curr!=nullptr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }  
};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(50);
    stack.display();
    stack.pop();
    stack.display();
}