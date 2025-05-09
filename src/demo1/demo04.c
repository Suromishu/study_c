//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>
#include "../../include/de1_de03.h"

extern int te_num;

int main()
{
    int i;
    scanf("%d",&i);
    m_output(i);

    m_output(te_num); //the project include de1_de03.c
    return 0;
}