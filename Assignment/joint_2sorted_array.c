#include <stdio.h>

void disp(int* l){
    for (int i=0;*(l+i)!='\0';i++){
        printf("%d  ", *(l+i));
    }
    printf("\n");
}
// merge two sorted arrays
int merge(int *l1, int *l2, int *l3,int len)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for (k = 0;k < len;k++)
    {
        if (l1[i] < l2[j])
        {
            l3[k] = l1[i];
            i++;
        }
        else if (l1[i] > l2[j])
        {
            l3[k] = l2[j];
            j++;
        }
        disp(l3);
    }
}

int main(){
    int l1[] = {1,2,4,7,9};
    int l2[] = {3,5,6,8};
    int len = (sizeof(l1)/sizeof(l1[0]))+(sizeof(l2)/sizeof(l2[0]));
    int l3[len];

    merge(l1,l2,l3,len);
    disp(l3);
}