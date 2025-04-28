#include <stdio.h>
#include <string.h> 

int indexOf(char text[], char target[]) {
    int textLength = strlen(text);
    int targetLength = strlen(target);

    if (targetLength > textLength) {
        return -1;
    }

    for (int i = 0; i <= textLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match) { 
            return i;
        }
    }

    return -1;
}

int main() {
    char text[] = "the cat sat on the mat";
    char target[] = "cat";
    int index = indexOf(text, target);

    if (index != -1) {
        printf("Слово \"%s\" найдено на позиции %d\n", target, index); 
    } else {
        printf("Слово \"%s\" не найдено\n", target);
    }

    printf("Индекс 'the': %d\n", indexOf(text, "the")); 
    printf("Индекс 'mat': %d\n", indexOf(text, "mat"));  
    printf("Индекс 'dog': %d\n", indexOf(text, "dog")); 
    printf("Индекс 'the cat': %d\n", indexOf(text, "the cat")); 


    return 0;
}
