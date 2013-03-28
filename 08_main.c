/* Напишите программу, которая показывает, сколько памяти занимает
 * значение типа float.
 * На Mac тип short представляет собой 2-байтовое целое число, в
 * котором один бит задействован для хранения знака. Какое наименьшее
 * число может быть представлено этой переменной? А наибольшее? В
 * переменной типа unsigned short могут храниться только неотрицательные
 * числа. Какое наибольшее число может быть представлено этим типом? */

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[])
{
    //Сколько байт занимает тип float
    printf("Size of float is %zu bytes\n", sizeof(float));
    
    /*Наименьшее и наибольшее число, которое представлено short
     min -32768, max 32767 */ 
    printf("Min short value is %d\n", SHRT_MIN);
    printf("Max short value is %d\n", SHRT_MAX);
                
    /*Наибольшее число, которое представлено unsigned short
     max 65535 */ 
    printf("Max unsigned short value is %u\n", USHRT_MAX);
    return 0;
}
