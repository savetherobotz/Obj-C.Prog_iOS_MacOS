/* Напишите программу, которая показывает, сколько памяти занимает
 * значение типа float.
 * На Mac тип short представляет собой 2-байтовое целое число, в
 * котором один бит задействован для хранения знака. Какое наименьшее
 * число может быть представлено этой переменной? А наибольшее? В
 * переменной типа unsigned short могут храниться только неотрицательные
 * числа. Какое наибольшее число может быть представлено этим типом? */

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //Сколько байт занимает тип float
    printf("Size of float is %zu bytes\n", sizeof(float));
    
    /*Наименьшее и наибольшее число, которое представлено short
     min -32768, max 32767 */ 
    short x = -pow (2, 16);
    short y = pow (2, 16);
    printf("Min short value is %d\n", x);
    printf("Max short value is %d\n", y);
        
    /*Наибольшее число, которое представлено unsigned short
     max 65535 */ 
    unsigned short i = pow (2, 16);
    printf("Max unsigned short value is %u\n", i);
    
    return 0;
}