#include <iostream>

using namespace std;

int main()
{
    float a, b, selection;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
        
    cout << "Нажмите 1: Умножение:\n"
        << "Нажмите 2: Деление:\n"
        << "Нажмите 3: Разность:\n"
        << "Нажмите 4: Сложение:\n";
    cin >> selection;

    switch (int(selection))
    {
    case 1:
        cout << a << " * " << b << " = " << a * b;
        break;
    case 2:
        cout << a << " / " << b << " = " << a / b;
        break;
    case 3:
        cout << a << " - " << b << " = " << a - b;
        break;
    case 4:
        cout << a << " + " << b << " = " << a + b;
        break;
    default:
        cout << "Пункт меню отсутстыует";
        break;
    }

}

