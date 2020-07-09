#include <iostream>
using namespace std;

int main()
{   //Alunos: Marcos Kohler, Bruna Thaís Rita e João Vitor Campos.
    setlocale(LC_ALL, "Portuguese");
    int cpf, um, dois, tres, quatro, cinco, seis, sete, oito, nove, soma1, soma2, s_digito, p_digito, re_mod1, re_mod2, aux;
    cout << "insira um valor inteiro de 8 a 9 dígitos:" << endl;
    cin >>cpf;
    um = cpf/100000000;
    aux = cpf%100000000;
    dois = aux/10000000;
    aux = cpf%10000000;
    tres = aux/1000000;
    aux = cpf%1000000;
    quatro = aux/100000;
    aux = cpf%100000;
    cinco = aux/10000;
    aux = cpf%10000;
    seis = aux/1000;
    aux = cpf%1000;
    sete = aux/100;
    aux = cpf%100;
    oito = aux/10;
    aux = cpf%10;
    nove = aux;
    soma1 = (um*10)+(dois*9)+(tres*8)+(quatro*7)+(cinco*6)+(seis*5)+(sete*4)+(oito*3)+(nove*2);
    re_mod1 = soma1%11;
    if (re_mod1<2){
        p_digito = 0;
    }
    else{
        p_digito = 11-re_mod1;
    }

    soma2 = (um*11)+(dois*10)+(tres*9)+(quatro*8)+(cinco*7)+(seis*6)+(sete*5)+(oito*4)+(nove*3)+(p_digito*2);
    re_mod2 = soma2%11;
    if  (re_mod2<2){
        s_digito = 0;
    }
    else {
        s_digito = 11-re_mod2;
    }
    cout <<"CPF:"<<um<<dois<<tres<<"."<<quatro<<cinco<<seis<<"."<<sete<<oito<<nove<<"-"<<p_digito<<s_digito<< endl;


    return 0;
}
