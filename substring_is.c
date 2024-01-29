#include <stdio.h>
#include <string.h>

int main()
{
    char main_str[100], sub_str[100];
    printf("Enter the main string: ");
    fgets(main_str, sizeof(main_str), stdin);

    printf("Enter the second string: ");
    fgets(sub_str, sizeof(sub_str), stdin);

    int k;
    int flag = 0, lens = strlen(sub_str);
    for (int i = 0; i < strlen(main_str) - strlen(sub_str); i++)
    {
        k = 0;
        while (main_str[i] == sub_str[k])
        {
            k++;
            i++;
            if ((k + 1) == lens)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
        printf("String 2 is a substring of String1\n");
    else
        printf("They are not substrings\n");

    return 0;
}