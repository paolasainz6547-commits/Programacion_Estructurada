#  Memoria Dinámica

## Descripción
Programa en C que practica el uso de memoria dinámica para reservar,
ampliar y liberar bloques de memoria en tiempo de ejecución.

## Temas aplicados

- Reserva de memoria con `malloc`
- Reserva e inicialización en cero con `calloc`
- Ampliación de memoria con `realloc`
- Liberación de memoria con `free`
- Punteros como base del manejo de memoria dinámica

## Ejercicio

- **Codigo 1 (memoria_dinamica.c):** Programa que demuestra el uso de las tres
  funciones principales de memoria dinámica en C. Con `malloc` se reserva
  espacio para 3 enteros sin inicializar y se asignan los valores `10`,
  `20` y `30` directamente por índice. Con `realloc` se amplía el mismo
  bloque de memoria de 3 a 6 enteros, conservando los valores anteriores
  y agregando `40`, `50` y `60` a las nuevas posiciones. Con `calloc` se
  reserva un nuevo bloque de 3 enteros inicializados automáticamente en `0`,
  demostrando la diferencia con `malloc` que deja la memoria sin inicializar.
  Cada bloque se libera con `free` al terminar su uso.

## Compilación
```bash
gcc memoria_dinamica.c -o memoria_dinamica
```

## Ejecución
```bash
./memoria_dinamica
```
