//2. Defina uma função chamada diasDeAula que calcula quantas aulas de laboratorio temos dado
//como entrada: Dia de hoje(dia,mes,ano) e Ultimo dia do Semestre(dia,mes,ano).
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

int diasDeAulas(Data diaDeHoje, Data ultimoDiaDoSemestre){

    int diasTotais = (ultimoDiaDoSemestre.ano - diaDeHoje.ano) * 365 + (ultimoDiaDoSemestre.mes - diaDeHoje.mes) * 30 + (ultimoDiaDoSemestre.dia - diaDeHoje.dia);

    int semanas = diasTotais / 7;

    return semanas;
}

int main(){

    Data diaDeHoje = {13, 8, 2023};
    Data ultimoDiaDoSemestre = {29, 10, 2023};

    int aulasDadas = diasDeAulas(diaDeHoje, ultimoDiaDoSemestre);

    printf("O total de aulas a serem ministradas na disciplina de laboratorio e: %d\n", aulasDadas);

    return 0;
}