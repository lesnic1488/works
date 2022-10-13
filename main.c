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

    printf(" Student"Name LastName "\n");
    printf(" Vikonayte nastupni dii:\n");
    printf(" Vvedit vash vik: ");
    scanf("%u",&Age);

    printf(" Vvedit vash vstupniy bal: ");
    scanf("%f",&admissionScore);

    printf(" Vvidet ocinky za peshiy predmet: ");
    scanf("%d",&grade1);

    printf(" Vvidet ocinky za drugiy predmet: ");
    scanf("%d",&grade2);

    printf(" Vvidet ocinky za tretiy predmet: ");
    scanf("%d",&grade3);

    averageGrade = (double)(grade1 + grade2 + grade3)/3;

    system ("cls");

    printf("University:" University"\n");
    printf("Faculty:" Faculty"\n");
    printf("Group:" GroupName);
    printf("\n___________________________");
    printf("\n Student: %s %s", Name, LastName );
    printf("\n Vik: %u", Age);
    printf("\n Semestr:"  Semestr);
    printf("\n___________________________");
    printf("\n Vstupniy bal: %.2f", admissionScore);
    printf("\n Seredniy bal: %.3lf", averageGrade);
    printf("\n");






return 0;
}
