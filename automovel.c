/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float precoFab, percentualLuc, percentualImp, precoFinal, valorImp, valorLuc, precoImp;
    
    printf("Digite o preço de fabrica de seu automovel:\n");
    scanf("%d",&precoFab);
    printf("Digite o percentual de lucro:\n");
    scanf("%d",&percentualLuc);
    printf("Digite o percentual de imposto:\n");
    scanf("%d",&percentualImp);
    
    valorImp = precoFab * percentualLuc/100;
    valorLuc = precoFab * percentualImp/100;
    precoFinal = precoFab + valorImp + valorLuc;
    
    printf("Lucro do distribuidor: %d\n",valorLuc);
    printf("Impostos: %d\n",valorImp);
    printf("Preço final: %d\n",precoFinal);

    
}

