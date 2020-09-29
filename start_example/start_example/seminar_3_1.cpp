#include"labraries.h"
#include"prototypes.h"
// решение семинар 3 задание 1
void seminar_3_1()
{
    int size = input_sise();

    double* arr = new double[size];

    input_Data(arr, size);

    system("cls");
    cout << "You entered an array\n";
    print_Data(arr, size);



    // решение семинар 3 задание 1



    delete[]arr;
    arr = nullptr;
}