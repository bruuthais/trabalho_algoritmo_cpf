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
//Esse tam já foi definido anteriormente em 16 ou seja ex:0000 0000 0000 0000.
    printf("Digite o número decimal: ");
    scanf("%d", &n_dec);

//Para converter um numero decimal em binario é necessario dividi-lo várias vezes por 2 (base binária)
//Quando o quociente for menor que 2 a divisão será parada, é coletado os dados do menor para o maior
// ex: numero 23, 23/2 (tem resto 1) 11/2 (tem resto 1) 5/2 (tem resto 1) 2/2 tem resto 0, sobra 1 e a divisão para.
// ficando 11101 só que se lê do menor para o maior então o resultado do numero 23 em binário é: 10111

        for (aux= TAM -1; aux >= 0; aux --)
        {
            bin[aux]= (n_dec %2) == 0 ? 0 :1;
            n_dec =  n_dec /2;
        }

        printf( "\n");
        printf("Este número em binário é:");
        for (aux=0; aux < TAM; aux++){

        printf("%d",bin[aux]);

        }

}
//Aqui é o menu onde é escolhida a opção de conversão, que no caso deste trabalho é apenas Decimal para Binário.
void menu()
{
    setlocale(LC_ALL, "Portuguese");
    int option = 0;
    printf ("Calculadora de conversão de bases\n");
    printf("Digite 0 para converter Decimal em Binário:\n");
    scanf("%d", &option);

        if (option == 0)
        {
            dec_for_bin();
        } else if (option != 0 && option != 1)
        {
            printf("Opção inválida. Por favor, tente novamente.");
            menu();
        }
}

int main()
{
setlocale(LC_ALL, "Portuguese");

char yes_not;
  menu();

  printf("\nDeseja fazer outro cálculo\?");

  printf("\n(s) - Sim\n(n) - Não\n");

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
// caso digite algo diferente de s ou n, ele irá informar esta mensagem
    default:
        printf("\nPara encerrar o programa digite Sim(s) ou Não(n).\n");
    }
return 0;
}
