#include <stdio.h>
#include <stdlib.h>
typedef struct Snode 
{
    int info;
    struct Snode *next;
} SN;

SN* insertatbig(SN *head) {
    SN *temp;
    temp = (SN*)malloc(sizeof(SN));
    if (temp == NULL)
    printf("Memory Is Not Available! \n");
    else {
        printf("Enter The Value ? \n");
        scanf("%d", &temp->info);
        if (head == NULL) 
        {  
            temp->next = temp;  
            head = temp;
        } else {
            temp->next = head->next;
            head->next = temp;
        }
    }
    return head;
}

SN* insertatlast(SN *head) {
    SN *temp;
    temp = (SN*)malloc(sizeof(SN));
    if (temp == NULL)
        printf("Memory Is Not Available! \n");
    else {
        printf("Enter The Value?\n");
        scanf("%d", &temp->info);
        if (head == NULL) {  
            temp->next = temp;  
            head = temp;
        } else {
            temp->next = head->next;
            head->next = temp;
            head = temp;  
        }
    }
    return head;
}

SN* Display(SN *head) {
    SN *temp;
    temp = head;
    if (head == NULL)
        printf("CIRCULAR QUEUE IS Empty \n");
    else {
        do {
            temp = temp->next;
            printf("%d \n", temp->info);
        } while (temp != head);
    }
    return head;
}

SN* Delfrombig(SN *head) {
    if (head == NULL)
        printf("Circular Queue Is Empty \n");
    else if (head->next == head) {  
        printf("Deleted Info = %d \n", head->info);
        free(head);
        head = NULL;
    } else {
        SN *temp = head->next;
        head->next = temp->next;
        printf("Deleted Info = %d \n", temp->info);
        free(temp);
    }
    return head;
}
SN* Delfromlast(SN *head) {
    if (head == NULL)
        printf("Circular Queue Is Empty \n");
    else if (head->next == head) {  
        printf("Deleted Info = %d \n", head->info);
        free(head);
        head = NULL;
    } else {
        SN *temp = head->next;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        printf("Deleted Info = %d \n", head->info);
        free(head);
        head = temp;
    }
    return head;
}

SN* search(SN* head) {
    int c = 1, t;

    if (head == NULL)
        printf("Circular Queue Is Empty\n");
    else {
        SN* p1 = head->next;
        printf("Enter elem. you want to search \n");
        scanf("%d", &t);
        do {
            if (p1->info == t) 
            {
                printf("Found at Position %d\n", c);
                return head;
            }
            p1 = p1->next;
            c++;
        } while (p1 != head->next);
        printf("Not found\n");
    }
    return head;
}

int main() {
    SN *head = NULL;
    int choice;

    do {
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from Last\n");
        printf("5. Search\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = insertatbig(head);
                break;
            case 2:
                head = insertatlast(head);
                break;
            case 3:
                head = Delfrombig(head);
                break;
            case 4:
                head = Delfromlast(head);
                break;
            case 5:
                head = search(head);
                break;
            case 6:
                Display(head);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (1);

    return 0;
}
