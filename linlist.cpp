// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node{10, nullptr};   // this is the one box because it store inside one variable  hint struct Node contain two sub box 
//     head->next = new Node{20, nullptr};   // this is also new box but it address is store inside next pointer, basically think like two house and arrow show the direction 
//     head->next->next = new Node{30, nullptr};

//     Node* temp = head;

//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// head->next = new Node{20, nullptr}; explain this line what is it doning
// This line of C++ code performs two main actions: it creates a new node in memory and then links it to the existing head node, effectively adding a second element to the linked list.

// Here is the step-by-step breakdown of how it works:

// new Node{20, nullptr}: This part dynamically allocates memory for a new Node on the heap. It initializes the node's data value to 20 and sets its next pointer to nullptr (indicating it is currently the last node in the list).

// head->next = ...: head is a pointer to the first node in your list (which holds the value 10). head->next accesses the pointer inside that first node.

// The Assignment (=): By assigning the newly created node to head->next, you are taking the memory address of the new node (with the value 20) and storing it inside the first node. This creates the "link" that connects the first node to the second node.

// so next store the address of data and next pointer data address
// Actually, it doesn't store them separately. The next pointer stores just one single memory address: the starting address of the entire next Node object as a whole.

// Because data and next are packaged together inside the Node structure, knowing the starting address of the Node automatically gives the program access to everything inside it.

// Think of it like a house address:

// The Node is the house.

// The data and next pointer are rooms inside the house.

// If you give someone your home address (the starting address of the Node), you don't need to give them a separate address for the living room and the kitchen. Once they find the house, they can find the rooms.

// So, when we say head->next = new Node{20, nullptr};, the next pointer inside the first node is just holding the single location in memory where the whole second node lives.

// ye but store both in one node
// Yes, exactly! That is the core idea of how linked lists work.

// When you look at the definition in your code:

// C++
// struct Node { 
//     int data; 
//     Node* next; 
// };
// You are telling C++ to create a single package (the struct) that groups these two things together.

// Every time you call new Node, the computer carves out a single block of memory just big enough to hold both an integer (the data) and a memory address (the next pointer) right next to each other.

// So, one Node equals one physical package in memory containing both the value and the directions to the next package.

// what Node* next doing
// The line Node* next; declares a pointer variable that acts as the physical link between the nodes in your list.

// Here is exactly what each part of it does:

// Node* (The Type): This tells the computer that this variable is a pointer (indicated by the *), and specifically, it will only store the memory address of another Node. It cannot point to a standard integer or a string; it must point to a Node structure.

// next (The Name): This is simply the name of the variable holding that address.

// Its Job in the Linked List:
// Without this pointer, your nodes would just be isolated blocks of data floating in memory. The next pointer is responsible for holding the address of the subsequent node in the sequence. When you are at the last node in the list, next is set to nullptr to signal that there are no more nodes to follow.

//  head->next = new Node{20, nullptr}; how it store because head store data and next memory address and now how next work from here is there any space to store 
// The space to store the connection already exists inside the first node. The next pointer doesn't store the entire second node inside it; it only stores a memory address (which takes up just a tiny, fixed amount of space, like 8 bytes).

// Here is exactly how the memory and space work in this step:

// The First Node Already Has Space: When the previous line (Node* head = new Node{10, nullptr};) ran, it created the first node. That node physically contains a slot for data (holding 10) and a slot for the next pointer (holding nullptr).

// Creating the Second Node: The code new Node{20, nullptr} goes to an entirely different, empty spot in your computer's memory and builds a brand new node. This new node has its own data (20) and its own next pointer (nullptr).

// Making the Connection: The code head->next = ... goes to the first node's next slot. Instead of holding nullptr, that slot is updated to hold the memory address of the new, second node.

// You can think of the next pointer like a small blank label on a physical box. You are not trying to stuff a second box inside the first box. You are just writing the location of the second box on the first box's label. The space for that label was created as soon as the first box was built.

// s next store the address of both data and nullptr
// No, the next pointer only stores a single address: the starting memory location of the entire second Node as one complete block.

// When you write head->next = new Node{20, nullptr};, here is exactly what is happening:

// The Single Address: The next pointer inside your first node simply points to the "front door" of the new second node.

// Accessing the Contents: Because the second node is a packaged structure, pointing to its starting address automatically gives the program access to everything inside it. You don't need separate addresses for its parts.

// The Role of nullptr: The nullptr is not a separate thing being pointed to. It is simply the value saved inside the second node's own next slot to signal that it is currently the end of the line and connects to nothing else.

// then if there is two value inside object 10 and nullptr then how one memory
// Think of the Node object as a single physical box that has two compartments inside it.

