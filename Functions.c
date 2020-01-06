//
// Created by noam guy on 24/09/2019.
//

#include "Functions.h"

void insert_new_person(Person **persons, Person p, int place)
{
    persons[0][place].pDate = p.pDate;
    strcpy(persons[0][place].full_name,p.full_name);
    persons[0][place].serial_num = p.serial_num;
}

void print_person(Person p)
{
    printf("%d %s\t\t%d %d %d\n",p.serial_num,p.full_name,p.pDate->day,p.pDate->month,p.pDate->year);
}

void print_all(Person *p, int num)
{
    for (int i = 0; i < num+1; i++){
        print_person(p[i]);
    }
}
