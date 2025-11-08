#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Verificar.h"

bool verficar_musica(const char *arquivos){
    const char *verficador = strrchr(arquivos, '.');
    if (!verficador){
        return false;
    } 
    if (strcmp(verficador, ".mp3") == 0 ){
        return true;
    }

    return false;
}