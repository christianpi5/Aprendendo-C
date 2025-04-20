#include <stdio.h>
float input = 0.00;
float fahrenheit = 0.00;
float kelvin = 0.00;

float to_fahr(float param1){
    fahrenheit = (param1 * 9) / 5 + 32;
    return fahrenheit;
}

float to_kev(float param1){
    kelvin = param1 + 273.15;
    return kelvin;
}


int main(){
    //Pega valor em celsius
    printf("Digite o valor em Celsius:\n");
    int result = scanf("%f", &input);


    printf("CELCIUS: %.2f\n", input);
    printf("Fahrenheit = %.2f\n", to_fahr(input));
    printf("Kelvin = %.2f\n", to_kev(input));





    return 0;
}