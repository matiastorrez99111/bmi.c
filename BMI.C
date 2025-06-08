#include <stdio.h>

int main() {
    float peso, altura, imc;


    printf("Ingrese su peso en kilogramos (kg): ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros (m): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Error: La altura debe ser mayor que cero.\n");
        return 1;
    }

    imc = peso / (altura * altura);

printf("\nTabla de IMC");
printf("\n menor a 18.5-->Bajo peso");
printf("\n entre 18,5 y 24,9-->Normal");
printf("\n entre 25,0 y 29,9-->Sobrepeso");
printf("\n mayor a 30--> Obesidad");

    printf("\nSu IMC es: %.2f\n", imc);
    printf("Clasificación según el IMC:\n");

    if (imc < 18.5)
        printf("Bajo peso\n");
    else if (imc < 25.0)
        printf("Peso normal\n");
    else if (imc < 30.0)
        printf("Sobrepeso\n");
    else if (imc < 35.0)
        printf("Obesidad \n");
   
    return 0;
}
