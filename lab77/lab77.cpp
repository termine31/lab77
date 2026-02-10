#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    // Задание 2 
    int mx;
    printf("2 задание\n");
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
            printf("Сумма превысила MAX на числе %d\n\n", count);
            break;
        }
        count++;
      
    }

    // Задание 3 
    int N;
    double S,R; // S - сумма кредита N - срок R - ставка
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("3 Задание\n"); 
    printf("Введите сумму, срок и процентную ставку кредита: ");
    scanf("%lf %d %lf", &S,&N,&R);
    printf("-----------------------------------\n");
    printf("    Долг    Процент    Платеж\n");
    printf("-----------------------------------\n");

    double  main_payment; // основной платеж 
    main_payment = S / N; // платеж делится на весь срок равномерно 
    double monthly_rate; 
    monthly_rate = R / 100 / 12; // ставка за месяц
    double total_interest = 0;


    for (int i = 1; i <= N; i++) {
        double debt, interest, payment;
        debt = S - (i - 1) * main_payment; // остаток долга на следующий месяц, в 1 месяц он такой, какой был изначально 
        interest = debt * monthly_rate; // процент за тек.месяц
        payment = main_payment + interest; // складываю процент за месяц + основной платеж за месяц 
        total_interest += interest; // складываю проценты 
        printf("%3d %9.2lf %9.2lf %9.2lf\n", i, debt, interest, payment);
    }
    printf("-----------------------------------\n");
    printf("Всего процентов: %.2lf \n", total_interest);


    return 0;
}

