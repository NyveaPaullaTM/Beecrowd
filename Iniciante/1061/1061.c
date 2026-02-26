#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia1, dia2, hora1, hora2, minuto1, minuto2, segundo1, segundo2;
    int t_dias, t_horas, t_minutos, t_segundos, s_total1, s_total2;
    
    scanf("Dia %d\n %d : %d : %d\n", &dia1, &hora1, &minuto1, &segundo1);
    scanf("Dia %d\n %d : %d : %d\n", &dia2, &hora2, &minuto2, &segundo2);
    
    s_total1 = (dia1*24*60*60) + (hora1*60*60) + (minuto1*60) + segundo1;
    s_total2 = (dia2*24*60*60) + (hora2*60*60) + (minuto2*60) + segundo2;
    
    t_segundos = abs(s_total1 - s_total2);
    
    t_dias = t_segundos/(24*60*60);
    t_segundos %= 24*60*60;
    
    t_horas = t_segundos/(60*60);
    t_segundos %= 60*60;

    t_minutos = t_segundos/60;
    t_segundos %= 60;
    
    printf("%d dia(s)\n", t_dias);
    printf("%d hora(s)\n", t_horas);
    printf("%d minuto(s)\n", t_minutos);
    printf("%d segundo(s)\n", t_segundos);
    
    return 0; 
}