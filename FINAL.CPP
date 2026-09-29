// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = nullptr;
//     }
// };
// class linkedlist
// {
//     Node *head;
//     Node *tail;

// public:
//     linkedlist()
//     {
//         head = tail = nullptr;
//     }

//     void push_front(int value)
//     {
//         Node *newNode = new Node(value);
//         if (head == nullptr)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void pri()
//     {
//         Node *temp = head;
//         while (temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }
// };

// int main()
// {
//     linkedlist l;
//     l.push_front(10);
//     l.push_front(20);
//     l.push_front(30);
//     l.pri();
//     return 0;
// }


#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class linkedlist
{
    Node *head;
    Node *tail;

public:
    linkedlist()
    {
        head = tail = nullptr;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = tail;
            tail = newNode;
        }
    }

    void pri()
    {
        Node *temp = tail;
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
    l.pri();
    return 0;
}