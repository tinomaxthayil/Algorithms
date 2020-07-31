#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Queue{
    Node *front, *rear;
    Queue(){
        front=rear=NULL;
    }
    void enQueue(int d){
        Node *temp = new Node(d);
        if(rear==NULL){
            rear=front=temp;
            return;
        }
        rear->next=temp;
        rear = temp;
    }

    void deQueue(){
        if (front==NULL)
            return;
        Node *temp = front;
        front = front->next;

        if (front == NULL) 
            rear = NULL; 
        delete(temp);
    }
};