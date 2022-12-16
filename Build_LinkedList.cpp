#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{

    Node *head = NULL;

public:
    void insertNode(int);
    void display();
};

void LinkedList ::insertNode(int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void LinkedList ::display()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List Is Empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int main()
{
    LinkedList list;
    list.insertNode(20);
    list.display();
    list.insertNode(21);
    list.insertNode(22);
    list.insertNode(23);
    list.insertNode(54);
    list.display();
}