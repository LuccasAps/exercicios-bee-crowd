#include <stdio.h>
#include <string.h>
int main() {

    char vert[20], tipo[20], classe[20];

    scanf("%s %s %s", &vert, &tipo, &classe);

    if(strcmp(vert, "vertebrado")== 0){

        if(strcmp(tipo, "ave")== 0){
            if(strcmp(classe, "carnivoro")== 0)printf("aguia\n");
            else printf("pomba\n");
        }

        else if(strcmp(tipo, "mamifero")== 0){
            if(strcmp(classe, "onivoro")== 0)printf("homem\n");
            else printf("vaca\n");

        }

    }else if(strcmp(vert, "invertebrado")== 0){
    if(strcmp(tipo, "inseto")== 0){

        if(strcmp(classe, "hematofago")== 0){
            printf("pulga\n");
        }else printf("lagarta\n");
    }else if(strcmp(tipo, "anelideo")== 0){

    if (strcmp(classe, "hematofago")== 0){

        printf("sanguessuga\n");
    }else printf("minhoca\n");
        }
        }
    return 0;
}
