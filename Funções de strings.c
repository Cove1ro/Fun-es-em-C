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

    printf("comprimentos: %d %d\n", strlen(s1), strlen(s2));

    if (!strcmp(s1, s2)) printf("As strings são iguais\n");
    strcat(s1,s2);
    printf("%s\n",s1);

    strcpy(s1, "Isso é um teste.\n");
    printf(s1);

    if (strchr("alo", 'o')) printf("o esta em alo\n");
    if (strstr("ola aqui", "ola")) printf("ola encontrado");

    return 0;
}
