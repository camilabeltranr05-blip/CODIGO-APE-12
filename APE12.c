#include <stdio.h>
//Calculo del ACD
float calcularACD(){
    float ACD, suma = 0, promedio;
    int i, nU;
    printf("--------------------------------------------------\n Ingrese el numero de actividades (ACD) a promediar: \n--------------------------------------------------\n");
    scanf("%i", &nU);
    for(i = 1; i <=nU; i++){
        printf("Actividad %i \n", i);
        do{
        printf("Nota del ACD: \n");
        scanf("%f", &ACD);
        }while(ACD <0 || ACD >11);
        suma = suma + ACD;
    }

    promedio = (suma / nU) * 0.20;
    return promedio;
}

//Calculo de los APES
float calcularAPE(){
    float APE, suma = 0, promedio;
    int i, nA;
    printf("--------------------------------------------------\n Ingrese el numero de actividades (APE) a promediar: \n--------------------------------------------------\n");
    scanf("%i", &nA);
    for(i = 1; i <=nA; i++){
        printf("Actividad %i \n", i);
        do{
        printf("Nota del APE: \n");
        scanf("%f", &APE);
        }while(APE <0 || APE >11);
        suma = suma + APE;
    }
    
    promedio = (suma / nA)*0.25;
    return promedio;
}

//Calculo de los AA
float calcularAA(){
    float AA, suma = 0, promedio;
    int i, nA;
    printf("--------------------------------------------------\n Ingrese el numero de actividades (AA) a promediar: \n--------------------------------------------------\n");
    scanf("%i", &nA);
    for(i = 1; i <=nA; i++){
        printf("Actividad %i \n", i);
        do{
        printf("Nota del AA: \n");
        scanf("%f", &AA);
        }while(AA <0 || AA >11);
        suma = suma + AA;
    }
    
    promedio = (suma / nA)*0.20;
    return promedio;
}
//Calculo de los ES
float calcularES(){
    float ES, suma = 0, promedio;
    int i, nA;
    printf("--------------------------------------------------\n Ingrese el numero de actividades (AA) a promediar: \n--------------------------------------------------\n");
    scanf("%i", &nA);
    for(i = 1; i <=nA; i++){
        printf("Actividad %i \n", i);
        do{
        printf("Nota del ES: \n");
        scanf("%f", &ES);
        }while(ES <0 || ES >11);
        suma = suma + ES;
    }
    
    promedio = (suma / nA)*0.35;
    return promedio;
}
//Calcular nota cualitativa
void notaCualitativa(float notaFinal){
    if(notaFinal >= 7){
        printf("APROBADO \n");
    }else if(notaFinal >= 2.5 || notaFinal <7){
        printf("SUPLETORIO \n");
    }else if(notaFinal < 2.5){
        printf("REPROBADO \n");
    }

}

//Mensaje de la UNIDAD 
float calcularPromediou(int i){
    float promedioACD, promedioAA, promedioAPE, promedioES, totalUnidad;
    printf("Calculando el promedio final de la UNIDAD %i \n", i);
    promedioACD = calcularACD();
    printf("El ponderado de los ACD es de %.2f \n", promedioACD);
    promedioAPE = calcularAPE();
    printf("El ponderado de los APE es de %.2f \n", promedioAPE);
    promedioAA = calcularAA();
    printf("El ponderado de los AA es de %.2f \n", promedioAA);
    promedioES = calcularES();
    printf("El ponderado de los ES es de %.2f \n", promedioES);
    totalUnidad = promedioACD + promedioAPE + promedioAA + promedioES;
    printf("El promedio final de la unidad %i es de %.2f \n", i, totalUnidad);

    return totalUnidad;
}
int main(){
    float sumaPromedioACD = 0, U1 = 0, U2 = 0, U3 = 0, notaFinal;
    int i = 1;
    const int UNIDAD = 3;
    for(i = 1; i<=UNIDAD; i++){
        if(i == 1){
            U1 = calcularPromediou(i);
        }else if (i ==2){
            U2 = calcularPromediou(i);
        }else if (i ==3){
            U3 = calcularPromediou(i);
        }

    }
    notaFinal = (U1 + U2 + U3)/3;
    notaCualitativa(notaFinal);
    return 0;
}
