﻿/*Используйте математическую библиотеку! Включите в main.c код, который
выводит синус 1 радиана. Число должно выводиться с округлением до трёх цифр
в дробной части. Ответ: 0,841 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Синус 1 радиана = %.3f\n", sin(1));

    return 0;
}
