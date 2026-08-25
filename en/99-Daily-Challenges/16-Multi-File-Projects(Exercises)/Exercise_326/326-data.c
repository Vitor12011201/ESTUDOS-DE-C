/* Objective: Observe how Include Guards prevent compilation errors due to redefinition of types/structures.
Instructions:
1. Create the file 341-data.h containing a struct Record and protect the file with DATA_H.
2. In the file 341-app.c, intentionally include it twice:
   - #include "341-data.h"
   - #include "341-data.h" // The second inclusion will be ignored by the preprocessor
3. Create main declaring a variable of type struct Record. */

#ifndef DATA_H
#define DATA_H

struct Record
{
    int id;
    char name[50];
};

#endif