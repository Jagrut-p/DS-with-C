#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void display();
void getData();
void percentage();
struct Student
{
    char name[20];
    int age;
    int maths;
    int english;
    int science;
    int percentage;
} stu;

struct Student *s=&stu;
void main()
{
    int choice;
    while (1)
    {
        printf("\n1. Get Data\n");
        printf("2. Display\n");
        printf("3. EXIT\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            getData();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        }
    }
}
void getData()
{
    // int i;
    // for (i = 0; i < 2; i++)
    // {
    printf("Enter the name: ");
    scanf("%s", &s->name);
    printf("Enter the age: ");
    scanf("%d", &s->age);
    printf("Enter the marks of Maths: ");
    scanf("%d", &s->maths);
    printf("Enter the marks of Science: ");
    scanf("%d", &s->science);
    printf("Enter the marks of English: ");
    scanf("%d", &s->english);
    // }
}
void percentage()
{
    // int i;
    // for (i = 0; i < 2; i++)
    // {
    s->percentage = (s->maths + s->english + s->science) / 3;
    // }
}
void display()
{
    printf("\n%-10s%-5d%-7d%-9d%-8d%d", s->name, s->age, s->maths, s->english, s->science, s->percentage);
}