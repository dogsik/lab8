

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

 cout << "Ëàáîðàòîðíàÿ ðàáîòà ¹8. GIT\n";
cout << "Âàðèàíò ¹5. Ïðîòîêîë ðàáîòû â Èíòåðíåòå\n";
cout << "Àâòîð: Àíàñòàñèÿ Êîçëîâà\n\n";
Internet_Protocol* Protocol[MAX_FILE_ROWS_COUNT];
int size;
try
{
    read("data.txt", Protocol, size);
    cout << "***** Ïðîòîêîë ðàáîòû â èíòåðíåòå *****\n\n";
    for (int i = 0; i < size; i++)
    {
        /********** êîë-âî áàéò **********/
        /*ïîëó÷åííî*/
        cout << "áàéòû........: ";
        cout << Protocol[i]-> rec.bytes << " ";
        cout << Protocol[i]->finish.min << ". ";
        cout << '\n';
       
       // âûâîä íàçâàíèÿ
        cout << '"' << Protocol[i]->path << '"';
        cout << '\n';
       
     /********** âûâîä âðåìåíè **********/
        // âûâîä ÷àñîâ
        cout << "Âðåìÿ çàøåë.....: ";
        cout << setw(4) << setfill('0') << Protocol[i]->start.hourse << '-';
        // âûâîä ìèíóò
        cout << setw(2) << setfill('0') << Protocol[i]->start.min << '-';
        // âûâîä ñåê
        cout << setw(2) << setfill('0') << Protocol[i]->start.sec;
        cout << '\n';
              
        /********** âûâîä äàòû âîçâðàòà **********/
        // âûâîä ãîäà
        cout << "Âðåìÿ âûøåë...: ";
        cout << setw(4) << setfill('0') << Protocol[i]->finish.hourse << '-';
        // âûâîä ìåñÿöà
        cout << setw(2) << setfill('0') << Protocol[i]->finish.min << '-';
        // âûâîä ÷èñëà
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



   

#include <iostream>

using namespace std;

int main()
{
    cout << "Laboratory work #8. GIT\n";

    cout << "Variant #5. Internet Protocol.\n";
    cout << "Author: Kozlova Anastasia\n";
    cout << "Group: 14\n";
    return 0;
}




#include <iostream>

using namespace std;

int main()
{
    cout << "Laboratory work #8. GIT\n";
    cout << "Variant #5. Internet Protocol.\n";
    cout << "Author: Kozlova Anastasia\n";
    cout << "Group: 14\n";
    return 0;
}



    cout << "Variant #5. Internet Protocol\n";
    cout << "Author: Kozlova Anastasia\n";
    return 0;
}
