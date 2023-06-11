#include <stdio.h>

int isInMatrix(int m, int n, int tamV, int arr[][n], int vetor[])
{
    int i;
    for(i=0;i<m;i++){
        if(arr[i][0] == vetor[0])
        {
            for(int j=0; j<tamV; j++)
            {
                if(arr[i][j] != vetor[j])
                {
                    break;
                }
                else if (j == tamV-1)
                {
                    return i;
                }    
            }
        }
    }
    return -1;
}

void main(){
    int M[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int V[3] = {4,8,9};
    int tamM[2] = {3,3};
    int tamV = 3;
    int are_included = isInMatrix(tamM[0], tamM[1], tamV, M, V);
    if(are_included != -1)
    {
        printf(
        "O vetor está incluso a matriz na posição inicial %d\n"
        , are_included);
    }
    else
    {
        printf("o vetor não está incluso na matriz");
    }
}