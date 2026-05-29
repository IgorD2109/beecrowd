#include <stdio.h>

int main()
{
   int H1, M1, H2, M2;
   int min_iniciais, min_finais, total;
   int RH, RM;   //RH: resultado de horas RM: resultado de minutos
   scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
   
   min_iniciais = (H1*60) + M1;
   min_finais = (H2*60) + M2;
   
   total = min_finais - min_iniciais;
   
   if (total <=0) {
       total=total+1440;
   }
   RH = total / 60;
   RM = total % 60;
   
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", RH, RM);
   

    return 0;
}
