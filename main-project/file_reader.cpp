#include "file_reader.h"
#include "constants.h"

#include <fstream>
#include <cstring>

date convert(char* str)
{
    date result;
    char* context = NULL;
    char* str_number = strtok_s(str, ":", &context);
    result.hourse = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.min = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.sec = atoi(str_number);
    return result;
}

void read(const char* file_name, Internet_Protocol* array[], int& size)
{
    std::ifstream file(file_name);
    if (file.is_open())
    {
        size = 0;
        char tmp_buffer[MAX_STRING_SIZE];
        while (!file.eof())
        {
            Internet_Protocol* item = new Internet_Protocol;
            
            file >> item->rec.bytes;
            file >> item->send.bytes;
            file >> tmp_buffer;
            file >> item->start.hourse;
            file >> item->start.min;
            file >> item->start.sec;
            file >> tmp_buffer;
            item->start = convert(tmp_buffer);
            file >> tmp_buffer;
            item->finish = convert(tmp_buffer);
            file >> item->finish.hourse;
            file >> item->finish.min;
            file >> item->finish.sec;
            file.read(tmp_buffer, 1); // чтения лишнего символа пробела
            file.getline(item->path, MAX_STRING_SIZE);
            array[size++] = item;
        }
        file.close();
    }
    else
    {
        throw "Ошибка открытия файла";
    }
}