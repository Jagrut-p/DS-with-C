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
} s[2];
int main()
{
    int choice;
    while (1)
    {
        printf("1. Get Data\n");
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
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the name: ");
        scanf("%s", &s[i].name);
        printf("Enter the age: ");
        scanf("%d", &s[i].age);
        printf("Enter the marks of Maths: ");
        scanf("%d", &s[i].maths);
        printf("Enter the marks of Science: ");
        scanf("%d", &s[i].science);
        printf("Enter the marks of English: ");
        scanf("%d", &s[i].english);
    }
}
void percentage()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        s[i].percentage = (s[i].maths + s[i].english + s[i].science) / 3;
    }
}
void display()
{
    int i;
    printf("\nName      Age  Maths  Science   English Percentage");
    for (i = 0; i < 2; i++)
    {
        printf("\n%-10s%-5d%-7d%-9d%-8d%d", s[i].name, s[i].age, s[i].maths, s[i].english, s[i].science, s[i].percentage);
    }
}