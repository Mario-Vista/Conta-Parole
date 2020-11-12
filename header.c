//
// Created by mario on 12/11/2020.
//

#include "header.h"
void conta_tutto(char *testo, int *conta_c, int *conta_p, int *conta_l)
{
    int i, flag = 0;

    *conta_c = 0;
    *conta_p = 0;
    *conta_l = 0;

    while (testo[i] != '\0')
    {
        (*conta_c)++;

        if (testo[i] == '\n')
            (*conta_l)++;

        if (testo[i] == ' ' || testo[i] == '\n')
            flag = 0;

        else
            if (flag==0)
            {
                flag =1;
                        (*conta_p)++;
            }
        i++;
    }







}