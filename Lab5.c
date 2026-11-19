
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[100];
    int choice, result;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    do
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length of first string = %lu",
                       (unsigned long)strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied string = %s", temp);
                break;

            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s", temp);
                break;

            case 4:
                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Both strings are equal.");
                else if(result < 0)
                    printf("First string is smaller.");
                else
                    printf("First string is greater.");
                break;

            case 5:
                strcpy(temp, str1);

                for(int i = 0, j = strlen(temp) - 1;
                    i < j; i++, j--)
                {
                    char ch = temp[i];
                    temp[i] = temp[j];
                    temp[j] = ch;
                }

                printf("Reversed string = %s", temp);
                break;

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}
