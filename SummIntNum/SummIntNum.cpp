#include <iostream>
#include <cstdlib>

using namespace std;

int SummIntNumm(int num) {
    double result = (double)(1 + num) / 2 * num;
    /*while (num > 0) {
        result += num;
        num--;
    }*/
    return result;
}

int main()
{
    system("chcp 1251 > nul");
    int nummer;
    cout << "Введите натуральное число: ";
    cin >> nummer;
    cout << "Сумма натуральных чисел до " << nummer << " составляет " << SummIntNumm(nummer);
    system("pause > nul");
    return 0;
}
