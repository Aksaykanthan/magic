#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char main_str[100];

    printf("Enter a str: ");
    fgets(str, sizeof(str), stdin);

    int k = 0;
    for (int i = 0;i<strlen(str);i++){
        main_str[k++] = str[i];
        while (str[i + 1] == ' ' && str[i] == ' ') i++;
    }

    printf("Properly Pharsed str: %s\n", main_str);
    return 0;
}
