#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
        int data;
        // thing r3elated to class is known as data;
        Node* next;
        // node and address

        
        
        //constructor to initialize a new node with data
        Node(int new_data){
            this->data=new_data;
            this->next=nullptr;

        }
    };
int main(){
    Node* head  =new Node(10); //calling of constructer
    //link the second node
    head->next=new Node(20);
    //link the third node
    head->next->next=new Node(30);
    //link the fourth node
    head->next->next->next=new Node(40);
     
    //printing the linked list
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}