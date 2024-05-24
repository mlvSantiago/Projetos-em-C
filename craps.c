/*O jogo de Craps é jogado em duas fases principais: "Come Out Roll" e "Point".

Fase 1: Come Out Roll
Come Out Roll é o primeiro lançamento de dados. O jogador que lança os dados é chamado de shooter.
No Come Out Roll, se a soma dos dois dados for:
7 ou 11: Isso é chamado de "natural", e o jogador ganha.
2, 3 ou 12: Isso é chamado de "craps", e o jogador perde.
4, 5, 6, 8, 9 ou 10: Esse número se torna o "Point", e a fase do Point começa.
Fase 2: Point
Se um Point foi estabelecido (4, 5, 6, 8, 9 ou 10), o objetivo agora é que o shooter lance esse mesmo número novamente antes de lançar um 7.
Durante a fase do Point:
Se o shooter rolar o número do Point novamente antes de rolar um 7, o shooter ganha.
Se o shooter rolar um 7 antes de rolar o número do Point, isso é chamado de "seven-out", e o shooter perde.
Apostas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função responsavel pela rolagem de dados darodada
int resultado_da_rodada(void)
{
    int dado =0  , resultado =0;

       
    
    for(int i = 1; i <=2 ; i++)
    {
        
        dado = 1 + rand() % 6 ;
        resultado+=dado;
        printf("Numero no dado %d = %d\n" ,i , dado);
    }

    printf("Soma = %d\n" , resultado);

    return resultado;
}

//função resonsavel pela segunda fase do jogo
int segunda_fase(void)
{
    int resultado, point = 1 , rodada = 0 , seven_out = 0;

    printf("\n\nFase dois\n\n");

    while(seven_out==0){                            //Enquanto nao houver um vencedor, o jogo segue

        rodada++;
        printf("\n\nRodada %d\n" , rodada);
        resultado=resultado_da_rodada();


         if (resultado == 2 ||resultado==3 || resultado ==12)
        {
            printf("\nO jogador nao pontuou\n");
            point = 0;
        }else if(resultado!=7)
        {   
            printf("\nO jogador pontuou!\n");
            
            point = 1;
        }
        switch (point)
        {
        case 0:
            if(resultado==7)
            {
                printf("Voce perdeu!\n");
                seven_out++;
                
            }
            break;
        case 1:
            if(resultado==7)
            {
                printf("Voce venceu!\n");
                seven_out++;
            }
            break;
        
        default:
            break;
        }
    }
    
    return resultado;
}

int main(void)
{
    int resultado;
    srand(time(NULL));

    resultado = resultado_da_rodada();
    
    if(resultado==7 || resultado==11)
    
        printf("\nO jogador venceu!\n");

    else if(resultado==2 ||resultado==3 || resultado ==12)
    
        printf("\nO jogador perdeu!\n");
    else{
        printf("\nO jogador Pontuou!\n");
        segunda_fase();

        
        
        
    }
    return 0;
}