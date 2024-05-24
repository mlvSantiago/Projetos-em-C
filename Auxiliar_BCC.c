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

    

    return materia;
}

int conteudo_da_mat(int materia)
{   
    int conteudo;
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
        scanf("%d" , &conteudo);
        break;
    }
    return conteudo;
}

int converter_base(int conteudo)
{
    int  num_decimal = 0 , num_bits= -1, quociente , resto, concatenar=0 , num_convertido=0 , alg_mais_significativo ; 
    int num_oc;
    long int num_binario;
    
    if(conteudo>=1 && conteudo<=3 )
    {
        printf("Entre com o numero em binario:\n");
        scanf("%ld", &num_binario);

          while(num_binario!=0)
                {
                    num_bits++;                                     //conta numero de bits
                    resto = num_binario % 10;                       //pega o ultimo bit
                    num_binario = num_binario / 10;                 //retirao ultimo bit
                    num_decimal += resto * pow(2, num_bits);        //formula para converter decimal em binario
                }
       
    
    
        switch(conteudo)
        {
          
            case 1: 

                
            printf("Valor em decimal:%d\n " , num_decimal);
       
            break;
            case 2://nesse caso, atentar ao fatode numeros hexa decimaispossuirem letras
       
       
       
       
            break;

            case 3://arrumar um jeito de inverter a ordem do algarismo (muito provavel ter que usar conceitos ainda nao visto)
            
                while(num_decimal!=0)
                {
                    num_convertido=num_decimal%8;
                    num_decimal/=8;
                    
                    printf("Valor em octal:%d", num_convertido);
                }
            break;

            case 4://arrumar um jeito de inverter a ordem do algarismo (muito provavel ter que usarcopnceitos ainda nao visto)
                printf("Insira o Numero decimal:\n");
                scanf("%d",num_decimal);
               
                while(num_decimal!=0){
                    num_binario=num_decimal%2;
                    num_decimal/=2;
                    printf("Valor em octal:%d", num_binario);
                }

            break;

            case 5:
            printf("Insira o Numero octal:\n");
            scanf("%d" , &num_oc);
            
            while(num_oc!=0)
            {
                num_oc/=10;
                num_oc%=10;
                if(num_oc==1)
                {
                    num_convertido=001;
                    
                }

            }
        }
    }
    
}
int main(void)
{
    converter_base(conteudo_da_mat(menu()));
    
    
return 0;
}