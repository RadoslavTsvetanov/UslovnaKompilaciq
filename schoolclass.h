#include <stdio.h>
#ifndef CLASS_GUARDED
#define CLASS_GUARDED
#include "person.h"
struct SchoolClass
{
    struct Person children[26];
    char paralelka;
    int num;
    struct Person teacher;
};
#endif