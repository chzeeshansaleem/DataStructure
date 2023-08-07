#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int val) {
        data = val;
        next = NULL;
    }

    // InsertNodeAtTail
    void inserAtTail(node* &head, int val) {
        node* n = new node(val); // new node in heap
        if (head == NULL) {
            head = n;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
//     int getValueFromEnd(Node* &head, int position) {
//     if (head == nullptr || position <= 0) {
//         return -1;  // Return a default value to indicate invalid position or empty list
//     }

//     Node* fast = head;
//     Node* slow = head;

//     // Move the fast pointer to the desired position
//     for (int i = 0; i < position; i++) {
//         if (fast == nullptr) {
//             return -1;  // Return a default value if position exceeds the list size
//         }
//         fast = fast->next;
//     }

//     // Move both pointers simultaneously until the fast pointer reaches the end of the list
//     while (fast != nullptr) {
//         fast = fast->next;
//         slow = slow->next;
//     }

//     return slow->data;
// }
 // Insert at Head
    void insertAtHead(node* &head, int val) {
        node* n = new node(val); // new node in heap
        n->next = head;
        head = n;
    }
    // Node Search in Linked List
    bool search (node* head,int  key)
    {
node* temp=head; //
while(temp !=NULL)
{
    if(temp->data == key)
    {
        return true;
    }
    temp = temp->next;
}
return false;
    }
    
    // Delete Linked List 
    void deletion(node* &head,int val){
        if(head == NULL)
        {
            return;
        }
        // if(head->next == NULL)
        // {
        //     delete_head(head);
        //     return;
        // }
node* temp=head; 
while(temp->next->data != val)
{
    temp = temp->next;
}
node* toDelete=temp->next;
temp->next=temp->next->next;
delete toDelete;

    }
    
    // Print Linked List
    void Display(node* head) {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
   node* reverse(node* &head) {
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;
    
    while (currptr != NULL) {
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
    }
    
    return preptr;
}
node* reverseKNodes(node* &head, int k) {
    // Base case: if the list is empty or has less than K nodes
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* current = head;
    node* prev = NULL;
    node* next = NULL;
    int count = 0;

    // Reverse the first K nodes
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recursive call for the remaining nodes
    if (next != NULL) {
        head->next = reverseKNodes(next, k);
    }

    return prev;
}
  void makeCycle(int index) {
        node* startNode = this;
        node* endNode = this;

        int currentIndex = 0;
        while (endNode->next != NULL) {
            if (currentIndex == index) {
                startNode = endNode;
            }

            endNode = endNode->next;
            currentIndex++;
        }

        if (currentIndex == index) {
            startNode = endNode;
        }

        endNode->next = startNode;
    }
    bool detectCycle(node* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;  // Cycle detected
        }
    }

    return false;  // No cycle detected
}

void removeCycle(node* &head)

{
node* slow = head;
node* fast = head;
do{
slow = slow->next;
fast = fast->next->next;
}while (slow != fast);
fast=head;
while (fast != slow){
    slow=slow->next;
    fast = fast->next;
}
 slow->next=NULL;
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


};

int main() {
    node* head = NULL;
    head->inserAtTail(head, 1);
    head->inserAtTail(head, 2);
    head->inserAtTail(head, 3);
     head->inserAtTail(head, 4  );
    head->inserAtTail(head, 5);
     head->inserAtTail(head, 6);
//      head->makeCycle(2);
//     // head->Display(head);
//     cout<<head->detectCycle(head)<<endl;
//     head->removeCycle(head);
//      cout<<head->detectCycle(head)<<endl;
     head->Display(head);
//   int value = getValueFromEnd(head, 3);
// cout<<value<<endl;
     // head->putEvenAfterOdd(head);
//   head->Display(head);
//     // head->insertAtHead(head, 4);
//     // head->insertAtHead(head, 5);
//     // head->Display(head);
//     // cout<<head->search(head, 6)<<endl;
// // head->deletion(head,2);

// // head->Display(head);
// // head->delete_head(head);

// // node* newhead = head->reverse(head);
// // head->Display(newhead);
//  int k = 2; // Number of nodes to reverse

//   node* newhead =head->reverseKNodes(head, k);
//    head->Display(newhead);
    
    return 0;
}
