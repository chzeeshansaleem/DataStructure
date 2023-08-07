#include <iostream>
#include <string>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node* &head) {
    node* toDelete = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete toDelete;
}

void deletion(node* head, int pos) {
    node* temp = head;
    int count = 1;
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
    while (temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node(-1);
    node* p3=dummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data)
        {
            p3->next=p1;
            p1=p1->next;

        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
      p3->next=p1;
        p1=p1->next;
        p3=p3->next;

    }
     while(p2!=NULL){
      p3->next=p2;
        p2=p2->next;
        p3=p3->next;

    }
    return dummyNode->next;
}
void Display(node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
     node* head = NULL;
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[]={1,3,7};
    int arr2[]={2,4,5,6};
    for (int i=0; i<3; i++)
    {
        insertAtTail(head1, arr1[i]);
    }
     for (int i=0; i<4; i++)
    {
        insertAtTail(head2, arr2[i]);
    }
    Display(head1);
    Display(head2);
    node* newhead=merge(head1, head2);
    Display(newhead);
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // Display(head);
    // insertAtHead(head, 5);
    // Display(head);
    // deletion(head, 2);
    // Display(head);


    return 0;
}
