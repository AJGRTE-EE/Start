#include"labraries.h"
void print_Data(double* arr, int size)
// ������� ������ ������� 
{
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << ' ';

}