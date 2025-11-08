#include <stdio.h>
#include <stdlib.h>
#include "Tocar.h"
#include "Verificar/Verificar.h"

void tocando(const char *arquivo){
    if (!verficar_musica(arquivo)){
        printf("Não foi possivel encontrar o arquivo: %s \n", arquivo);
        return;
    }

    printf("Tocando: %s \n", arquivo);
    
    char comando[256];
    snprintf(comando, sizeof(comando), "mpv --no-video \"%s\"", arquivo);
    system(comando);
}
