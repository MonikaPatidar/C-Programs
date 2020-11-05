#include<stdio.h>
#include<conio.h>
#include<string.h>

struct persondetail{
    int id;
    char name[20];
    char add[20];
};

void main(){
    struct persondetail person;
    struct persondetail person2;

    person.id=01;
    strcpy(person.name, "Monika");
    strcpy(person.add, "indore");

    person2.id=02;
    strcpy(person2.name, "Monika2");
    strcpy(person2.add, "indore2");

    printperson(person);
    printperson(person2);
}

void printperson(struct persondetail person)
{
    printf("%d\n", person.id);
    printf("%s\n", person.add);
    printf("%s\n",person.name);
}
