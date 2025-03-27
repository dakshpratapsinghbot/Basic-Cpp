#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
void printLinkedList(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->link;
    }
    cout << "NULL" << endl; // Indicate the end of the list
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 89;
    head->link=NULL;
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current;
    
    printLinkedList(head);

    // Free the allocated memory
    current = head;
    struct node *nextNode;
    while (current != NULL) {
        nextNode = current->link;
        free(current);
        current = nextNode;
    }

    return 0;
}
