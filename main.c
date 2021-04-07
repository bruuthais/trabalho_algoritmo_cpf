#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#define TAM 16




void dec_for_bin()
{
    setlocale(LC_ALL, "Portuguese");
    int n_dec, aux, bin[TAM];
//Esse tam j� foi definido anteriormente em 16 ou seja ex:0000 0000 0000 0000.
    printf("Digite o n�mero decimal: ");
    scanf("%d", &n_dec);

//Para converter um numero decimal em binario � necessario dividi-lo v�rias vezes por 2 (base bin�ria)
//Quando o quociente for menor que 2 a divis�o ser� parada, � coletado os dados do menor para o maior
// ex: numero 23, 23/2 (tem resto 1) 11/2 (tem resto 1) 5/2 (tem resto 1) 2/2 tem resto 0, sobra 1 e a divis�o para.
// ficando 11101 s� que se l� do menor para o maior ent�o o resultado do numero 23 em bin�rio �: 10111

        for (aux= TAM -1; aux >= 0; aux --)
        {
            bin[aux]= (n_dec %2) == 0 ? 0 :1;
            n_dec =  n_dec /2;
        }

        printf( "\n");
        printf("Este n�mero em bin�rio �:");
        for (aux=0; aux < TAM; aux++){

        printf("%d",bin[aux]);

        }

}
//Aqui � o menu onde � escolhida a op��o de convers�o, que no caso deste trabalho � apenas Decimal para Bin�rio.
void menu()
{
    setlocale(LC_ALL, "Portuguese");
    int option = 0;
    printf ("Calculadora de convers�o de bases\n");
    printf("Digite 0 para converter Decimal em Bin�rio:\n");
    scanf("%d", &option);

        if (option == 0)
        {
            dec_for_bin();
        } else if (option != 0 && option != 1)
        {
            printf("Op��o inv�lida. Por favor, tente novamente.");
            menu();
        }
}

int main()
{
setlocale(LC_ALL, "Portuguese");

char yes_not;
  menu();

  printf("\nDeseja fazer outro c�lculo\?");

  printf("\n(s) - Sim\n(n) - N�o\n");

  scanf(" %s", &yes_not);

// Switch case para poder reiniciar a calculadora
    switch(yes_not)
    {
    case 's':
        printf("\nTecle enter <ENTER> para reiniciar a calculadora.\n");
        system("pause");
        system("cls");
        main();
        break;

    case 'n':
        system ("cls");
        exit(0);
        break;
// caso digite algo diferente de s ou n, ele ir� informar esta mensagem
    default:
        printf("\nPara encerrar o programa digite Sim(s) ou N�o(n).\n");
    }
return 0;
}
