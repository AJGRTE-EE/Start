#include"labraries.h"
#include"prototypes.h"
// ������� ������� 3 ������� 1
void seminar_3_1()
{
    int size = input_sise();

    double* arr = new double[size];

    input_Data(arr, size);

    system("cls");
    cout << "You entered an array\n";
    print_Data(arr, size);



    // ������� ������� 3 ������� 1



    delete[]arr;
    arr = nullptr;
}