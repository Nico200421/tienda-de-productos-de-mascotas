#include <stdio.h>
int main() {
    char nombre[50];
    int edad;
    char especie[50];
    float total = 0.0;
    int opcion;
    int cantidad;
    int juguetesDisponibles = 50;
    int comidaDisponible = 50;
    int camasDisponibles = 50;
    int collaresDisponibles = 50;
    int ropaDisponible = 50;
    char continuar;
    printf("Bienvenido a la tienda de mascotas.\n");
    do {
        printf("Por favor, introduce los datos de la mascota:\n");
        printf("Nombre: ");
        scanf("%s", nombre);
        printf("Edad: ");
        scanf("%d", &edad);
        while (edad < 0) {
            printf("La edad no puede ser un número negativo. Inténtalo de nuevo: ");
            scanf("%d", &edad);
        }
        printf("Especie: ");
        scanf("%s", especie);
        printf("Elige un producto para tu mascota:\n");
        printf("1. Juguete\n");
        printf("2. Comida\n");
        printf("3. Cama\n");
        printf("4. Collar\n");
        printf("5. Ropa\n");
        printf("Opción (-1): ");
        scanf("%d", &opcion);
        while (opcion != -1) {
            printf("Cantidad: ");
            scanf("%d", &cantidad);

            // Check for negative quantity
            while (cantidad < 0) {
                printf("La cantidad no puede ser un número negativo. Inténtalo de nuevo: ");
                scanf("%d", &cantidad);
            }

            switch (opcion) {
                case 1:
                    if (cantidad <= juguetesDisponibles) {
                        total += 6.0 * cantidad;
                        juguetesDisponibles -= cantidad;
                    } else {
                        printf("No hay suficientes juguetes disponibles.\n");
                    }
                    break;
                case 2:
                    if (cantidad <= comidaDisponible) {
                        total += 20.0 * cantidad;
                        comidaDisponible -= cantidad;
                    } else {
                        printf("No hay suficiente comida disponible.\n");
                    }
                    break;
                case 3:
                    if (cantidad <= camasDisponibles) {
                        total += 40.0 * cantidad;
                        camasDisponibles -= cantidad;
                    } else {
                        printf("No hay suficientes camas disponibles.\n");
                    }
                    break;
                case 4:
                    if (cantidad <= collaresDisponibles) {
                        total += 4.5 * cantidad;
                        collaresDisponibles -= cantidad;
                    } else {
                        printf("No hay suficientes collares disponibles.\n");
                    }
                    break;
                case 5:
                    if (cantidad <= ropaDisponible) {
                        total += 20.0 * cantidad;
                        ropaDisponible -= cantidad;
                    } else {
                        printf("No hay suficiente ropa disponible.\n");
                    }
                    break;
                default:
                    printf("Opción inválida. No se añadirá al precio total.\n");
                    break;
            }
            printf("\nEl producto ha sido añadido al carrito.\n");
            printf("El total a pagar es: %.2f\n", total);
            printf("Opción (-1): ");
            scanf("%d", &opcion);
        }
        printf("\nHas introducido los siguientes datos:\n");
        printf("Nombre: %s\n", nombre);
        printf("Edad: %d\n", edad);
        printf("Especie: %s\n", especie);
        printf("Precio total: %.2f\n", total);
        printf("\nQuedaron en la tienda:\n");
        printf("Juguetes: %d\n", juguetesDisponibles);
        printf("Comida: %d\n", comidaDisponible);
        printf("Camas: %d\n", camasDisponibles);
        printf("Collares: %d\n", collaresDisponibles);
        printf("Ropa: %d\n", ropaDisponible);
        printf("\n¿Deseas realizar otra compra? (s/n): ");
        scanf(" %c", &continuar);
        total = 0.0;
    } while (continuar == 's' || continuar == 'S');
    return 0;
}