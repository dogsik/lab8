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

 cout << "������������ ������ �8. GIT\n";
cout << "������� �5. �������� ������ � ���������\n";
cout << "�����: ��������� �������\n\n";
Internet_Protocol* Protocol[MAX_FILE_ROWS_COUNT];
int size;
try
{
    read("data.txt", Protocol, size);
    cout << "***** �������� ������ � ��������� *****\n\n";
    for (int i = 0; i < size; i++)
    {
        /********** ���-�� ���� **********/
        /*���������*/
        cout << "�����........: ";
        cout << Protocol[i]-> rec.bytes << " ";
        cout << Protocol[i]->finish.min << ". ";
        cout << '\n';
       
       // ����� ��������
        cout << '"' << Protocol[i]->path << '"';
        cout << '\n';
       
     /********** ����� ������� **********/
        // ����� �����
        cout << "����� �����.....: ";
        cout << setw(4) << setfill('0') << Protocol[i]->start.hourse << '-';
        // ����� �����
        cout << setw(2) << setfill('0') << Protocol[i]->start.min << '-';
        // ����� ���
        cout << setw(2) << setfill('0') << Protocol[i]->start.sec;
        cout << '\n';
              
        /********** ����� ���� �������� **********/
        // ����� ����
        cout << "����� �����...: ";
        cout << setw(4) << setfill('0') << Protocol[i]->finish.hourse << '-';
        // ����� ������
        cout << setw(2) << setfill('0') << Protocol[i]->finish.min << '-';
        // ����� �����
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



   