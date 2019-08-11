// circular queue

/*
 * 원형 큐
linked list 이용 size = 20
함수 enQueue , deQueue isFull, isEmpty printQueue
해와라
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QUEUE_SIZE 5

typedef struct Node {
    int data;
    struct Node* next;
}node;


node* get_tail(node* head);
void enQueue(node* head, int value);
void deQueue(node* head);
bool isFull(node* head);
bool isEmpty(node* head);
void printQueue(node* head);

int main(){
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;
    /* -- -- */

    enQueue(head, 1);
    enQueue(head, 2);
    enQueue(head, 3);
    enQueue(head, 4);
    enQueue(head, 5);


    printQueue(head);




}

node* get_tail(node* head){
    node* curr = head->next;
    while(curr != NULL)
        curr = curr->next;

    return curr;
}

void enQueue(node* head, int value){
    node* prev = head;
    node* curr = head->next;

    node* first_node = head->next;
    //node* tail = head->next;

    int cnt = 0;

    if(isFull(head)){
        printf("Queue is Full. \n");
        return;
    }

    else{
        node* newNode = (node*)malloc(sizeof(node));
        newNode->data = value;

        for(prev = head; prev->next != NULL; prev = prev->next){
            curr = curr->next;
        }

        return;

    }

}


void deQueue(node* head){

    node* prev;
    node* curr;



}


bool isFull(node* head){

    node* curr;

    int cnt = 0;
    for(curr = head->next; curr != NULL; curr = curr->next){
        ++cnt;
    }

    return cnt == QUEUE_SIZE ? true : false;

}


bool isEmpty(node* head){

    return head->next == NULL ? true : false;

}


void printQueue(node* head){

    node* curr;
    for(curr = head->next; curr != NULL; curr = curr->next){
        printf("%d ", curr->data);
    }

}



