
#include <stdio.h>

int main()
{
    int n, i, j;
    int list[] = {1, 1, 2, 2, 3, 4, 5, 6, 7, 3, 4, 2, 2, 1};
    int copylist[] = {};
    int len = sizeof(list) / sizeof(list[0]);
    int item[] = {}, freq[] = {};

    for (int x = 0; x < len; x++)
    {
        list[x] = copylist[x];
    }

    for (int x = 0; x < len; x++)
    {
        item[i] = list[x];
        for (int y = 0; y < len; y++)
        {
            list[x] = copylist[x];
        }
    }
}