#include <stdio.h>
#include <stdlib.h>
//leitura de vetor, matriz, e matriz tri
void vetor_read()
{
    int * vetor = (int*)malloc(10*sizeof(int));
    for(int i=0; i<10; i++)
        vetor[i] = i*2;
    for(int i=0; i<10; i++)
        printf("%d,",vetor[i]);
    printf("\n");
    free(vetor);
}

void matrix_read()
{
    int ** matrix = (int**)malloc(2*sizeof(int*));
    for(int i=0;i<2;i++)
        matrix[i] = (int*)malloc(3*sizeof(int));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            matrix[i][j] = (j+1)*(i+1);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    free(*matrix);
}

void trid_read()
{
    int *** matrix = (int***)malloc(2*sizeof(int**));
    for(int i=0;i<2;i++){
        matrix[i] = (int**)malloc(2*sizeof(int*));
        for(int j=0;j<3;j++)
            matrix[i][j] = (int*)malloc(2*sizeof(int));
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++){
                matrix[i][j][k] = k+(3*j)+(i*10)+1;
                printf("%d ", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    free(**matrix);
}

void main()
{
    trid_read();
}