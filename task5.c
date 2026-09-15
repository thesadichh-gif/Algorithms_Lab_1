#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[20];
    char sname[20];
    char facult[20];
    int number;
    struct student *next;
};

int main() {
    struct student *head = NULL;
    struct student *tail = NULL;
    char tmpsname[20];

    while (1) {

        printf("Enter surname (or '*' to stop):\n");
        scanf("%19s", tmpsname);
        if (strcmp(tmpsname, "*") == 0) {
            break;
        }

        struct student *newstudent = (struct student*)malloc(sizeof(struct student));
        strcpy(newstudent->sname, tmpsname);

        printf("Enter %s's name:\n", newstudent->sname);
        scanf("%19s", newstudent->name);

        printf("Enter %s's facult:\n", newstudent->sname);
        scanf("%19s", newstudent->facult);

        printf("Enter %s's number:\n", newstudent->sname);
        scanf("%d", &(newstudent->number));
        printf("\n");

        newstudent->next = NULL;

        if (head == NULL) {
            head = newstudent;
            tail = newstudent;
        } else {
            tail->next = newstudent;
            tail = newstudent;
        }
    }

    char search[20];
    printf("\nEnter text to search (surname, name, facult, nubmer): ");
    scanf("%19s", search);

    struct student *current = head;

    while (current != NULL) {
        char strnumber[20];
        sprintf(strnumber, "%d" , current->number);
        if (strstr(current->sname, search) != NULL ||
            strstr(current->name, search) != NULL ||
            strstr(current->facult, search) != NULL ||
            strstr(strnumber, search) != NULL) {

            printf("Found!\n");
            printf("Surname: %s\n", current->sname);
            printf("Name: %s\n", current->name);
            printf("Facult: %s\n", current->facult);
            printf("Number: %d\n\n", current->number);
        }
        current = current->next;
    }
    current = head;
    while (current != NULL) {
        struct student *temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}
