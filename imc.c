#include <stdio.h>

float calculaImc(float peso, float altura) {
	return peso/(altura*altura);
}

int main() {
    float peso;
    printf("Informe o peso: ");
    scanf("%f", &peso);
    float altura;
    printf("Informe a altura: ");
    scanf("%f", &altura);
    float imc = calculaImc(peso, altura);
    printf("O IMC calculado é %.1f\n", imc);
    if(imc < 18.5) {
        printf("IMC abaixo do ideal\n");
    }
    if(imc >= 18.5 && imc <= 35) {
        printf("IMC ideal\n");
    }
    if(imc > 35) {
        printf("IMC acima do ideal\n");
    }
    return 0;
}
