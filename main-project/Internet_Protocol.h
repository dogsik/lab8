
#ifndef INTERNET_PROTOCOL_H
#define INTERNET_PROTOCOL_H

#include "constants.h"

struct date 
{
    int hourse;
    int min;
    int sec;
};

struct bytes
{
    int bytes;
    
    
};

struct Internet_Protocol
{
   date start;
   date finish;
   bytes rec;
   bytes send;
   char path[MAX_STRING_SIZE];
};

#endif