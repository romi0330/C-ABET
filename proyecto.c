/*En una Institución educativa se almacenan datos sobre el número de alumnos que han ingresado a sus
diferentes carreras en los dos semestres anuales y en los últimos 5 años. Cada carrera tiene un 
numero asociado que la identifica: 1. Ingeniería de Software. 2. Administración. 3. Economía.
4. Relaciones Internacionales. 5. Matemáticas. 6. Contabilidad. 7. Ingeniería Industrial.
Escriba un programa que calcule:
a) El año en que ingresó la mayor cantidad de alumnos a la universidad.
b) La Carrera que recibió la mayor cantidad de alumnos en el último año.
c) ¿En qué año la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos?*/

/*Anthony Almeida-Jeison Quimi-Romina Villavicencio*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    //se utiliza srand para cada vez que se corre salgan numeros diferentes
    srand(time(NULL));

    int semestre1, semestre2;
    int car[7];

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            car[j]=rand()%150;
        }
        
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            printf("semestre #%d. carrera #%d %d \n", i, j, car[j]);
        }
        
    }
    


    
    return 0;
}