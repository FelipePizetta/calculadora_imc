#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aberturaIMC() {
    printf("\nooooo ooo        ooooo   .oooooo.   ");
    printf("\n`888' `88.       .888'  d8P'  `Y8b  ");
    printf("\n 888   888b     d'888  888          ");
    printf("\n 888   8 Y88. .P  888  888          ");
    printf("\n 888   8  `888'   888  888          ");
    printf("\n 888   8    Y     888  `88b    ooo  ");
    printf("\no888o o8o        o888o  `Y8bood8P'  \n\n");
}

float calcular_imc(float peso, float altura) {
    return peso / (altura * altura);
}

void verificar_classificacao(float imc) {
    printf("\nClassificação: ");

    if(imc < 18.5) {
        printf("Abaixo do peso.\n");
    } else if(imc >= 18.5 && imc < 25) {
        printf("Peso normal.\n");
    } else if(imc >= 25 && imc < 30) {
        printf("Sobrepeso.\n");
    } else if(imc >= 30 && imc < 35) {
        printf("Obesidade Grau I.\n");
    } else if(imc >= 35 && imc < 40) {
        printf("Obesidade Grau II.\n");
    } else {
        printf("Obesidade Grau III.\n");
    }
}

int main()
{
    setlocale(LC_ALL, "C.UTF-8");

    aberturaIMC();

    float peso, altura, imc;

    printf("\nQual a sua altura (m)? ");
    scanf("%f", &altura);

    printf("Qual o seu peso (kg)? ");
    scanf("%f", &peso);

    if (peso <= 0 || altura <= 0) {
        printf("Peso e altura devem ser valores positivos e não nulos.\n");
        return 1;
    } else {
        imc = calcular_imc(peso, altura);
        verificar_classificacao(imc);

        printf("IMC: %.2f\n", imc);
    }

    return 0;
}

