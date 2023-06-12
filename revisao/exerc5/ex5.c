#include <stdio.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    char * nome[100];
    int Idade;    // define o campo Idade
} Pessoa; // Define o nome do novo tipo criado

void ImprimePessoa(Pessoa P)
{
  printf("Nome: %s, Idade: %d\n", *P.nome, P.Idade);
}

void SetPessoa(Pessoa *P, char nome[], int idade)
{ // Nesta função o parâmetro P é um ponteiro para uma struct
    *P->nome = nome;
    (*P).Idade = idade;
}
   
void main()
{
    char nomes[5][100] = {"Joao", "Cassio", "Mikael", "Gabriel", "Marcio"};
    int idade[5] = {12,21,22,18,30};
    Pessoa list[5];
    for(int i=0; i<5; i++)
    {
        SetPessoa(&list[i], nomes[i], idade[i]);
        ImprimePessoa(list[i]);
    }
}

