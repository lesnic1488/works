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

    printf(" C������"Name LastName "\n");
    printf(" ��������� ������� 䳿:\n");
    printf(" ������ ��� ��: ");
    scanf("%u",&Age);

    printf(" ������ ��� �������� ���: ");
    scanf("%f",&admissionScore);

    printf(" ������ ������ �� ������ �������: ");
    scanf("%d",&grade1);

    printf(" ������ ������ �� ������ �������: ");
    scanf("%d",&grade2);

    printf(" ������ ������ �� ����� �������: ");
    scanf("%d",&grade3);

    averageGrade = (double)(grade1 + grade2 + grade3)/3;

    system ("cls");

    printf("��������:" University"\n");
    printf("���������:" Faculty"\n");
    printf("�����:" GroupName);
    printf("\n___________________________");
    printf("\n C������: %s %s", Name, LastName );
    printf("\n ³�: %u", Age);
    printf("\n �������:"  Semestr);
    printf("\n___________________________");
    printf("\n �������� ���: %.2f", admissionScore);
    printf("\n ������� ���: %.3lf", averageGrade);
    printf("\n");






return 0;
}
