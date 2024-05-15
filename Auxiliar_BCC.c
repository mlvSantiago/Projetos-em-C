#include <stdio.h>

int menu(void)
{
    int materia;

    do{
    
    printf("Entre com o numero que correspondente a materia desejada:");
    printf("1-Algebra Linear 2-Arquitetura De Comp 3-Calculo 4-Logica Matematica");
    
    if(materia>4 || materia<1 ){
        printf("O numero inserido nao corresponde a nenhuma materia descrita acima");
    }

    }while(materia>4 || materia<1 );

    scanf("%d" , &materia);

    return materia;
}