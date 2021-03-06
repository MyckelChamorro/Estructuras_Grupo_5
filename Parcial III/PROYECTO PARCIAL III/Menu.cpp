/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

    AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                KARLA CAJAS - klcajas1@espe.edu.ec

    ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.
    FECHA DE CREACION:        05-02-2022
    FECHA DE MODIFICACION:    06-02-2022*/
#include "Menu.h"
Menu::Menu(std::vector<MenuOption> options) : menu_option_(options)
{
    console_ = GetStdHandle(STD_OUTPUT_HANDLE);
}
void Menu::navigation()
{

    if (menu_option_.empty()) {
        return;
    }
    size_t i{ 1 };
    display(1);
    while (1)
    {
        int option = _getch();


        switch (option)
        {
        case KEY_UP:
        {
            if (i != 1)
            {
                i--;
                display(i);
            }
            break;
        }
        case KEY_DOWN:
        {
            if (i != menu_option_.size())
            {
                i++;
                display(i);
            }
            break;
        }
        case KEY_ENTER:
        {
            system("cls");
            menu_option_.at(i - 1).get_fuction()();
            system("pause");
            break;
        }
        case KEY_ESCAPE:
        {
            exit(0);
            break;
        }

        default:
            break;
        }
    }
}

void Menu::display(size_t option)
{
    system("cls");
    unsigned int i = 0;
    SetConsoleCursorPosition(console_, { 35,8 });
    std::cout << "\t\t  MENU CONSOLA DE VIDEOJUEGOS" << std::endl;
    while (i < menu_option_.size())
    {

        if (option == i + 1)
        {
            SetConsoleCursorPosition(console_, { 50,short(i + 10) });
            SetConsoleTextAttribute(console_, FOREGROUND_BLUE);
            std::cout << "[" << menu_option_[i].get_number_option_() << "] " << menu_option_[i].get_title_() << std::endl;
            SetConsoleTextAttribute(console_, 15);
        }
        else
        {
            SetConsoleCursorPosition(console_, { 50,short(i + 10) });
            std::cout << "[" << menu_option_[i].get_number_option_() << "] " << menu_option_[i].get_title_() << std::endl;
        }
        i++;
    }
}