#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
        int data;
        Node* next;
        
        //constructor to initialize a new node with data
        Node(int new_data){
            this->data=new_data;
            this->next=nullptr;

        }
    };
    //function to insert new node 
    //at the begining of the list
    Node* insertAtFront(Node*head,int x){
        Node* newNode=new Node(x);
        newNode->next=head;
        return newNode;
    }
    void printList(Node*head){
        Node* curr=head;
        while(curr!=nullptr){
            cout<<curr->data;
        
            if(curr->next!=nullptr){
                cout<<"->";
            }
            curr=curr->next;
            cout<<endl;
        }
    }
int main(){
    //create the linked list ;
    Node*head=new Node(2);
    head->next=new Node(3);
    head->next->next=new Node(4);
    head->next->next->next=new Node(5);

    //insertiopn a new node at the front of the list
    int x=1;
    head=insertAtFront(head,x);
    printList(head);

    

    
    return 0;
}