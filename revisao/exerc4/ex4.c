#include <stdio.h>

int ehPrimo(int num)
{
    if(num <= 1) return 0;
    for(int i = 2; i*i<=num; i++)
    {
        if(num%i == 0) return 0;
    }
    return 1;
}

int primo(int m, int * p1, int * p2)
{
    int i = m;
    while(!ehPrimo(i))i++;
    *p1 = i;
    i = m;
    while(!ehPrimo(i))
    {
        if(i<0)break;
        i--;
    }
    *p2 = i;    
}

void main(){
    int p1;
    int p2;
    int m;
    scanf("%d",&m); 
    primo(m,&p1, &p2);
    printf("%d,%d,%d\n",p1, m, p2);
}