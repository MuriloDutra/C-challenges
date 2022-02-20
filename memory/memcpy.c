#include <stdio.h>
#include <string.h>

struct contact {
    char name [20];
    char email [20];
};

typedef struct contact CONTACT;

int main(){
    CONTACT leticia;
    strcpy(leticia.name, "Letícia Cristina");
    strcpy(leticia.email, "leticia@gmail.com");

    CONTACT new_leticia;
    memcpy(&new_leticia, &leticia, sizeof(CONTACT));//It copies what it's in the memory
    
    printf("LETICIA: %s | %s\n", leticia.name,leticia.email);
    printf("NEW LETICIA: %s | %s\n", new_leticia.name,new_leticia.email);
}
