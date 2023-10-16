#include "arvoreBin.h"

typedef struct arvoreSerie
{

    int codigo;
    char tituloSerie[50];
    int qtdTemporadas;
    Notemp *raiz_temporada;
    Noarv *esquerda , *direita;

}Noarv;

typedef struct arvoreTemporada
{

    int numeroTemporada;
    char titulo[100];
    int qtdEpisodios;
    int ano;

    Nopart *participante;
    Notemp *esquerda , *direita;
}Notemp;

typedef struct participante
{
    
    char nomeArtista[100];
    char nomePersonagem[100];
    char descricaoPersonagem[500];

}Nopart;

