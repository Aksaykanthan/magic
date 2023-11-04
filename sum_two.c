
#include <stdio.h>

int main(){
    int l[] = {1, 2, 3,4};
    int len = sizeof(l) / sizeof(l[0]);
    int t = 5;
    for (int i = 0; i<len;i++){
        for (int j = i+1;j<len;j++){
            if (l[i] + l[j] == t){
                printf("%d + %d = %d\n",l[i],l[j],t);
            }
        }
    }
    return 0;
}

