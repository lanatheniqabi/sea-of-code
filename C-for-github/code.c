#include<stdio.h>
#include<string.h>
int main() {
char name[50]; 
int age;  
char grade;
float gap; 
printf("what's your name?: ");
scanf("%s", name);
printf("what's your age?: ");
scanf("%d", &age);
printf("What's your grade?: ");
// Some times the char's format code acts up like right now. 
// It skipped a line so we gave it a single space and told it to skip those and focus on the letters and integers.
scanf(" %c", &grade);
printf("what's your GPA?: ");
scanf("%f", &gap);
printf("NAME: %s \n", name);
printf("AGE: %d \n", age);
printf("GRADE: %c\n", grade);
printf("GPA: %.1f \n", gap);
float product = gap / 4.0 * 100;
printf("GPA in Percentage: %.1f\n", product);
return 0;
}
// This is my first actual c-code if we don't count hello world or maybe no, I did a little if else in the CS50, course.