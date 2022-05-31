#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <windows.h>

/// PROTOTIPADO
int numeroRandom();
int mostrarNumeros(int numeroUno, int numeroDos, int numeroTres);
int sumaDeN(int numeroN);
void tablaMultiplicar();
void calculadora();
void sumar(float sumarA, float sumarB);
void multiplicar(float multA, float multB);
void restar(float restA, float restB);
void dividir(float divA, float divB);
void pasarNegativo(int* numeroNegativo);
void cargarValores(int* numeroA, int* numeroB);
int menu();

/// MAIN
int main()
{
    setlocale(LC_ALL,"");
    int opt=0;
    do{
        opt=menu();
        system("cls");
        switch(opt){
        case 1:{
                printf(" 1.Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.\n\n");
                printf(" EL NUMERO RANDOM ENTRE 0 y 100 ES: %i\n\n", numeroRandom());
                system("pause");
                system("cls");
            }break;
        case 2:{
                printf(" 2.Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.\n\n");
                int uno;
                int dos;
                int tres;
                printf(" INGRESE UN NUMERO: ");
                scanf("%i", &uno);
                printf(" INGRESE UN NUMERO: ");
                scanf("%i", &dos);
                printf(" INGRESE UN NUMERO: ");
                scanf("%i", &tres);
                mostrarNumeros(uno,dos,tres);
                system("pause");
                system("cls");
            }break;
        case 3:{
                printf(" 3.Diseñe una función que reciba un número entero N y realice la suma de los números\n   enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n\n");
                int numN;
                printf(" INGRESA UN NUMERO: ");
                scanf("%i", &numN);

                printf("\n LA SUMA DE LOS MENORES POSITIVOS DE %i ES DE: %i\n\n",numN, sumaDeN(numN));
                system("pause");
                system("cls");
            }break;
        case 4:{
                printf(" 4.Desarrollar una función que muestre la tabla de multiplicar de un número entero\n   recibido por parámetro.\n\n");
                int numero;
                printf(" INGRESE UN NUMERO: ");
                scanf("%i", &numero);
                tablaMultiplicar(numero);
                system("pause");
                system("cls");
            }break;
        case 5:{
                printf(" 5.Realice una pequeña calculadora, utilizando funciones (una función de suma, una\n   de multiplicación, una de resta, una de división…)\n\n");
                calculadora();
                system("pause");
                system("cls");
            }break;
        case 6:{
                printf(" 6.Realizar una función que reciba un número positivo entero por parámetro por referencia,\n   y cambie su signo a negativo.\n\n");
                int numNegativo;
                printf(" INGRESE UN NUMERO ");
                fflush(stdin);
                scanf("%i", &numNegativo);
                pasarNegativo(&numNegativo);
                printf("\n EL NUMERO EN NEGATIVO ES: %i\n\n", numNegativo);
                system("pause");
                system("cls");
            }break;
        case 7:{
                printf(" 7.Realizar una función que reciba dos números enteros por parámetro por referencia y\n   cargue sus valores el usuario dentro de la función.\n\n");
                int numberA;
                int numberB;
                cargarValores(&numberA, &numberB);
                printf("\n EL VALOR DE A ES: %i\n", numberA);
                printf(" EL VALOR DE B ES: %i\n", numberB);
                system("pause");
                system("cls");
            }break;
        case 8:{
                printf("\n FIN DEL PROGRAMA\n");
                printf(" NOS VEMOS LA PROXIMA\n\n");
                system("pause");
                system("cls");
            }break;
        default:
            printf("\n LA OPCION INGRESADA ES INCORRECTA\n\n");
            system("pause");
            system("cls");
            break;
        }
    }while (opt!=8);
    return 0;
}

/// FUNCIONES

/// 1. Desarrollar una funcion que devuelva un valor RANDOM en el random de 0 a 100.
int numeroRandom(){
    srand(time(NULL));
    return rand()%(100+1);
}

