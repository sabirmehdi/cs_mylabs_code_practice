#include <iostream>

// Define the structure for a linked list node
struct Node {
    int data;
    Node* next;
    // Constructor for convenience
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse the linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr; // Pointer to the previous node (starts as NULL for the new tail)
    Node* current = head; // Pointer to the current node (starts as the head)
    Node* next_node = nullptr; // Pointer to the next node in the original list

    // Traverse the list and change pointers
    while (current != nullptr) {
        // Store the next node to move forward in the original list traversal
        next_node = current->next;
        
        // Reverse the current node's pointer to its previous node
        current->next = prev;
        
        // Move pointers one step forward for the next iteration
        prev = current;
        current = next_node;
    }
    
    // The 'prev' pointer will be the new head of the reversed list
    return prev;
}

// Function to print the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Main function to test the reversal
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    std::cout << "Original Linked List: ";
    displayList(head);

    // Reverse the list
    head = reverseLinkedList(head);

    std::cout << "Reversed Linked List: ";
    displayList(head);

    // Clean up memory (omitted for brevity in this example)

    return 0;
}
