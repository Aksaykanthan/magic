#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "Hi Hello Welcome";
    int l = strlen(a);
    char words[4][10];
    int i = 0,j = 0;
    char temp[10];
    for (int x=0;x<=l;x++){
        if (a[x] != ' '){
            temp[i] = a[x];
            i++;
        }
        if ((a[x]==' ')||(a[x]=='\0')){
            temp[i] = '\0';
            strcpy(words[j],temp);
            char temp[10];
            i = 0;
            j++;
        }
    }

    for (int x=0;x<4;x++)printf("%s\n",words[x]);
}