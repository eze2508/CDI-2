#include <stdio.h>

int main(void) {
    int billetes1 = 1;
    int billetes5 = 5;
    int billetes10 = 10;
    int billetes20 = 20;
    int billetes50 = 50;
    int billetes100 = 100;

    int cuentabilletes1 = 0;
    int cuentabilletes5 = 0;
    int cuentabilletes10 = 0;
    int cuentabilletes20 = 0;
    int cuentabilletes50 = 0;
    int cuentabilletes100 = 0;


    int monto;
    int retirado = 0;
    printf("Asignar un monto ");
    scanf("%d", &monto);

    if(monto<20){
        printf(" El monto debe ser mayor a 20 ");
        return 1;
    }
    if(monto>5000){
        printf(" El monto debe ser menor a 5000 ");
        return 2;
    }
    while(monto>=100){
        monto = (monto - billetes100);
        retirado = (retirado + billetes100);
        cuentabilletes100 = (cuentabilletes100 + 1); 
    }

    while(monto>=50){
        monto = (monto - billetes50);
        retirado = (retirado + billetes50);
        cuentabilletes50 = (cuentabilletes50 + 1);
    }

    while(monto>=20){
        monto = (monto - billetes20);
        retirado = (retirado + billetes20);
        cuentabilletes20 = (cuentabilletes20 + 1);
    }

    while(monto>=10){
        monto = (monto - billetes10);
        retirado = (retirado + billetes10);
        cuentabilletes10 = (cuentabilletes10 + 1);
    }

    while(monto>=5){
        monto = (monto - billetes5);
        retirado = (retirado + billetes5);
        cuentabilletes5 = (cuentabilletes5 + 1);
    }

    while(monto>=1){
        monto = (monto - billetes1);
        retirado = (retirado + billetes1);
        cuentabilletes1 = (cuentabilletes1 + 1);
    }

    
    printf("Billetes de uno = %d \n", cuentabilletes1);
    printf("Billetes de sinco = %d \n", cuentabilletes5);
    printf("Billetes de diez = %d \n", cuentabilletes10);
    printf("Billetes de veinte = %d \n", cuentabilletes20);
    printf("Billetes de cincuenta = %d \n", cuentabilletes50);
    printf("Billetes de cien = %d \n", cuentabilletes100);


    return 0;
}
