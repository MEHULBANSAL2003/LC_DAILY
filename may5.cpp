#include <bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int data){
    this->data=data;
    this->next=NULL;
}
};

Node* takeinput(){
    Node* head=NULL;
    Node* tail=NULL;
    int data;
    cin>>data;
    while(data!=-1){
        Node* newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }

    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

void deleteNode(Node* node) {
               Node *nextNode = node->next;
        // Step 2
        node->data = nextNode->data;
        // Step 3
        node->next = nextNode->next;
        nextNode->next = nullptr;
      
    }


int main(){

Node* head=takeinput();

}