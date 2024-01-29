#include <stdio.h>
#include <string.h>

void reverseWords(char sentence[]) {
    int start = 0;
    int end = strlen(sentence) - 1;

    while (start < end) {
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }

    start = 0;
    while (sentence[start] != '\0') {
        end = start;
        while (sentence[end] != ' ' && sentence[end] != '\0') {
            end++;
        }
        
        int wordStart = start;
        int wordEnd = end - 1;
        while (wordStart < wordEnd) {
            char temp = sentence[wordStart];
            sentence[wordStart] = sentence[wordEnd];
            sentence[wordEnd] = temp;
            wordStart ++;
            wordEnd --;
        }

        start = end + 1;
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    gets(sentence);

    reverseWords(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
