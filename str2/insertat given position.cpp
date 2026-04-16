#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        this->val = data;
        this->next = NULL;
    }
};

// Function to insert at position
void insertAtPosition(Node* &head, int data, int position){
    Node* newNode = new Node(data);

    // Insert at beginning
    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* curr = head;

    for(int i = 1; i < position - 1 && curr != NULL; i++){
        curr = curr->next;
    }

    // Position out of bounds
    if(curr == NULL){
        cout << "Position out of bounds" << endl;
        return;
    }

    newNode->next = curr->next;
    curr->next = newNode;
}

void printList(Node* head){
    while(head != NULL){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    int val, pos;
    cout << "Enter value and position: ";
    cin >> val >> pos;

    insertAtPosition(head, val, pos);

    cout << "Before insertion: ";
    printList(head);

    insertAtPosition(head, val, pos);

    cout << "After insertion: ";
    printList(head);

    return 0;
}