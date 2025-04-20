#include <stdio.h>
#define CONVERSAO 1.609

int input = 0;
float kph = 0.00;
float mph = 0.00;

float pegar_kph(){
printf("Digite o valor de Kilometros por Hora:\n");
scanf("%f", &kph);
mph = kph / CONVERSAO;
printf("KPH = %f\nMPH = %f\n", kph, mph);

}

float pegar_mph(){
printf("Digite o valor de Milhas por Hora:\n");
scanf("%f", &mph);
kph = mph * CONVERSAO;
printf("MPH = %f\nKPH = %f\n", mph, kph);

}

int main(){

printf("Digite Digite uma das opcoes abaixo:\n1- Transformar KPH para MPH;\n2- Transformar MPH para KPH.\n");
scanf("%d", &input);

if(input == 1){
    pegar_kph();
} else if(input == 2){
    pegar_mph();
}

return 0;
}