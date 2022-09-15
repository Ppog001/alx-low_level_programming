#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void print_alphabet(void)
{
        char letters;

        for (letters = 'a'; letters <= 'z'; letters++)
                putchar(letters);
        putchar ('\n');
}
#endif/* MAIN_H */
