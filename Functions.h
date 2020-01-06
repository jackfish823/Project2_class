//
// Created by noam guy on 24/09/2019.
//

#ifndef PROJECT2_FUNCTIONS_H
#define PROJECT2_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 7
#define COLS 3
#define LEN 20

typedef struct{
    int day;
    int month;
    int year;
}Date;

typedef struct {
    int serial_num;
    char full_name[LEN];
    Date *pDate;
}Person;

void insert_new_person(Person **persons, Person p, int place);
void print_person(Person p);
void print_all(Person *p, int num);

#endif //PROJECT2_FUNCTIONS_H
