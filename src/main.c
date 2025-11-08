#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <dirent.h>
#include "Tocar/Tocar.h"



int main(){
    char nome_musica[50];
    printf("Qual o nome da musica? \n");
    scanf("%s", nome_musica);
    tocando(nome_musica);
    return 0;
}