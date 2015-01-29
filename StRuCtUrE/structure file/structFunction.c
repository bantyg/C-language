#include <stdio.h>
#include <stdlib.h>

struct student{
	void *name;
    int id;
    int percentage;
};

struct student *createStudent(int id,int percentage){

    struct student *pooja = malloc(sizeof(struct student));
    // pooja->name = (char *)name;
    pooja->id = id;
    pooja->percentage = percentage;
    printf("%p------------\n",pooja );
    return pooja; 
}
void student_print(struct student *who)
{
    // printf("Name: %s\n", who->name);
    printf("id: %d\n", who->id);
    printf("percentage: %d\n", who->percentage);
}

int main(int argc, char const *argv[]){
	struct student *banty = createStudent(16448,80);
	printf("bantyg is at memory location %p:\n", banty);
	student_print(banty);
    return 0;
}





