#include <iostream>
using namespace std;

class node {
public: 
    int data;
    node* next;
    
    node(int val) {
        data = val;
        next = nullptr;
    }
};

class list {
    node* head;
    node* tail;

public:
    list() {
        head = tail = nullptr;
    }

    // Fix 1: Changed return type to void
    void push_front(int value) {
        node* newnode = new node(value);
        if (head == nullptr) {
            head = tail = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
    } // Fix 2: Added missing closing brace for push_front

    void print() {
        node* temp = head;
        // Fix 3: Changed 'null' to 'nullptr'
        while (temp != nullptr) {
            // Fix 4: Print temp->data instead of data->next
            cout << temp->data << " -> ";
            // Fix 5: Move temp forward correctly without modifying links
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


    void push_back(int value){
        node* newnode = new node(value);
        if(head = nullptr){
            head = tail = newnode;
        }
        else{tail->next = newnode;
        tail = newnode;
    }

    void pop_front(){
        if(head == nullptr){cout<<"nothing to pop"}
        else{node* temp = head;
        head = head->next;
        delete temp;}
    }

    void pop_back(){
        if(head == nullptr){cout<<"nothing to pop"}
    else{ node *temp = head;
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
        }
    }
};

int main() {
    list myList;
    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);
    
    myList.print(); // Output will be: 30 -> 20 -> 10 -> NULL
    return 0;
}
