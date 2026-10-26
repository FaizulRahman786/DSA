#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class linkedlist
{
    node *head;
    node *tail;

public:
    linkedlist()
    {
        head = tail = nullptr;
    }

    void push_front(int value)
    {
        node *newnode = new node(value);
        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int value)
    {
        node *newnode = new node(value);
        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front()
    {

        if (head == nullptr)
        {
            return;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // int insert(int value,int pos){
    //     node* newnode = new node(value);

    //         node* temp = head;
    //         for(int i=0; i<pos-1;i++){
    //             temp = temp->next;
    //         }
    //         newnode->next = temp->next;
    //         temp->next = newnode;

    // }

    // void pop_back(){
    //     // Case 1: The list is empty
    //     if(head == nullptr){
    //         return;
    //     }
    //     // Case 2: There is only one node in the list
    //     if(head->next == nullptr){
    //         delete head;
    //         head = nullptr;
    //         return;
    //     }
    //     // Case 3: Multiple nodes
    //     node* temp = head;
    //     // Loop stops when temp is at the second-to-last node
    //     while(temp->next->next != nullptr){
    //         temp = temp->next;
    //     }
    //     // Deletes the very last node
    //     delete temp->next;
    //     // Disconnects the old last node
    //     temp->next = nullptr;
    // }

    void insert(int value, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(value); // Reuse your existing push_front logic
            return;
        }

        node *newnode = new node(value);
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == nullptr)
            {
                cout << "Invalid position" << endl;
                return;
            }
            temp = temp->next;
        }

        // Insert the node
        newnode->next = temp->next;
        temp->next = newnode;

        // Update tail if we inserted at the end
        if (newnode->next == nullptr)
        {
            tail = newnode;
        }
    }

    void pop_back()
    {
        // Case 1: The list is empty
        if (head == nullptr)
        {
            return;
        }

        // Case 2: There is only one node in the list
        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
            return;
        }

        // Case 3: There are multiple nodes
        node *temp = head;
        // Traverse until temp reaches the second-to-last node
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        // Delete the final node (tail)
        delete tail;

        // Make the second-to-last node the new tail
        tail = temp;
        tail->next = nullptr;
    }

    void print()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    linkedlist l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.print();
    cout << endl;
    l.push_back(0);
    l.print();
    cout << endl;
    l.pop_front();
    l.pop_back();
    l.push_front(30);
    l.push_front(40);
    l.insert(3, 2);
    l.print();
    return 0;
}
