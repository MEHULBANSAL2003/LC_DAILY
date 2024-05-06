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

Node *removeNodes(Node *head)
{
    vector<int> v;
    Node *temp = head;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    vector<int> v1(v.size());
    int maxi = INT_MIN;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] > maxi)
        {
            maxi = v[i];
        }
        v1[i] = maxi;
    }

    vector<int> v2;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v[i] == v1[i])
            v2.push_back(v[i]);
    }

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    Node *h = NULL;
    Node *t = NULL;

    for (int i = 0; i < v2.size(); i++)
    {
        Node *newnode = new Node(v2[i]);
        if (h == NULL)
        {
            h = newnode;
            t = newnode;
        }
        else
        {
            t->next = newnode;
            t = t->next;
        }
    }

    return h;
}

int main()
{

    Node *head = takeinput();
    head = removeNodes(head);

    printLL(head);
}