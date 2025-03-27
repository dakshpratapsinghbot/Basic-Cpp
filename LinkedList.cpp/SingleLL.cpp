#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;

    
};

int main(){
    struct node *head = NULL;
    struct node *current = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 90;
    head-> link = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 80;
    current -> link = NULL;
    head -> link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 30;
    current -> link = NULL;
    head -> link->link = current;
    struct node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
    
}