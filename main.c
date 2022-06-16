#include <stdio.h>

int main() {
    printf("Un triangulo tiene 3 lados,ingrese 3 datos correspondientes a los lados de un triangulo.\n");
    float lado1;
    float lado2;
    float lado3;

    printf("Medida del Lado 1: ");
    scanf("%f",&lado1);

    printf("\nMedida del Lado 2: ");
    scanf("%f",&lado2);

    printf("\nMedida del Lado 3: ");
    scanf("%f",&lado3);

    if(lado1 == lado2 && lado1 == lado3 )
    {
        printf("Es un Triangulo Equilatero.");
    }
    else if(lado1 == lado2 && lado2 !=lado3 && lado1 != lado3)
    {
        printf("Es un Triangulo Isósceles.");
    }
    else if(lado1 != lado2 && lado2 != lado3)
    {
        printf("Es un triangulo Escaleno.");
    }
    return 0;
}
