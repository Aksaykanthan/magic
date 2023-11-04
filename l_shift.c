#include <stdio.h>

int main(){
    int l[] = {1, 2, 3, 4, 5};
    int len = sizeof(l) / sizeof(l[0]);
    int temp,n = 3;
    for (int x = 0;x<n;x++){
        for (int i = 1;i<len;i++){
            temp = l[i];
            l[i] = l[i-1];
            l[i-1] = temp;
    }}
    for (int i=0;i<len;i++){
        printf("%d ",l[i]);
    }
    return 0;
}
