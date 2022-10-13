#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

#define Name " Taras"
#define LastName " Marenyuk"
#define GroupName " RS-21"
#define Faculty " RTF"
#define University " KPI"
#define Semestr " 1"


int main()
{

unsigned int Age;
float admissionScore;
int grade1;
int grade2;
int grade3;
double averageGrade;



    printf(" Name:"Name"\n");
    printf(" LastName:"LastName"\n");
    printf(" University:"University"\n");
    printf(" Faculty:"Faculty"\n");


SetConsoleCP(1251);
SetConsoleOutputCP(1251);

    printf(" Cтудент"Name LastName "\n");
    printf(" Виконайте наступні дії:\n");
    printf(" Введіть ваш вік: ");
    scanf("%u",&Age);

    printf(" Введіть ваш вступний бал: ");
    scanf("%f",&admissionScore);

    printf(" Введіть оцінку за перший предмет: ");
    scanf("%d",&grade1);

    printf(" Введіть оцінку за другий предмет: ");
    scanf("%d",&grade2);

    printf(" Введіть оцінку за третій предмет: ");
    scanf("%d",&grade3);

    averageGrade = (double)(grade1 + grade2 + grade3)/3;

    system ("cls");

    printf("Інститут:" University"\n");
    printf("Факультет:" Faculty"\n");
    printf("Група:" GroupName);
    printf("\n___________________________");
    printf("\n Cтудент: %s %s", Name, LastName );
    printf("\n Вік: %u", Age);
    printf("\n Семестр:"  Semestr);
    printf("\n___________________________");
    printf("\n Вступний бал: %.2f", admissionScore);
    printf("\n Середній бал: %.3lf", averageGrade);
    printf("\n");






return 0;
}
