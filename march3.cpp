#include  <bits/stdc++.h>
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
Node* removeNthNodeFromEnd(Node* head,int n){

Node* start=new Node(0);
start->next=head;
Node* slow=start;
Node* fast=start;
while(n>0){
    fast=fast->next;
    n--;
}

while(fast->next!=NULL){
    slow=slow->next;
    fast=fast->next;
}

slow->next=slow->next->next;

return start->next;



}
int main(){

Node* head=takeinput();

printLL(head);

// DELETING nth node from last of the linked list
int n;
cin>>n;
head=removeNthNodeFromEnd(head,n);

printLL(head);


}