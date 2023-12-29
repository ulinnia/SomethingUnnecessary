#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insert(struct Node *head, int Variable){
    struct Node *NewNode = (struct Node *)malloc(sizeof(struct Node));
    NewNode->next = head->next;     //latest next point to the head's next
    head->next = NewNode;           //make the head's next point to the latest node
    NewNode->data = Variable;       //give the latest point int data
}

void delete(struct Node *head){
    struct Node *current = head->next;  //make a pointer to save the latest Node
    head->next = current->next;         //give the latest node's next to head's next
    free(current);                      //release the latest node space
}

void print_list(struct Node *head){
    int list[50] = {0};         //because the stack will save the reverse data
    struct Node *current = head->next;      //put the data into the array
    int total = 0;              //print the final of the array to the first will make the data in order
    for (int i=0; i<50; i++){
        list[i] = current->data;
        if (current->next==NULL){
            break;
        }
        current = current->next;
        total += 1;             //if the next of current equal NULL then break
    }                           //so the final circle will not execute total += 1
    for(int i=total; i>=0; i--){//so the max of i is equal to i rather than (total-1)
        if (i==0){
            printf("%d\n",list[i]);
        }else{
            printf("%d ",list[i]);
        }
    }
}

int main(){
    int mode;
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->next=NULL;
    scanf("%d",&mode);

    while(mode!=0){
        switch (mode)
        {
        case 1:
            int temp;
            scanf("%d", &temp);
            insert(head,temp);
            break;
        case 2:
            delete(head);
            break;
        case 3:
            print_list(head);
            break;
        default:
            break;
        }
        scanf("%d",&mode);
    }
    return 0;
}