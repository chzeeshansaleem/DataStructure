#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteNode(node* &head, int val) {
    if (head == NULL) {
        return;
    }
    if (head->data == val) {
        node* toDelete = head;
        node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        head = head->next;
        delete toDelete;
        return;
    }
    node* temp = head;
    while (temp->next != head && temp->next->data != val) {
        temp = temp->next;
    }
    if (temp->next == head) {
        return;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void putEvenAfterOdd(node* &head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    node* odd = head;
    node* even = head->next;
    node* evenStart = even;

    while (odd->next != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if (even != nullptr) {
        even->next = nullptr;
    }
}

void Display(node* &head) {
    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
     insertAtTail(head, 4);
      insertAtTail(head, 4);
    Display(head);
    // insertAtHead(head, 5);
    // Display(head);
    //deleteNode(head, 1);
    //Display(head);
//     putEvenAfterOdd(head);
//  Display(head);
    return 0;
}
