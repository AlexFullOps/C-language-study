/*
Já sabemos como otimizar o uso de variáveis usando as estruturas compostas (vetor e matriz). Porém, só podemos armazenar valores de um mesmo tipo.
Além das estruturas homogêneas, a linguagem de programação C oferece variáveis compostas heterogêneas chamadas de estruturas (structs) ou, ainda, de registros por alguns autores (SOFFNER, 2013).
Assim como associamos os vetores e as matrizes a tabelas, podemos associar uma estrutura a uma ficha de cadastro com diversos campos. Por exemplo, o cadastro de um cliente poderia ser efetuado a partir da inserção do nome, idade, CPF e endereço em uma structs.
Na linguagem C, a criação de uma estrutura deve ser feita antes da função main() e deve apresentar a seguinte sintaxe:
struct < nome >{
<tipo> <nome_da_variavel1>;
<tipo> <nome_da_variavel2>;
…
};

<nome> é o nome da estrutura, por exemplo, cliente, carro, fornecedor. As variáveis internas são os campos nos quais se deseja guardar as informações dessa estrutura. Na prática, uma estrutura funciona como um “tipo de dado” e seu uso sempre será atribuído a uma ou mais variáveis.
_______

Exemplificando:
Vamos criar uma estrutura para armazenar o modelo, o ano e o valor de um automóvel.
No código - Struct em C, “Struct em C”, a estrutura automóvel foi criada entre as linhas 3 e 7. Mas, para utilizar essa estrutura, na linha 10 foi criada a variável dadosAutomovel1, que é do tipo struct automovel.
Somente após essas especificações é que podemos atribuir algum valor para as variáveis dessa estrutura de dados.


O acesso aos dados da struct (leitura e escrita) é feito com a utilização do nome da variável que recebeu como tipo a estrutura com um ponto (.) e o nome do campo da estrutura a ser acessado. Por exemplo, para acessar o campo ano da struct automovel do código - Struct em C, “Struct em C”, devemos escrever: dadosAutomovel1.ano.

*/

#include <stdio.h>
    struct automovel{
        char modelo[20];
        int ano;
        float valor;
    };
int main()
{
    struct automovel dadosAutomovel1;
    printf("\n Digite o modelo do automovel:");
    scanf("%s", dadosAutomovel1.modelo);
    printf("\n Digite o ano do automovel:");
    scanf("%d", &dadosAutomovel1.ano);
    printf("\n Digite o valor do automovel:");
    scanf("%f", &dadosAutomovel1.valor);

    printf("\n Dados atribuidos");
    printf("\n %s", dadosAutomovel1.modelo);
    printf("\n %d", dadosAutomovel1.ano);
    printf("\n %f", dadosAutomovel1.valor);
}