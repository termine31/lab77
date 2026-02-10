#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    // Задание 2 
    int mx;
    printf("Введите максимальное значение MAX\n");
    scanf("%d", &mx);

    int count = 0; int sum = 0;
    int fib1 = 0; int fib2 = 1;

    while (sum <= mx) {
        int temp;
        if (count == 0) {
            temp = fib1;
        }
        else if (count == 1) {
            temp = fib2;
        }
        else {
            temp = fib1 + fib2;
            fib1 = fib2;
            fib2 = temp;
        }
        sum += temp;
        printf("F(%d) = %d Сумма первых чисел фибоначчи %d \n", count,temp,sum);

        if (sum > mx) {
            printf("Сумма превысила MAX на числе %d\n", count);
            break;
        }
        count++;
      
    }

    // Задание 3 
    int S, srok, procent;
    printf("Введите сумму, срок и процентную ставку кредита: ");
    scanf("%d %d &d", &S,&srok,&procent);

    return 0;
}

