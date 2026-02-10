#include <iostream>
using namespace std;
int main() {
    int N, mx;
    cout << "Введите максимальное значение MAX\n";
    cin >> mx;

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
        count++;

        if (sum > mx) {
            cout << "Сумма превысила MAX на числе " << count;
            break;
        }
        cout << "F(" << count << ") = " << temp << " Сумма первых чисел Фибоначчи: " << sum << endl;
    }

    return 0;
}

