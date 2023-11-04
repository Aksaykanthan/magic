#include <stdio.h>

struct info{
    int num;
    int count;
};

int main()
{
    int l[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    struct info res[10];

    int j = 0, k = 0;
    int found;
    for (int i = 0; l[i]!='\0'; i++){
        found = 0;
        for (j = 0; j < k; j++){
            if (l[i] == res[j].num){
                found = 1;
                res[j].count += 1;
            }
        }
        if (~found){
            res[k].num = l[i];
            res[k].count = 1;
            k++;
        }
    }

    for (int i = 0; i<k; i++){
        printf("num : %d count : %d\n", res[i].num, res[i].count);
    }

    return 0;
}