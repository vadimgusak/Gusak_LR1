// Gusak_LR1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include <string>

using namespace std;

//����� �.�. ������� 7

const int TASK_ENTER = 1;
const int TASK_CALC_AREA = 2;
const int TASK_CALC_PERI = 3;
const int NUM_TASKS = 3;

const string TASK_NAMES[NUM_TASKS] = {
    "���� �������������� ����� �",
    "���������� ������� ��������������� ������������",
    "���������� ��������� ��������������� ������������"
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
            n = EnterNumber();
            break;
        case TASK_CALC_AREA:
            a = CalcArea(n);
            break;
        case TASK_CALC_PERI:
            p = CalcArea(n);
            break;
        case 0:
        default:
            work = false;
            break;
        }
    }
   
    return 0;
}