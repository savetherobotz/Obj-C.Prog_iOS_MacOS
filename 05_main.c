/* Сумма внутренних углов треугольника должна быть равна 180 градусам. Включите в файл main.c функцию,
которая получает первые два угла и возвращает величину третьего. Вызов функции должен выглядеть так:

#include <stdio.h>
// Add your new function here
int main(void)
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

В приведённом примере программа должна выдавать The third angle is 90.00 */


#include <stdio.h>
#include <stdlib.h>

float angl;

float remainingAngle(float angls)
{
    angl = angls;
    float anglSumm = 180.0 - angls;
    printf("значение angls - %f, значение anglSumm - %f\n", angls, anglSumm);
    return anglSumm;

}
int main(void)
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA + angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

