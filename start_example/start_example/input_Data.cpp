#include"labraries.h"
void input_Data(double* arr, int size)
// ������� �� ���������� ������� ���������� 
{
    cout << " Enter array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "element[" << i << "]--> ";
        cin >> arr[i];
    }
}