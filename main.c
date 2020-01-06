#include "Functions.h"

int main() {
    char menu_chosen;
    Date *tempdate;
    Person *new_persons_arr, new_person;

    // Arrays of names

    const char *names[MAX] = {"Sasson_Sassoni", "Pooh", "James_Bond", "Elvis_is_Alive!", "Shilgiya", "Cleopatra", "Sissoo_VeSimmhoo"};

    // Matrix of dates of birth

    const int dates[MAX][COLS] = {
            {10,1,1988},
            {12,12,1948},
            {4,12,1970},
            {11,11,1890},
            {11,11,1948},
            {1,10,1213},
            {12,11,1948}
    };


    // The file name

    const char *f_name = "Persons.txt";


    // The Program ->


    printf("\n\t\t$ Welcome to the Program $\n\t\t--------------------------\n");

    // Menu

    printf("\nMenu:\n");
    printf("------------------\n");
    printf("1 =- add new person to the list\n");
    printf("2 =- print all persons in the list\n");
    printf("3 =- sort all persons by ages, and then print sorted\n");
    printf("4 =- save current list into file\n");
    printf("5 =- read file into the list\n");
    printf("\nE or e to exit\n");
    printf("------------------\n");


    // Creating the start of the arr %% startup

    if (!(new_persons_arr = (Person *)calloc(1, sizeof(Person)))) {
        perror("\nError $ Not enough memory!");
        exit(1);
    }


    // Switch case
    int count = 0;
    printf("\nChoose -> ");
    scanf("%c", &menu_chosen);


    while (menu_chosen != 'e') {

        switch (menu_chosen) {
            case '1':
                tempdate = (Date *) malloc(sizeof(Date));
                tempdate->day = dates[count][0];
                tempdate->month = dates[count][1];
                tempdate->year = dates[count][2];
                strcpy(new_person.full_name, names[count]);
                new_person.pDate = tempdate;
                new_person.serial_num = count + 1;

                new_persons_arr = (Person *) realloc(new_persons_arr,  sizeof(Person)*(count + 1));

                insert_new_person(&new_persons_arr, new_person, count);

                print_person(new_persons_arr[count]);


                count++;

                break;

            case '2':
                printf("\nAll persons on the list:\n");
                print_all(new_persons_arr, count);
                break;

        }
        scanf("%c", &menu_chosen);
    }






};
