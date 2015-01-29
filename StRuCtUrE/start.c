#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
    int id;
    char name[20];
    float percentage;
}r;

struct rectangle{
    int width;
    int height;
};
struct rectangle rec;


int main() {
    r record;
    record.id=1;
    strcpy(record.name, "Raju");
    record.percentage = 86.5;

    r *rec1;
    rec1 = malloc(sizeof(struct student));
    rec1 = &record;

    printf(" Id is: %d       %d\n", record.id,rec1->id);  
    printf(" Name is: %s       %s\n", record.name,rec1->name);
    printf(" Percentage is: %f        %f\n", record.percentage,rec1->percentage);
    return 0;
}