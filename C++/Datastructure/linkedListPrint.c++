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
        this->next = nullptr;
    }
};

class linkedlist
{
private:
    Node *head;
    /* data */
public:
    linkedlist(/* args */)
    {
        this->head = nullptr;
    };

    void insertAtBegining(int data)
    {
        Node *newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }

    void insertAtEnd(int data)
    {
        Node *newnode = new Node(data);
        if (head == nullptr)
        {
            head = newnode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void deleteAtbegining()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd()
    {
        if (head == nullptr)
        {
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NUll" << endl;
    }
};

int main()
{

    linkedlist list;

    list.insertAtBegining(5);
    list.insertAtBegining(7);
    list.insertAtBegining(9);
    list.insertAtEnd(1);
    list.insertAtEnd(2);

    list.printList();

    return 0;
}