/// 2. Diseñe una funcion que reciba 3 numeros enteros y muestre el mayor y el menor.
int mostrarNumeros(int numeroUno, int numeroDos, int numeroTres){
    if(numeroUno<=numeroDos && numeroUno<=numeroTres){
        printf("\n EL NUMERO MENOR ES: %i\n\n", numeroUno);
    }else if(numeroDos<=numeroUno && numeroDos<=numeroTres){
        printf("\n EL NUMERO MENOR ES: %i\n\n", numeroDos);
    }else{
        printf("\n EL NUMERO MENOR ES: %i\n\n", numeroTres);
    }

    if(numeroUno>=numeroDos && numeroUno>=numeroTres){
        printf(" EL NUMERO MAYOR ES: %i\n\n", numeroUno);
    }else if(numeroDos>=numeroUno && numeroDos>=numeroTres){
        printf(" EL NUMERO MAYOR ES: %i\n\n", numeroDos);
    }else{
        printf(" EL NUMERO MAYOR ES: %i\n\n", numeroTres);
    }
}

/// 3. Diseñe una funcion que reciba un numero entero N y realice la suma de los numeros
/// enteros positivos menores que N y lo retorne. N es un dato ingresado por el usario en el main.
int sumaDeN(int numeroN){
    int suma=0;
    if(numeroN>=0){
        for(int i=0; i<numeroN; i++){
            suma+=i;
        }
        return suma;
    }else{
        return -1;
    }
}

/// 4. Desarrollar una funcion que muestre la tabla de multiplicar de un numero entero
/// por parametro.
void tablaMultiplicar(int tablaNumero){
    printf(" LA TABLA DE MULTIPLICAR DEL NUMERO %i ES:\n\n",tablaNumero);
    for(int i=0; i<=10; i++){
        printf(" %d x %d = %d\n\n", tablaNumero, i, tablaNumero*i);
    }
}

/// 5. Realice una pequeña calculadora, utilizando funciones (una funcion de suma, una de multiplicacion,
/// una de resta, una de division...)
void calculadora(){
    float numA;
    float numB;
    int option=0;
    do{
        printf("=============\n");
        printf(" CALCULADORA\n");
        printf("=============\n");
        printf(" QUE OPERACION DESEA REALIZAR?\n\n");
        printf(" 1.SUMAR\n");
        printf(" 2.MULTIPLICAR\n");
        printf(" 3.RESTAR\n");
        printf(" 4.DIVIDIR\n");
        printf(" 5.SALIR\n");
        printf("\n ELIJA UNA OPCION: ");
        fflush(stdin);
        scanf("%i",&option);
        system("cls");
        switch(option){
        case 1:{
            printf(" SUMA\n");
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numA);
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numB);
            sumar(numA,numB);
            system("pause");
            system("cls");
        }break;
        case 2:{
            printf(" MULTIPLICACION\n");
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numA);
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numB);
            multiplicar(numA,numB);
            system("pause");
            system("cls");
        }break;
        case 3:{
            printf(" RESTA\n");
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numA);
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numB);
            restar(numA, numB);
            system("pause");
            system("cls");        }break;
        case 4:{
            printf(" DIVISION\n");
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numA);
            printf(" INGRESE UN NUMERO: ");
            scanf("%f", &numB);
            dividir(numA, numB);
            system("pause");
            system("cls");
        }break;
        case 5:{
            printf(" 5.SALIR\n");
            system("cls");
        }break;
        default:
            printf("\n OPCION INCORRECTA\n\n");
            system("pause");
            system("cls");
            break;
        }
    }while(option!=5);
    printf("\n FIN DE LA CALCULADORA\n\n");
}

void sumar(float sumarA, float sumarB){
    float resultado=0;
    resultado = sumarA+sumarB;
    printf("\n LA SUMA DE SUS NUMEROS DA: %.2f\n\n", resultado);
}
void multiplicar(float multA, float multB){
    float resultado=0;
    resultado = multA*multB;
    printf("\n LA MULTIPLICACION DE SUS NUMEROS DA: %.2f\n\n", resultado);
}
void restar(float restA, float restB){
    float resultado=0;
    resultado = restA-restB;
    printf("\n LA RESTA DE SUS NUMEROS DA: %.2f\n\n", resultado);
}
void dividir(float divA, float divB){
    float resultado=0;
    resultado = divA/divB;
    printf("\n LA DIVISION DE SUS NUMEROS DA: %.2f\n\n", resultado);
}

