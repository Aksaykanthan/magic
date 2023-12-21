
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

int mid(struct Node* head){
    struct Node* temp = head;
    int c = 0;
    while (temp != NULL){
        temp = temp->next;
        c++;
    } 
    int m = (c%2 == 0) ? c/2 + 1 : (c+1)/2;
    
    temp = head;
    for (int k=0;k < m-1;k++){
        temp = temp->next;
    }
    // printf("%d \n",temp->value);
    return temp->value;
}

struct Node* reverse(struct Node* head)
{
    if (head == NULL) return head;
    struct Node* temp = reverse(head->next);
    // temp->next = (head == NULL) ? head;
    printf("%d ",head->value);

    return head;
}


int main(){
    int n = 5;
    struct Node* head = create_node(1);

    for (int i=0;i<5;i++){
        append_node(head,i+2);
    }

    printf("%d ",reverse(head)->value);
    // mid(head);
    // read_node(head);
    // printf(" \n");
    // head = delete_node(head,1);
    // read_node(head);
    printf(" \n");

}