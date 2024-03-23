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
Node* reverse(Node* head){
    Node* prev=NULL;
    while(head){
        Node* newnode=head->next;
        head->next=prev;
        prev=head;
        head=newnode;
    }
    return prev;
}
    void reorderList(Node* head) {
        Node* temp=head;

        Node* slow=head;
        Node* fast=head;

        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        Node* temp2=slow->next;
        slow->next=NULL;

        Node* rhead=reverse(temp2);

       temp=head;
       Node* newnode=new Node(0);
       Node* temp3=newnode;

       while(rhead&&temp){
           newnode->next=temp;
            newnode=newnode->next;
               temp=temp->next;
           newnode->next=rhead;
           newnode=newnode->next;
          
           rhead=rhead->next;
       }
       if(rhead){
           newnode->next=rhead;
       }
       if(temp){
           newnode->next=temp;
       }

       head=newnode->next;
       return;
    }
int main(){

Node* head=takeinput();


reorderList(head);

printLL(head);




}