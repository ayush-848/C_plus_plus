#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertAtHead(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}
void insertAfterElement(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->prev = prevNode;
    newNode->next = prevNode->next;
    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}
void deleteFromHead(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    if (*head != NULL) {
        (*head)->prev = NULL;
    }
    free(temp);
}
void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    if (current->prev != NULL) {
        current->prev->next = NULL;
    } else {
        *head = NULL;
    }
    free(current);
}
void deleteAfterElement(struct Node* prevNode) {
    if (prevNode == NULL || prevNode->next == NULL) {
        printf("Cannot delete.\n");
        return;
    }
    struct Node* temp = prevNode->next;
    prevNode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = prevNode;
    }
    free(temp);
}
void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
struct Node* search(struct Node* head, int key, int *position) {
    struct Node* current = head;
    *position=1;
    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
        (*position)++;
    }
    return NULL;
}
int main() {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int data1, numElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);
    for (int i = 0; i < numElements; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data1);
        struct Node* newNode = createNode(data1);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    printf("Double linked list: ");
    display(head);
    int choice, data, element, position;
    while (1) {
        printf("\nMENU: \n");
        printf("1. Insert at Head\n");
        printf("2. Insert at End\n");
        printf("3. Insert after an Existing Element\n");
        printf("4. Delete from Head\n");
        printf("5. Delete from End\n");
        printf("6. Delete after an Existing Element\n");
        printf("7. Display List\n");
        printf("8. Search for an Element\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtHead(&head, data);
                printf("Double linked list: ");
                display(head);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                printf("Double linked list: ");
                display(head);
                break;
            case 3:
                printf("Double linked list: ");
                display(head);
                printf("Enter existing element: ");
                scanf("%d", &element);
                struct Node* existingNode = search(head, element,&position);
                if (existingNode != NULL) {
                    printf("Enter data: ");
                    scanf("%d", &data);
                    insertAfterElement(existingNode, data);
                } else {
                    printf("Element not found.\n");
                }
                printf("Double linked list: ");
                display(head);
                break;
            case 4:
                deleteFromHead(&head);
                display(head);
                break;
            case 5:
                deleteFromEnd(&head);
                printf("Double linked list: ");
                display(head);
                break;
            case 6:
                display(head);
                printf("Enter existing element: ");
                scanf("%d", &element);
                existingNode = search(head, element,&position);
                if (existingNode != NULL) {
                    deleteAfterElement(existingNode);
                } else {
                    printf("Element not found.\n");
                }
                printf("Double linked list: ");
                display(head);
                break;
            case 7:
                printf("Double linked list: ");
                display(head);
                break;
            case 8:
                printf("Enter element to search: ");
                scanf("%d", &element);
                existingNode = search(head, element, &position);
                if (existingNode != NULL) {
                    printf("Element found at location %d.\n",position);
                } else {
                    printf("Element not found.\n");
                }
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}