#include <stdio.h>
#include <math.h>


float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura) {
	return sqrt(pow(longitud, 2) + pow(altura, 2));
}

float calcularAreaCirculo(float radio) {
	return M_PI * pow(radio, 2);
}

float calcularPerimetroCirculo(float radio) {
	return 2 * M_PI * radio;
}

// Función para imprimir resultados
void imprimirResultados(float area, float perimetro) {
	printf("\n===== RESULTADOS =====\n");
	printf("El Área es: %.2f\n", area);
	printf("El Perímetro es: %.2f\n", perimetro);
}

int main() {
	int opcion;
	float longitud, altura, radio;
	float area, perimetro;
	
	printf("\nIngrese la figura que desea calcular:\n");
	printf("1. Rectángulo\n");
	printf("2. Círculo\n");
	printf("Opción: ");
	scanf("%d", &opcion);
	
	switch (opcion) {
	case 1:
		printf("Opcion de Rectangulo selecionada.");
		printf("\nIngrese la longitud del rectángulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rectángulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		float diagonal = calcularDiagonalRectangulo(longitud, altura);
		
		imprimirResultados(area, perimetro);
		printf("La Diagonal es: %.2f\n", diagonal);
		break;
		
	case 2:
		printf("Opcion de circulo seleccionada.");
		printf("\nIngrese el radio del círculo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		
		imprimirResultados(area, perimetro);
		break;
		
	default:
		printf("\nOpción inválida. Debe elegir 1 o 2.\n");
		break;
	}
	
	return 0;
}
