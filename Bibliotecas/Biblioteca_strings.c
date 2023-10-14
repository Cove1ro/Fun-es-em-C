#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char s1[80], s2[80];

    gets(s1);
    gets(s2);

    printf("comprimentos: %d %d\n", strlen(s1), strlen(s2)); //Retorna o tamanho da string

    if (!strcmp(s1, s2)) printf("As strings são iguais\n"); //Retorna 0 se as strings são iguais <0 se s1<s2 e >0 se s1>s2
    strcat(s1,s2); //Concatena s1 e s2
    printf("%s\n",s1);

    strcpy(s1, "Isso é um teste.\n"); //Copia s2 em s1
    printf(s1);

    if (strchr("alo", 'o')) printf("o esta em alo\n"); //Procura a primeira ocorrência de um caractere em uma string
    if (strstr("ola aqui", "ola")) printf("ola encontrado"); //Procura a primeira ocorrência de uma substring em uma string

    return 0;
}
