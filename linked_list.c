
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

struct Node*  mid(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;  
    }

    struct Node* x = head;
    struct Node* y = head;

    while (y != NULL && y->next != NULL) {
        x = x->next;
        y = y->next->next;
    }

    return x;
}

struct Node* reverse(struct Node* head)
{
    if (head == NULL || head->next == NULL) return head;
    struct Node* temp = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return temp;
}

int isPalindrome(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return 1; 
    }

    struct Node* mid_elem = mid(head);
    struct Node* sechalf = reverse(mid_elem);

    while (head != NULL && sechalf != NULL) {
        if (head->value != sechalf->value) {
            return 0; 
        }
        head = head->next;
        sechalf = sechalf->next;
    }

    return 1; 
}


int iscycle(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        printf("Not a Cycle");
        return 0; 
    }

    struct Node* x = head;
    struct Node* y = head;

    while (y != NULL && y->next != NULL) {
        x = x->next;
        y = y->next->next;

        if (x == y) {
            printf("It is a Cycle");
            return 1; 
        }
    }

    printf("Not a Cycle");
    return 0; 
}

int main(){
    int n = 5;
    struct Node* head = create_node(0);

    for (int i=1;i<5;i++){
        append_node(head,i);
    }
    for (int i=5;i>=0;i--){
        append_node(head,i);
    }

    read_node(head);
    printf("%d ",isPalindrome(head));
    // mid(head);
    // read_node(head);
    // printf(" \n");
    // head = delete_node(head,1);
    printf(" \n");


}