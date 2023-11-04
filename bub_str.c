
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("Enter Number of Items : ");
    scanf("%d",&n);

    char temp[10];
    char a[n][10];

    for (int i=0;i<10;i++){
        for (int j=0;j<10-i-1;j++){
            if (strcmp(a[j],a[j+1])>0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    for (int i=0;i<10;i++){
        if (strlen(a[i])) printf("%s\n",a[i]);
    }
}