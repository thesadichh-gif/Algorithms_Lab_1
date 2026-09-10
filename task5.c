#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char sname[20];
    char facult[20];
    int number;
};

int main() {
    struct student students[3];
    char search[20];

    for (int i = 0; i < 3; i++) {
        printf("Enter surname:\n");
        scanf("%19s", students[i].sname);

        printf("Enter %s's name:\n", students[i].sname);
        scanf("%19s", students[i].name);

        printf("Enter %s's facult:\n", students[i].sname);
        scanf("%19s", students[i].facult);

        printf("Enter %s's number:\n", students[i].sname);
        scanf("%d", &students[i].number);
        printf("\n");
    }

    printf("Enter surname to search: ");
    scanf("%19s", search);

    for (int i = 0; i < 3; i++) {
        if (strcmp(search, students[i].sname) == 0) {
            printf("Found!\nName: %s\n", students[i].name);
            printf("Facult: %s\n", students[i].facult);
            printf("Number: %d\n", students[i].number);
        }
    }
    return 0;
}
