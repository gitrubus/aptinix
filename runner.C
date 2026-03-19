#include <stdio.h>

int option;
int data = 0;
char hujk[30];

int main() {
    printf("welcome to the program");
    printf("\nuse 1,2,3 for a compiling option.");
    scanf("%d", &option);
    printf("\noption is %d generating %p", option, &option);
    if (option == 1) {
        printf("\nworing on it");
        while (data < 9999999) {
            printf("\n\n%p", &data);
            data++;
        }
    } else if (option == 2) {
        printf("\naptinix");
        scanf("\n%s", &hujk);
        printf("\nthis is %s", hujk);
        printf("\nconverting string into data address...");
        printf("\n%p", &hujk);
    } else if (option == 3) {
        printf("\nnothing here sorry");
    } else {
        perror("\ninvalid option");
    }
}

