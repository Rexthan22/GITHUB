#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void cesar(char texto[], int k)
{
    for (int i = 0; texto[i]; i++)
    {
        if (isalpha(texto[i]))
        {
            char base = isupper(texto[i]) ? 'A' : 'a';
            texto[i] = (texto[i] - base + k + 28) % 28 + base;
        }
    }
}

int main()
{
    char texto[MAX];
    int k;

    printf("Texto: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Clave: ");
    scanf("%d", &k);

    cesar (texto, k);
    printf("Cifrado: %s\n", texto);

    cesar(texto, -k);
    printf("Descifrado: %s\n", texto);

    return 0;
}