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
Node* reverseList(Node* temp){

Node* prev=NULL;
Node* cur=temp;

while(cur){
    Node* newnode=cur->next;
    cur->next=prev;
    prev=cur;
    cur=newnode;
}

return prev;




}
    bool isPalindrome(Node* head) {
        // if(head==NULL||head->next==NULL){
        //     return true;
        // }
        Node* slow=head;
        Node* fast=head;
    
     while(fast->next!=NULL&&fast->next->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;
     }

      Node* temp=reverseList(slow->next);
     slow=temp;
     while(slow!=NULL){
         if(head->data!=slow->data){
             return false;
         }
         head=head->next;
         slow=slow->next;

     }
     return true;
    }
int main(){

Node* head=takeinput();



// DELETING nth node from last of the linked list
bool ans=isPalindrome(head);
cout<<ans<<endl;



}