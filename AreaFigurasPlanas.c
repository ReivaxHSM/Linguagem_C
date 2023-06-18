#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
#define pi 3.14159

int main() {

    setlocale(LC_ALL, "Portuguese");
    int escolha;
    float base, altura, raio, area, diagonalMaior, diagonalMenor, angulo;
    float raioMaior, raioMenor, baseMaior, baseMenor, a, b, c, p, lado, ladoMaior, ladoMenor;
    double x;

    printf("***********************************  MENU  ***************************************\n\n");
    printf("Escolha uma figura plana e digite uma das opçoes do menu para o cálculo da área:\n\n");
    printf("1 - Quadrado\n");
    printf("2 - Retângulo\n");
    printf("3 - Triângulo\n");
    printf("4 - Trapézio\n");
    printf("5 - Losango\n");
    printf("6 - Círculo\n");
    printf("7 - Setor circular\n");
    printf("8 - Coroa circular\n");
    printf("9 - Hexágo\n");
    printf("10 - Triângulo Fórmula de Heron\n");
    printf("11 - Triângulo Equilátero\n");
    printf("12 - Triângulo dois lados e o ângulo\n");
    printf("\n***********************************************************************************");
    printf("\n\n");

    scanf_s("%d", &escolha); //Permite a entrada de dados da escolha


    switch (escolha) {
    case 1: //área do quadrado
        printf("Digite o valor do lado do quadrado: ");
        scanf_s("%f", &base);

        area = base * base;
        printf("\n\n");

        break;

    case 2: //Área do retângulo
        printf("Digite o valor da base do retângulo: ");
        scanf_s("%f", &base);
        printf("Digite o valor da altura do retângulo: ");
        scanf_s("%f",&altura);

        area = base * altura;
        printf("\n\n");

        break;

    case 3: //Área do triângulo
        printf("Digite o valor da base do triângulo: ");
        scanf_s("%f", &base);
        printf("Digite o valor da altura do triângulo: ");
        scanf_s("%f", &altura);

        area = (base * altura) / 2;
        printf("\n\n");

        break;

    case 4: //Área do trapézio
        printf("Digite o valor da baseMaior do trapézio: ");
        scanf_s("%f", &baseMaior);
        printf("Digite o valor da baseMenor do trapézio: ");
        scanf_s("%f",&baseMenor);
        printf("Digite o valor da altura do trapézio: ");
        scanf_s("%f",&altura);

        area = ((baseMaior + baseMenor) * (altura)) / 2;
        printf("\n\n");

        break;

    case 5: //Área do losango
        printf("Digite o valor da diagonalMaior do losango: ");
        scanf_s("%f", &diagonalMaior);
        printf("Digite o valor da diagonalMenor do losango: ");
        scanf_s("%f",&diagonalMenor);

        area = (diagonalMaior * diagonalMenor) / 2;
        printf("\n\n");

        break;

    case 6: //Área do cículo
        printf("Digite o valor do raio do círculo: ");
        scanf_s("%f", &raio);
        area = pi * raio * raio;
        printf("\n\n");

        break;

    case 7: //Área do setor circular
        printf("Digite o valor do angulo do setor circular: ");
        scanf_s("%f", &angulo);
        printf("Digite o valor do raio do setor circular: ");
        scanf_s("%f",&raio);

        area = (angulo * pi * raio * raio) / 360;
        printf("\n\n");

        break;

    case 8: //Área da coroa circular
        printf("Digite o valor do raio maior da coroa circular: ");
        scanf_s("%f", &raioMaior);
        printf("Digite o valor do raio menor da coroa circular: ");
        scanf_s("%f",&raioMenor);

        area = pi * ((raioMaior * raioMaior) - (raioMenor * raioMenor));
        printf("\n\n");

        break;

    case 9: //Área da hexágono regular
        printf("Digite o valor do raio do hexagono regular: ");
        scanf_s("%f", &raio);
        area = (3 * (raio * raio * (sqrt(3)))) / 2;
        printf("\n\n");

        break;

    case 10: //Fórmula de Heron
        printf("Digite o valor de a do triângulo: ");
        scanf_s("%f", &a);
        printf("Digite o valor de b do triângulo: ");
        scanf_s("%f", &b);
        printf("Digite o valor de c do triângulo: ");
        scanf_s("%f", &c);

        p = (a + b + c) / 2;
        area = (sqrt(p*(p - a)*(p - b)*(p - c)));
        printf("\n\n");

        break;

    case 11: //Triângulo Equilátero
        printf("Digite o valor de lado do triângulo equilátero: ");
        scanf_s("%f", &lado);
        

        area = (lado * lado * (sqrt(3))) / (4);
        printf("\n\n");

        break;

    case 12: //Área do triângulo dois lados e um ângulo
        printf("Digite o valor do lado maior: ");
        scanf_s("%f", &ladoMaior);
        printf("Digite o valor do lado menor: ");
        scanf_s("%f", &ladoMenor);
        printf("Digite o valor do angulo em graus: ");
        scanf_s("%f", &angulo);



        x = (pi * angulo) / 180; //transforma graus em radiano para o cálculo do seno
        altura = (ladoMenor) * (sin(x));
        area = ((ladoMaior * altura)) / (2);
        
        printf("\n\n");
        break;

    default:
        printf("Opção inválida, escolha entre 1 a 12 no Menu\n");
    }

    if (escolha >= 1 && escolha <= 12) {
        printf("A área da figura é: %.2f\n", area);
    }
    return 0;
}