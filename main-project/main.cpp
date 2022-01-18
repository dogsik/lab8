#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

#include "Internet_Protocol.h"
#include "file_reader.h"
#include "constants.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Laboratory work #8. GIT\n";
    cout << "Variant #5. Internet Protocol.\n";
    cout << "Author: Kozlova Anastasia\n";

 cout << "Лабораторная работа №8. GIT\n";
cout << "Вариант №5. Протокол работы в Интернете\n";
cout << "Автор: Анастасия Козлова\n\n";
Internet_Protocol* Protocol[MAX_FILE_ROWS_COUNT];
int size;
try
{
    read("data.txt", Protocol, size);
    cout << "***** Протокол работы в интернете *****\n\n";
    for (int i = 0; i < size; i++)
    {
        /********** кол-во байт **********/
        /*полученно*/
        cout << "байты........: ";
        cout << Protocol[i]-> rec.bytes << " ";
        cout << Protocol[i]->finish.min << ". ";
        cout << '\n';
       
       // вывод названия
        cout << '"' << Protocol[i]->path << '"';
        cout << '\n';
       
     /********** вывод времени **********/
        // вывод часов
        cout << "Время зашел.....: ";
        cout << setw(4) << setfill('0') << Protocol[i]->start.hourse << '-';
        // вывод минут
        cout << setw(2) << setfill('0') << Protocol[i]->start.min << '-';
        // вывод сек
        cout << setw(2) << setfill('0') << Protocol[i]->start.sec;
        cout << '\n';
              
        /********** вывод даты возврата **********/
        // вывод года
        cout << "Время вышел...: ";
        cout << setw(4) << setfill('0') << Protocol[i]->finish.hourse << '-';
        // вывод месяца
        cout << setw(2) << setfill('0') << Protocol[i]->finish.min << '-';
        // вывод числа
        cout << setw(2) << setfill('0') << Protocol[i]->finish.sec;
        cout << '\n';
        cout << '\n';
    }

    }
  
catch (const char* error)
{
    cout << error << '\n';
}
return 0;
}



   