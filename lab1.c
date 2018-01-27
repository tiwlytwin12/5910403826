#include <stdio.h>
int main()
{
float gpa,gpa2,gpa3;
int credits,semester;
printf("Input the previous semester GPA: ");
scanf("%f",&gpa);
printf("Input the previous credits: ");
scanf("%d",&credits);
printf("Input the credits this semester: ");
scanf("%d",&semester);
printf("Input the required GPA: ");
scanf("%f",&gpa2);
gpa3 = (gpa2*(credits+semester)-(gpa*credits))/semester;
printf("The GPA this semester should be %.2f",gpa3);
}