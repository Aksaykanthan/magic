#include <stdio.h>

int main(){
    int list1[] = {1,3,5,7}; 
    int list2[] = {2,4,6,8}; 
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);

    int newList[size1 + size2];
    int i = 0, j = 0, k = 0;

    while (size1 + size2 != i + j)
    {
        if ((list1[i] < list2[j]) || (j == size1))
        {
            newList[k] = list1[i];
            i++;
        }
        else
        {
            newList[k] = list2[j];
            j++;
        }
        k++;
    }

    for (int i = 0;i<(size1 + size2);i++){
        printf("%d ",newList[i]);
    }
}