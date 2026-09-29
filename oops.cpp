// #include <iostream>
// using namespace std;
// class car{
//     public:
//          car(){
//             age = 5;
//          }
//             string name;
//             int age;
//             int sal;

//     void show(){
//         cout << "car name " << name << endl;
//         cout << "car aga " << age << endl;
//         cout << "salary " << sal << endl;
//     }
//     };
//     int main(){
//         car c1;
//         cin >> c1.name;
//         // c1.age = 4;
//         c1.sal = 2000000;
//         c1.show();
//         return 0;

//     }

//     //constructor

//     #include <iostream>
// using namespace std;

// class A {
// public:
//     int val;
  
//   	// Parameterized Constructor
//     A(int x) {
//         val = x;
//     }
// };

// int main() {
  
//   	// Creating object with a parameter
//     A a(10);
//     cout << a.val;
//     return 0;
// }


// // copy constructor

// #include <iostream>
// using namespace std;

// class A {
// public:
//     int val;
    
//     // Parameterized constructor
//     A(int x) {
//         val = x;
//     }
    
//     // Copy constructor
//     A(A& a) {
//         val = a.val;
//     }
// };

// int main() {
//     A a1(20);
//     cout << a1.val << endl;
//     // Creating another object from a1
//     A a2(a1);
    
//   	cout << a2.val;
//     return 0;
// }

// // move constructor

// #include <iostream>
// #include <vector>
// using namespace std; 

// class MyClass {
// private:
//     int b;

// public:
//     // Constructor
//     MyClass(int &&a) : b(move(a)) {
//         cout << "Move constructor called!" << endl;
//     }

//     void display() {
//             cout << b <<endl;
//     }
// };

// int main() {
//     int a = 4;
//     MyClass obj1(move(a));  // Move constructor is called

//     obj1.display();
//     return 0;
// }




















#include <iostream>

// Definition of a Linked List Node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// 1. Delete the Head Node (Beginning)
void deleteHead(Node*& head) {
    if (head == nullptr) {
        std::cout << "List is empty. Nothing to delete.\n";
        return;
    }
    
    Node* temp = head;     // Store old head
    head = head->next;     // Move head pointer to the next node
    delete temp;           // Free the memory of old head
}

// 2. Delete the Tail Node (End)
void deleteTail(Node*& head) {
    if (head == nullptr) {
        std::cout << "List is empty. Nothing to delete.\n";
        return;
    }
    
    // If there is only one node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    
    // Traverse to the second-to-last node
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    
    // temp->next is the last node
    delete temp->next;
    temp->next = nullptr; // Set the second-to-last node's next to null
}

// 3. Delete a Node at a Specific Position (1-indexed)
void deleteAtPosition(Node*& head, int position) {
    if (head == nullptr || position < 1) {
        std::cout << "Invalid position or empty list.\n";
        return;
    }
    
    // If the head needs to be deleted
    if (position == 1) {
        deleteHead(head);
        return;
    }
    
    Node* temp = head;
    // Traverse to the node just before the position to be deleted
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }
    
    // If position is out of bounds
    if (temp == nullptr || temp->next == nullptr) {
        std::cout << "Position out of bounds.\n";
        return;
    }
    
    // Store the node to be deleted
    Node* nodeToDelete = temp->next;
    
    // Unlink the node from the list
    temp->next = temp->next->next;
    
    // Free memory
    delete nodeToDelete;
}

// Helper function to insert a node at the end (for setup)
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Helper function to print the list
void printList(Node* head) {
    if (head == nullptr) {
        std::cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}

int main() {
    Node* head = nullptr;

    // Create a list: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);

    std::cout << "Original List: ";
    printList(head);

    // 1. Delete Head
    deleteHead(head);
    std::cout << "After Deleting Head: ";
    printList(head); // Expected: 20 -> 30 -> 40 -> 50 -> NULL

    // 2. Delete Tail
    deleteTail(head);
    std::cout << "After Deleting Tail: ";
    printList(head); // Expected: 20 -> 30 -> 40 -> NULL

    // 3. Delete at specific position (Position 2, which is '30')
    deleteAtPosition(head, 2);
    std::cout << "After Deleting at Position 2: ";
    printList(head); // Expected: 20 -> 40 -> NULL

    return 0;
}
