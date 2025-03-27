#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
void printList(struct node *head) {
    struct node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}
int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    struct node *current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 44;
    current->link=NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 41;
    current->link=NULL;
    head->link->link = current;
    return 0;
    printList(head);
}