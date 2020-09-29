#include"labraries.h"
#include"prototypes.h"
void seminar_3()
{
    
    while (true)
    {
        char raz;
        menu_sem3();
        cout << " \n Which section of seminar 3 do you want to choose? "
            << "\n\tEnter number--> ";
        cin >> raz;

        switch (raz)
        {
        case '1':
            seminar_3_1();
            break;
        case '2':
            /*seminar_3_2();*/
            break;
        case '3':
        /*    seminar_3_3();*/
            break;
        default:
            cout << "Eror";
            break;
        }
        char flag;

        cout << "\n Want to choose another section in the seminar(1),want to choose another seminar any\n ";
        cin >> flag;

        if (flag != '1')
            break;
        else
            menu_sem3();

    }

    

}