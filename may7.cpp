#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }

    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}


Node* reverse(Node* head){
    if(head==NULL) return NULL;
    Node* prev=NULL;
    Node* curr=head;
   while(curr!=NULL){
    Node* nextnode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextnode;
   }

   return prev;
}
    Node* doubleIt(Node* head) {
        Node* rhead=reverse(head);

        Node* curr=rhead;
        Node* prev=NULL;
        int carry=0;
        while(curr!=NULL){
            int val=curr->data*2+carry;

            curr->data=val%10;

            if(val>9){
                carry=1;
            }
            else{
                carry=0;
            }
            prev=curr;
            curr=curr->next;

        }

        if(carry==1){
            Node* extra=new Node(1);
            prev->next=extra;
        }
        
        head=reverse(rhead);

        return head;
    }


int main(){
     Node *head = takeinput();


     head=doubleIt(head);

     printLL(head);
}