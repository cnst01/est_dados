#include <stdlib.h>
#include <stdio.h>

float le_vetor(int tam)
{
    float * vetor = (float*)malloc(tam*sizeof(float));
    for(int i=0; i<tam; i++)
        scanf("%f",&vetor[i]);
    float soma = 0; 
    for(int i=0; i<tam; i++)
        soma += vetor[i];
    free(vetor);
    return(soma/tam);
}

void main()
{
    printf("%2.f",le_vetor(3));
}
