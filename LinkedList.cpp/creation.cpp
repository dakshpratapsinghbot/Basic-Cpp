#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 90;
    head -> link = NULL;
    cout<<head->data;
    return 0;

}