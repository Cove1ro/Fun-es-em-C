#include <stdio.h>
#include <string.h>

void pad(char *s, int length);

int main() {
    char str[80];
    
    strcpy(str, "isto é um teste ");
    pad(str, 40);
    printf("%zu", strlen(str)); // Adicione esta linha para indicar que o programa foi executado com sucesso
    printf("\nString após o preenchimento: %s\n", str);
}

void pad(char *s, int length) {
    int l;
    
    l = strlen(s);
    
    while (l < length ) {  // Evite exceder o tamanho da string
        s[l] = 'a'; 
        l++;
    }
    
    s[l] = '\0';
}

