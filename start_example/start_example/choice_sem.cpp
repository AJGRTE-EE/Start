#include"labraries.h"
#include"prototypes.h"
void choice_sem()
{
    menu_sem();
    while (true)
    {
        char sem;

        while (true)
        {
            cout << "\n\tEnter seminar number-->";
            cin >> sem;
            if (sem < '3' || sem>'5')/////////
                cout << "\n\tEror!!";
            else
                break;
        }
        switch (sem)
        {
        case '3':
            seminar_3();
            break;

        case '4':
            /*seminar_4();*/
            break;
        case '5':
           /* seminar_5();*/
            break;

        }
        char flag;
        cout << "\nChoose another seminar (1),to complete any\n\t Enter -->  ";
        cin >> flag;
        if (flag != '1')
            break;
        else
            menu_sem();
    }
}