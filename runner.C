#include <stdio.h>

int option;
int data = 0;

int main() {
    printf("welcome to the program");
    printf("use 1,2,3 for a compiling option.");
    scanf("%d", &option);
    printf("option is %d generating %p", option, &option);
    if (option == 1) {
        printf("woring on it");
    }
}
