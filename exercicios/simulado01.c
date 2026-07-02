#include <stdio.h>
#include <ctype.h>

int substituirNaoLetras(char str[])
{
    int i = 0;
    int contador = 0;

    while (str[i] != '\0')
    {
        if (!isalpha(str[i]))
        {
            str[i] = '*';
            contador++;
        }

        i++;
    }

    return contador;
}

    int main(){
        char texto[] = "Later, I will go to Valhalla!";
        
        int n = substituirNaoLetras(texto);

        printf("String: %s\n", texto);
        printf("Substituicoes: %d\n", n);

        return 0;
}


