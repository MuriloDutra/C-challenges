#include <stdio.h>
#include <string.h>

struct contact {
    char name [20];
    char email [20];
};

typedef struct contact CONTACT;

int main(){
    CONTACT marcelo;

    printf("BEFORE CLEANING: %s | %s\n", marcelo.name, marcelo.email);
    // 0 means NULL
    memset(&marcelo, 0, sizeof(CONTACT));
    printf("AFTER CLEANING: %s | %s\n", marcelo.name, marcelo.email);
}

/*
    MEMSET:
    Usamos para inicializar structs ou arrays com algum valor padrão (geralmente, "nulo").
    Isso é especialmente útil, pois muitos compiladores de C não limpam as regiões de memória antes de liberá-la para o programador.
    Então é comum termos "lixo"
*/