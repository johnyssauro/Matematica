#include <stdio.h>
#include "matematica.h"

int main() {

    //2PI rad == 360°
    printf("\n%f", calcular_seno(2*PI_m));
    printf("\n%f", calcular_cosseno(2*PI_m));
    printf("\n%f", calcular_tangente(2*PI_m));

    //0 rad == 0°
    printf("\n%f", calcular_seno(0));
    printf("\n%f", calcular_cosseno(0));
    printf("\n%f", calcular_tangente(0));

    //PI/3 rad == 60°
    printf("\n%f", calcular_seno(PI_m/3));
    printf("\n%f", calcular_cosseno(PI_m/3));
    printf("\n%f", calcular_tangente(PI_m/3));

    //PI/6 rad == 30°
    printf("\n%f", calcular_seno(PI_m/6));
    printf("\n%f", calcular_cosseno(PI_m/6));
    printf("\n%f", calcular_tangente(PI_m/6));

    //PI/4 rad == 45°
    printf("\n%f", calcular_seno(PI_m/4));
    printf("\n%f", calcular_cosseno(PI_m/4));
    printf("\n%f", calcular_tangente(PI_m/4));

    //PI/2 rad == 90°
    printf("\n%f", calcular_seno(PI_m/2));
    printf("\n%f", calcular_cosseno(PI_m/2));
    printf("\n%f", calcular_tangente(PI_m/2));

    return 0;
}