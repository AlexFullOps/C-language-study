/*
    Para criarmos uma matriz em C, usamos a seguint sequência:
    <tipo_dado> <nome_da_matriz> <número_linhas> <número_colunas>
*/

#include <stdio.h>

int main(){
    float notas[3][2];

    //Aluno 1
    notas[0][0] = 10;
    notas[0][1] = 8.5;

    //Aluno 2
    notas[1][0] = 5.5;
    notas[1][1] = 2.7;

    //Aluno 3
    notas[2][0] = 4;
    notas[2][1] = 10;
    return 0;
}
