/*
Além das variáveis primitivas e compostas, existe um tipo de variável muito importante na linguagem C. São os chamados ponteiros, por meio dos quais podemos manipular outras variáveis e outros recursos por meio do acesso ao endereço de memória.
Existe uma relação direta entre um ponteiro e endereços de memória e é por esse motivo que esse tipo de variável é utilizado, principalmente para manipulação de memória, dando suporte às rotinas de alocação dinâmica.
Variáveis do tipo ponteiro são usadas exclusivamente para armazenar endereços de memória. O acesso à memória é feito usando dois operadores: o asterisco (*), utilizado para declaração do ponteiro, e o “&” é usado para acessar o endereço da memória, por isso é chamado de operador de referência. A sintaxe para criar um ponteiro tem como padrão:

    <tipo> *<nome_do_ponteiro>;
    Exemplo: int *idade;

Nesse exemplo, é criado um ponteiro do tipo inteiro, e isso significa que ele deverá “apontar” para o endereço de uma variável desse tipo. A criação de um ponteiro só faz sentido se for associada a algum endereço de memória.

    Para isso, usa-se a seguinte sintaxe:
        int ano = 2018;
        int *ponteiro_para_ano = &ano;

Na linha 1 criamos uma variável primitiva inteira, denominada ano, com valor 2018, e na linha 2 associamos um ponteiro chamado ponteiro_para_ano ao endereço da variável primitiva ano. Agora tudo que estiver atribuído à variável ano estará acessível ao ponteiro ponteiro_para_ano.

Podemos imprimir o conteúdo do ponteiro, que será o endereço da variável a que ele aponta. Utilizando o ponteiro criado anteriormente (ponteiro_para_ano), temos a seguinte sintaxe:
                printf("\n Conteúdo do ponteiro: %p", ponteiro_para_ano);

O especificador de formato %p é usado para imprimir o endereço de memória armazenado em um ponteiro, em hexadecimal (o %x também poderia ser usado). Também podemos acessar o conteúdo da variável que o ponteiro aponta, com a seguinte sintaxe:
                printf("\n Conteúdo da variável pelo ponteiro: %d", *ponteiro_para_ano);

A diferença do comando anterior é o asterisco antes do nome do ponteiro. Podemos, também, imprimir o endereço do próprio ponteiro, por meio da seguinte sintaxe:
                printf("\n Endereco do ponteiro: %p", &ponteiro_para_ano);

Exemplificando
O nome de um vetor nada mais é do que um ponteiro para o endereço de memória do seu primeiro elemento. Observe o código que será compilado:
*/

#include <stdio.h>

int main(){

    int num[2] = {10, 20};
    printf("\n Utilizando indice do vetor: %d", num[0]);
    printf("\n Utilizando ponteiro: %d", *num);
    return 0;
}