
#include <stdio.h>

int main()
{
    char a[] = "uyuHello";
    char b[] = "Hell";
    int is_found,k;
    for (int i = 0; a[i] != '\0'; i++)
    {
        is_found = 1;
        for (int j = 0; b[j] != '\0'; j++)
        {   
            if (a[i+j] != b[j])
            {
                is_found = 0;
                break;
            }
            // printf("%c %c | ",a[i+j],b[j]);
        }
        if (is_found)
        {
            printf("Found\n");
            break;
        }
    }
}