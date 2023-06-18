//Programa desenvolvido pelo Prof. Heráclito para cálculos com Progressão Aritmética

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int opcao, a1, n, r, an, sn;

    printf("**************************  MENU  ******************************\n\n");
    printf("O que você deseja calcular?\n\n");
    printf("1 - O enésimo termo de uma Progressão Aritmética\n");
    printf("2 - A razão de uma Progressão Aritmética\n");
    printf("3 - O valor da posição n numa Progressão Aritmética\n");
    printf("4 - A soma dos termos de uma PA\n");
    printf("5 - O valor de an e da razão a partir da Somda dos termos de uma PA\n");
    printf("\n*******************************************************************");
    printf("\n\n");

    scanf_s("%d",&opcao);

    switch (opcao){
        case 1:
            printf("Digite o 1º termo da PA: ");
            scanf_s("%d", &a1);
            printf("Digite a razão da PA: ");
            scanf_s("%d",&r);
            printf("Digite o termo da sequência da PA que deseja conhecer: ");
            scanf_s("%d",&n);

            an = a1 + (n-1)*r;

            printf("O valor do %dº termo da PA é %d\n",n,an);
            break;

        case 2:
            printf("Digite o 1º termo da PA: ");
            scanf_s("%d", &a1);
            printf("Digite o enésimo termo da PA: ");
            scanf_s("%d",&an);
            printf("Digite o número de termos da PA: ");
            scanf_s("%d",&n);

            r = (an - a1)/(n - 1);

            printf("O valor da razão é %d\n", r);
            break;

        case 3:
            printf("Digite o 1º termo da PA: ");
            scanf_s("%d", &a1);
            printf("Digite o enésimo termo da PA: ");
            scanf_s("%d",&an);
            printf("Digite a razão da PA: ");
            scanf_s("%d",&r);

            n = ((an - a1)/(r)) + 1;

            printf("O valor de n corresponde %d na sequência\n", n);
            break;

        case 4:
            printf("Digite o 1º termo da PA: ");
            scanf_s("%d", &a1);
            printf("Digite a razão da PA: ");
            scanf_s("%d",&r);
            printf("Digite a posição n da PA: ");
            scanf_s("%d",&n);

            an = a1 + (n-1)*r;
            sn = ((a1 + an)*n)/2;

            printf("O valor da soma dos %d primeiros números da PA é %d\n", n,sn);
            break;

        case 5:
            printf("Digite o 1º termo da PA: ");
            scanf_s("%d", &a1);
            printf("Digite a posição n da PA: ");
            scanf_s("%d",&n);
            printf("Digite a soma dos termos da PA: ");
            scanf_s("%d",&sn);

            an = ((2*sn - n*a1))/(n);
            r = (an - a1)/(n - 1);

            printf("an = %d\n", an);
            printf("razão = %d\n", r);

            break;
        default:
            printf("Opção inválida, escolha entre 1 e 5 no menu");
            printf("\n\n");
    }
return 0;
}
