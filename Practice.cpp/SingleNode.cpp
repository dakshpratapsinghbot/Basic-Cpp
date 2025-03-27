#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;

};

int main(){
    struct node * head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 90;
    head->link=NULL;
    std::cout<<head->data;
    return 0;
}