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
   
int main()
{
    Pessoa Joao;
    Pessoa Cassio;
    SetPessoa(&Joao, "joao", 15);
    SetPessoa(&Cassio, "Cassio", 21);
    ImprimePessoa(Joao);
    ImprimePessoa(Cassio);

    return 0;
}