// When you create new Node{20, nullptr}, the computer does not scatter those two values in different places. Instead, it finds one continuous chunk of memory big enough to hold both pieces of information side-by-side. It puts the 20 in the first compartment and the nullptr in the second compartment.

// Because this is all one solid block, the next pointer only needs to store the starting address (the front door) of that entire block.

// Here is how the computer can find both values using just that one starting address:

// The Blueprint: Your code struct Node { int data; Node* next; }; acts as a blueprint. It tells the computer exactly how the box is organized.

// The Math: When the computer goes to that single starting address, it knows that the very first thing it will find is an integer (the data). It also knows exactly how much space an integer takes up. So, to find the nullptr, it just skips past the integer to look at the second compartment.

// You only need one memory address to find the whole object, and the blueprint (struct) tells the computer how to read the individual pieces inside it.









//  #include<iostream>
// using namespace std;

// // singly linked list node structure
// class Node {
// public:
//     int data;
//     Node* next;

//     // constructor to initialize a new node with data
//     Node(int new_data) {
//         data = new_data;
//         next = nullptr;
//     }
// };

// int main() {
    
//     // Create the first node (head of the list)
//     Node* head = new Node(10);

//     // Link the second node
//     head->next = new Node(20);

//     // Link the third node
//     head->next->next = new Node(30);

//     // Link the fourth node
//     head->next->next->next = new Node(40);

//     // printing linked list
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }


// #include <iostream>
// using namespace std;

// class Node {
// public: // FIX 1: Make members public so the list class can access them
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value; // FIX 2: Removed 'int' to stop shadowing the member variable
//         next = nullptr;
//     }
// };

// class list {
//     Node* head;
//     Node* tail;

// public:
//     list() {
//         head = tail = nullptr; // Using nullptr is preferred in modern C++
//     }

//     void push_front(int value) {
//         Node* newNode = new Node(value);
        
//         if (head == nullptr) {
//             head = tail = newNode;
//             return;
//         } else {
//             newNode->next = head;
//             head = newNode;
//             // tail stays pointing to the original first node, which is now the last node

//         }
//         }
//        void print_list() {
//       Node* temp = head;
//         while(temp != nullptr){
//             cout << temp->data;
//             temp = temp->next;
//             } }
// };

// int main() {
//     list myList;
//     myList.push_front(10);
//     myList.push_front(20);
//     myList.print_list();
//     return 0;
// };



// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// class LinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     void push_front(int value) {
//         Node* newNode = new Node(value);

//         // Empty list
//         if (head == nullptr) {
//             head = newNode;
//             tail = newNode;
//         }
//         else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void display() {
//         Node* temp = head;

//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }

//         cout << "NULL" << endl;
//     }
// };

// int main() {

//     LinkedList list;

//     list.push_front(30);
//     list.push_front(20);
//     list.push_front(10);

//     list.display();

//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     // Fixed: Assign directly to the class member 'data' instead of redeclaring it
//     Node(int value) {
//         data = value; 
//         next = nullptr;
//     }
// };

// // Fixed: Picked a consistent name (LinkedList)
// class LinkedList {
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     void push_front(int val) {
//         // Fixed: Pass 'val' to the constructor
//         Node* newNode = new Node(val); 
        
//         // Fixed: Used '==' for comparison instead of '='
//         if (head == nullptr) { 
//             head = tail = newNode;
//         } else { // Fixed: Corrected braces layout
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     // Fixed: Renamed to match the call in main()
//     void display() { 
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// }; // Fixed: Added missing closing brace and semicolon for the class

// int main() {
//     LinkedList list;
//     list.push_front(30);
//     list.push_front(20);
//     list.push_front(10);
    
//     list.display(); 
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int value){
//         data = value;
//         next = nullptr;
//     }
// };
// class linkedlist {
//     Node*head;
//     Node*tail;

//     public:
//     linkedlist(){
//         head = tail = NULL;
//     }

//     void push_front(int value){
//         Node* newNode = new Node(value);
//         if(head == NULL ){
//             head = tail = newNode;
//         } else{
//             newNode->next = head;
//             head = newNode;
//         }

//     }
// };



// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };
// int main(){
// Node* head = new Node{10, nullptr};
// head->next = new Node{10, nullptr};
// head->next->next = new Node{10, nullptr};

// Node* temp = head;
// while (temp != nullptr)
// {
//     cout << temp->data << "->";
//     temp = temp->next;
// }
// return 0;

// }





#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
Node* head = new Node{10};
head->next = new Node{10};
head->next->next = new Node{10};

Node* temp = head;
while (temp != nullptr)
{
    cout << temp->data << "->";
    temp = temp->next;
}
return 0;

}


