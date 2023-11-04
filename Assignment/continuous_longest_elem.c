
#include <stdio.h>
#include <math.h>

int main()
{
    int l[] = {1, 2, 3, 11, 10, 12, 13, 14, 15, 9, 0, 8};
    int len = sizeof(l) / sizeof(l[0]);
    int start = 0, count = 1;
    int lstart = 0, lcount = 0;

    for (int i = 0; i < len; i++)
    {
        if (l[i] > l[i + 1])
        {
            if (count > lcount)
            {
                lstart = start;
                lcount = count;
            }
            count = 1;
            start = i + 1;
        }
        if (l[i] < l[i + 1])
        {
            count++;
        }
    }
    printf("start : %d\nEnd : %d\nCount : %d\n", lstart, (lstart + lcount-1), lcount);
}
