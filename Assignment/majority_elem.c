#include <stdio.h>

int majority_elem(int *list,int len)
{
    int element = 0;
    int count;
    int lcount = 0;
    for (int i = 0; i < len; i++)
    {
        count = 1;
        for (int j = 0; j < len; j++)
        {
            if (list[i] == list[j])
            {
                count++;
            }
        }
    if (lcount < count){
        lcount = count;
        element = list[i];
    }
    }
    return element;
}
int main()
{
    int l[] = {1,1,2,2,2,3,3,4,5};
    int len = sizeof(l) / sizeof(l[0]);
    int x = majority_elem(l,len);
    printf("Majority Element in the list is %d\n",x);
}