/// 6. Realizar una funcion que reciba un numero positivo entero por parametro por referencia, y cambie
/// su signo a negativo.
void pasarNegativo(int* numeroNegativo){
    if(*numeroNegativo>0){
        *numeroNegativo *= -1;
    }
}

/// 7. Realizar una funcion que reciba dos numeros enteros por parametro por referencia y cargue
/// sus valores el usuario dentro de la funcion.
void cargarValores(int* numeroA, int* numeroB){
    printf(" INGRESE EL VALOR DE A: ");
    fflush(stdin);
    scanf("%i", numeroA);
    printf(" INGRESE EL VALOR DE B: ");
    fflush(stdin);
    scanf("%i", numeroB);
}

int menu(){
    int opt;
    printf("\n================================================\n");
    printf(" TRABAJO PRACTICO N° 3 bis: FUNCIONES SIN PILAS\n");
    printf("================================================\n\n");
    printf(" 1.Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.\n\n");
    printf(" 2.Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.\n\n");
    printf(" 3.Diseñe una función que reciba un número entero N y realice la suma de los números\n   enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n\n");
    printf(" 4.Desarrollar una función que muestre la tabla de multiplicar de un número entero\n   recibido por parámetro.\n\n");
    printf(" 5.Realice una pequeña calculadora, utilizando funciones (una función de suma, una\n   de multiplicación, una de resta, una de división…)\n\n");
    printf(" 6.Realizar una función que reciba un número positivo entero por parámetro por referencia,\n   y cambie su signo a negativo.\n\n");
    printf(" 7.Realizar una función que reciba dos números enteros por parámetro por referencia y\n   cargue sus valores el usuario dentro de la función.\n\n");
    printf(" 8.SALIR\n\n");
    printf("\n ELIJA UNA OPCIÓN: ");
    fflush(stdin);
    scanf("%i", &opt);
    return opt;
}


//    /// 1
//    printf("EL NUMERO RANDOM ENTRE 0 y 100 ES: %i\n", numeroRandom());
//    /// 2
//    int uno;
//    int dos;
//    int tres;
//    printf("INGRESE UN NUMERO: ", uno);
//    scanf("%i", &uno);
//    printf("INGRESE UN NUMERO: ", dos);
//    scanf("%i", &dos);
//    printf("INGRESE UN NUMERO: ", tres);
//    scanf("%i", &tres);
//    mostrarNumeros(uno,dos,tres);
//    /// 3
//    int numN;
//    printf("INGRESA UN NUMERO: ", numN);
//    scanf("%i", &numN);
//
//    printf("\nEL NUMERO INGRESADO MAS LA SUMA DE LOS MENORES POSITIVOS ES DE: %i\n", sumaDeN(numN));
//    /// 4
//    int numero;
//    printf("INGRESE UN NUMERO: ");
//    scanf("%i", &numero);
//    tablaMultiplicar(numero);
//    /// 5
//    float numA;
//    float numB;
//
//    printf("INGRESE UN NUMERO: ");
//    scanf("%f", &numA);
//    printf("INGRESE UN NUMERO: ");
//    scanf("%f", &numB);
//
//    printf("\nLA SUMA DE SUS NUMEROS DA: %.2f\n", sumar(numA, numB));
//    printf("\nLA MULTIPLICACION DE SUS NUMEROS DA: %.2f\n", multiplicar(numA, numB));
//    printf("\nLA RESTA DE SUS NUMEROS DA: %.2f\n", restar(numA, numB));
//    printf("\nLA DIVISION DE SUS NUMEROS DA: %.2f\n", dividir(numA, numB));
//    /// 6
//    int numNegativo;
//    printf("INGRESE UN NUMERO ");
//    fflush(stdin);
//    scanf("%i", &numNegativo);
//    pasarNegativo(&numNegativo);
//    printf("\nEL NUMERO EN NEGATIVO ES: %i\n", numNegativo);
//    /// 7
//    int numberA;
//    int numberB;
//    cargarValores(&numberA, &numberB);
//    printf("\nEL VALOR DE A ES: %i\n", numberA);
//    printf("EL VALOR DE B ES: %i\n", numberB);
//}
