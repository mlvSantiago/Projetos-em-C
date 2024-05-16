#include <stdio.h>
#include <math.h>



int menu(void)
{
    int materia;

    do{
    
    printf("\n\nEntre com o numero que correspondente a materia desejada:\n\n");
    printf("1-Algebra Linear \n2-Arquitetura De Comp \n3-Calculo \n4-Logica Matematica\n");
    scanf("%d" , &materia);
    
    if(materia>4 || materia<1 ){
        printf("\nO numero inserido nao corresponde a nenhuma materia descrita acima\n");
    }

    }while(materia>4 || materia<1 );

    scanf("%d" , &materia);

    return materia;
}

int conteudo_da_mat(int materia)
{   
    int conteudo;//mudar o ome davariavel
    printf("\n\nEntre com o numero que corresponde ao conteudo:\n\n");

    switch(materia)
    {
        case 1:
        printf("");
        scanf("%d" , &conteudo);
        break;

        case 2:
    
        printf("1-Convercao de bases\n");
        scanf("%d" , &conteudo);
        if(conteudo==1)//checar se eu poderia usar a variavel materia eobservar o fluxo do programa
        {
            printf("Insira o tipo de convercao\n");
            printf("1- Binario para Decimal 2-Binario para hexadecimal 3-Binario para octal\n");//Brinario para x
            printf("4-Decimal para binario 5- Decimal para octal 6- Decimal para Hexadecimal\n");//Decimal parax
            printf("7-Hexadeximal para Bianrio 8-Hexadecimal para Decimal 9-Hexadecimalpara octal\n");//Hexa para x
            printf("10-Octal para Para Binario 11- Octal para Decimal 12 - Octal para Hexadecial\n");//Octal para x
            scanf("%d" , &conteudo);
        }
        break;
        
        case 3:
        printf("");
        scanf("%d" , &conteudo);
        break;

        case 4:
        printf("");
        scanf("%d" , conteudo);
        break;
    }
    return conteudo;
}

int converter_base(int conteudo)
{
    int  num_convertido = 0 , num_bits= -1, contador_bits=0, quociente , resto, concatenar=0; 
    long int num_binario;
    
    if(conteudo>=1 && conteudo<=3 )
    {
        printf("Entre com o numero em binario:\n");
        scanf("%d", &num_binario);

       
    }
    
    switch(conteudo)
    {
        case 1: 

            while(num_binario!=0)
            {
           
                contador_bits = num_binario/10; //tira bits
                num_bits++;                     //conta numero de bits retirados
                num_convertido= num_convertido + ((num_binario%10 )* pow(2, num_bits));//formula para coonverter binario em x

            }
            printf("Valor em decimal:%d\n " , num_convertido);
       
        break;
        case 2://nesse caso, atentar ao fatode numeros hexa decimaispossuirem letras
       
       
       
       
        break;

        case 3:

            while(resto!=0)
            {
                resto = num_binario%1000;
                while(resto!=0)
                {
                    num_convertido= num_convertido + ((resto%10 )* pow(2, num_bits));
                }
               num_convertido=num_convertido*10;
               concatenar = num_convertido + concatenar;
                
            }
        printf("O numeroem octal:%d\n" , concatenar);
        break;



    }
}
int main(void)
{
    conteudo_da_mat(menu());
    
return 0;
}