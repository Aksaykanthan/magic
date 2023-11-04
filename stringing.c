#include <stdio.h>
#include <string.h>

void reverse(char a[],int la){
    char temp;
    for (int i = 0; i<la/2;i++){
        temp = a[la-i-1];
        a[la-i-1] = a[i];
        a[i] = temp;
    }
}

int main(){
    char string[] = "12345";
    int len = (sizeof(string)/sizeof(string[0]))-1;
    reverse(string,len);
    printf("%s\n",string);
}
