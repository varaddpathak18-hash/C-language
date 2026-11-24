#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100], s2[100], temp[200];
    int ch, res, i, len;

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Length (strlen)\n");
        printf("2. Copy (strcpy)\n");
        printf("3. Concatenate (strcat)\n");
        printf("4. Compare (strcmp)\n");
        printf("5. Reverse\n");
        printf("6. Uppercase\n");
        printf("7. Lowercase\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        getchar(); // clear newline

        switch (ch) {
            case 1:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Length = %zu\n", strlen(s1));
                break;

            case 2:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                strcpy(temp, s1);
                printf("Copied string = %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                
                strcpy(temp, s1); // Use temp[200] so it doesn't overflow
                strcat(temp, s2);
                printf("Concatenated string = %s\n", temp);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                
                res = strcmp(s1, s2);
                if (res == 0)
                    printf("Strings are equal\n");
                else if (res > 0)
                    printf("First string is greater\n");
                else
                    printf("Second string is greater\n");
                break;

            case 5:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                
                len = strlen(s1);
                for (i = 0; i < len; i++) {
                    temp[i] = s1[len - 1 - i];
                }
                temp[len] = '\0';
                printf("Reversed string = %s\n", temp);
                break;

            case 6:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                
                for (i = 0; s1[i] != '\0'; i++) {
                    s1[i] = toupper(s1[i]);
                }
                printf("Uppercase = %s\n", s1);
                break;

            case 7:
                printf("Enter string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                
                for (i = 0; s1[i] != '\0'; i++) {
                    s1[i] = tolower(s1[i]);
                }
                printf("Lowercase = %s\n", s1);
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Wrong choice!\n");
        }
    } while (ch != 8);

    return 0;
}

