
#include<stdio.h>
// Descubra seu signo 
int main() {
    int mes, dia;
printf("Insira o número equivalente ao seu mês de nascimento (1-12):");
scanf("%d",&mes);
printf("Insira o dia do seu nascimento (1-31):");
scanf("%d",&dia);
if ((mes == 1 && dia>=21) || (mes == 2 && dia<=18)){
printf("Aquário");
}else if ((mes == 2 && dia>=19) || (mes == 3 && dia<=20)){
printf("Peixes");
}else if ((mes == 3 && dia>=21) || (mes == 4 && dia<=20)){
printf("Áries");
}else if ((mes == 4 && dia>=21) || (mes == 5 && dia<=20)){
printf("Touro");
}else if ((mes == 5 && dia>=21) || (mes == 6 && dia<=20)){
printf("Gêmeos");
}else if ((mes == 6 && dia>=21) || (mes == 7 && dia<=22)){
printf("Câncer");
}else if ((mes == 7 && dia>=23) || (mes == 8 && dia<=22)){
printf("Leão");
}else if ((mes == 8 && dia>=23) || (mes == 9 && dia<=22)){
printf("Virgem");
}else if ((mes == 9 && dia>=23) || (mes == 10 && dia<=22)){
printf("Libra");
}else if ((mes == 10 && dia>=23) || (mes == 11 && dia<=21)){
printf("Escorpião");
}else if ((mes == 11 && dia>=22) || (mes == 12 && dia<=21)){
printf("Sagitário");
}else if ((mes == 12 && dia>=22) || (mes == 1 && dia<=20)){
printf("Capricórnio");
}else
printf("Número do mês ou dia inválido!");
{
    
}


    return 0;
}
