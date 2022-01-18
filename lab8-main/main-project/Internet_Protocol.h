
#ifndef INTERNET_PROTOCOL_H
#define INTERNET_PROTOCOL_H

#include "constants.h"

struct time
{
    int hours;
    int min;
    int sec;
};

struct person
{
    char first_name[MAX_STRING_SIZE];
    char middle_name[MAX_STRING_SIZE];
    char last_name[MAX_STRING_SIZE];
};

struct book_subscription
{
    person reader;
    time start;
    time finish;
    person author;
    char path[MAX_STRING_SIZE];
};

#endif