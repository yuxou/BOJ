//열심히 문제를 푸시는 여러분은 a+입니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char subject[50];
	float credit;
	char grade[2];
}Student;

int main()
{
	Student student[20] = { 0 };
	float sum = 0, total = 0;

	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", student[i].subject, &student[i].credit, student[i].grade);

		if (strcmp(student[i].grade, "A+") == 0) {
			sum += student[i].credit * 4.5;
			total += student[i].credit;
		}
		else if (strcmp(student[i].grade, "A0") == 0) {
			sum += student[i].credit * 4.0;
			total += student[i].credit;
		}		
		else if (strcmp(student[i].grade, "B+") == 0) {
			sum += student[i].credit * 3.5;
			total += student[i].credit;
		}		
		else if (strcmp(student[i].grade, "B0") == 0) {
			sum += student[i].credit * 3.0;
			total += student[i].credit;
		}			
		else if (strcmp(student[i].grade, "C+") == 0) {
			sum += student[i].credit * 2.5;
			total += student[i].credit;
		}			
		else if (strcmp(student[i].grade, "C0") == 0) {
			sum += student[i].credit * 2.0;
			total += student[i].credit;
		}
		else if (strcmp(student[i].grade, "D+") == 0) {
			sum += student[i].credit * 1.5;
			total += student[i].credit;
		}	
		else if (strcmp(student[i].grade, "D0") == 0) {
			sum += student[i].credit * 1.0;
			total += student[i].credit;
		}
		else if (strcmp(student[i].grade, "F") == 0) {
			sum += student[i].credit * 0;
			total += student[i].credit;
		}
	}

	printf("%f\n", sum / total);

	return 0;
}