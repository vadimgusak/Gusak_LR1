// Gusak_LR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

//Гусак В.Д. Вариант 7

const int TASK_ENTER = 1;
const int TASK_CALC_AREA = 2;
const int TASK_CALC_PERI = 3;
const int NUM_TASKS = 3;

const string TASK_NAMES[NUM_TASKS] = {
    "Ввод положительного числа А",
    "Вычисление площади равностороннего треугольника",
    "Вычисление периметра равностороннего треугольника"
};

double EnterNumber()
{
    return 0;
}

double CalcArea(double num)
{
    return 0;
}

double CalcPeri(double num)
{
    return 0;
}

int main() {

    setlocale(LC_ALL, "Russian");
    bool work = true;
    double n = 0;
    double a = 0;
    double p = 0;
    while(work)
    {
        for (int i = 0; i < NUM_TASKS; i++)
            cout << "Task " << (i + 1) << ". " << TASK_NAMES[i] << endl;

        cout << endl << "Please enter the number of the desired function or 0 if you want to close the app: ";

        int task = 0;
        cin >> task;

        switch (task)
        {
        case TASK_ENTER:
            cout << "Введите число A: ";
            n = EnterNumber();
            cout << endl;
            break;
        case TASK_CALC_AREA:
            a = CalcArea(n);
            cout << "Площадь равностороннего треугольника: " << a << endl << endl;
            break;
        case TASK_CALC_PERI:
            p = CalcArea(n);
            cout << "Периметр равностороннего треугольника: " << p << endl<< endl;
            break;
        case 0:
        default:
            work = false;
            break;
        }
    }
   
    return 0;
}