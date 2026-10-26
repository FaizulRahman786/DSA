#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    // Step 1: Create 3 individual nodes
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    // Step 2: Link the nodes together
    node1->next = node2;
    node2->next = node3;

    // Step 3: Establish the head
    Node* head = node1;
    printf("created");

    return 0;
}





#include <iostream>

// Define the structural blueprint for a single node
struct Node {
    int data;
    Node* next;
    
    // Constructor to easily initialize node data
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Use a for loop to create and populate 5 nodes
    for (int i = 1; i <= 5; i++) {
        // 1. Allocate a new node in memory
        Node* newNode = new Node(i);

        // 2. If the list is empty, make this node the head
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } 
        // 3. Otherwise, link the current tail to the new node
        else {
            tail->next = newNode; // Connect the old node to the new node
            tail = newNode;       // Move the tail pointer to the end
        }
    }

    // Traverse and print the created linked list using a for loop
    std::cout << "Linked List: ";
    for (Node* temp = head; temp != nullptr; temp = temp->next) {
        std::cout << temp->data << " -> ";
    }
    std::cout << "NULL\n";

    // Clean up memory to avoid memory leaks
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}



#include <iostream>

// Linear search function for unsorted arrays
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found, return its index
        }
    }
    return -1; // Target not found
}

int main() {
    int unsortedArray[] = {42, 7, 19, 90, 3, 55};
    int size = sizeof(unsortedArray) / sizeof(unsortedArray[0]);
    int target = 90;

    int result = linearSearch(unsortedArray, size, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at a specific position (0-indexed)
void insertAtPosition(Node*& head, int val, int position) {
    Node* newNode = new Node(val);

    // Case 1: Insert at the very beginning (Position 0)
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse to the node right BEFORE the target position
    Node* prev = head;
    for (int i = 0; i < position - 1 && prev != nullptr; i++) {
        prev = prev->next;
    }

    // Check if the position is out of bounds
    if (prev == nullptr) {
        std::cout << "Position out of bounds. Appending to end instead.\n";
        delete newNode; // Avoid memory leak if we abort
        return;
    }

    // Case 2 & 3: Insert in the middle or at the end
    newNode->next = prev->next; // Point new node to the next node
    prev->next = newNode;       // Point previous node to the new node
}

// Helper to print the list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr\n";
}

int main() {
    // 1. Manually create a basic 3-node linked list: 10 -> 20 -> 30 -> nullptr
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    std::cout << "Original 3-node list: ";
    printList(head);

    // 2. Insert value 25 at Position 2 (between 20 and 30)
    // Index 0: 10
    // Index 1: 20
    // Index 2: [New Node 25 goes here]
    // Index 3: 30
    int newValue = 25;
    int targetPos = 2;
    
    insertAtPosition(head, newValue, targetPos);

    std::cout << "After inserting " << newValue << " at position " << targetPos << ": ";
    printList(head);

    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

