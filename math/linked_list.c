
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};

struct Node* create_node(int val){
    struct Node* new = (struct Node*) malloc(sizeof(struct Node));
    if(!new) return 0;
    new->value = val;
    new->next = NULL;
    return new;
}

struct Node* read_node(struct Node* node){
    printf(" %d ", (node)->value);
    node = (node)->next;
    if(node == NULL) return node;
    return read_node(node);
}

struct Node* append_node(struct Node* head, int val) {
    struct Node* x = create_node(val);
    if (head == NULL) {
        head = x;
    } else {
        struct Node* pos = head;
        while (pos->next != NULL) {
            pos = pos->next;
        }
        pos->next = x;
    }
    return head;  
}

struct Node* delete_node(struct Node* head, int val){

    struct Node *prev = NULL;
    struct Node *curr = head;

    while (curr != NULL && curr->value != val) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL) {
        return head;
    }
    if (prev == NULL){
        head = curr->next;
    }else{
        prev->next = curr->next;
    }
    free(curr);
    return head;
}

int main(){
    int n = 5;
    struct Node* head = create_node(1);

    for (int i=0;i<5;i++){
        append_node(head,i+2);
    }

    read_node(head);
    printf(" \n");
    head = delete_node(head,1);
    read_node(head);
    printf(" \n");
}