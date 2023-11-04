
#include <stdio.h>
#include <math.h>

int main()
{
    int l[] = {1, 2, 3, 4, 1, 2, 4};
    int is_rep = 1;
    int len = 7;
    for (int i = 0; i<len; i++)
    {
        is_rep = 1;
        for (int j = i+1; j< len; j++)
        {   
            if (l[i] == l[j])
            {
                is_rep = 0;
                break;
            }
        }
        if (is_rep){
            printf("First Non Repeating Item is %d\n", l[i]);
            break;
            
        }
    }
}