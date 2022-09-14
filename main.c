//
//  main.c
//  firstprogram
//
//  Created by Noelle D'Arcy on 12/24/19.
//  Copyright © 2019 Noelle D'Arcy. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct {
    char className[30];
    char gradeLetter;
    double gradePercentage;
} grade;

void Greeting(char name[]);
grade FillGrade(void);
void DisplayGrade(grade anyGrade);
int Decision(void);


int main(int argc, const char * argv[]) {
    char name[20];
    Greeting(name);
    int choice = Decision();
    if (choice != 0) {
    Decision();
    }
    return choice;
}

void Greeting(char name[])
{
    printf("Please enter your name: \n\n");
    scanf(" %s", name);
    
    printf("Welcome %s to the Grade Saver.\n", name);
    printf("This program will save your grades from previous classes.\n");
    
}

grade FillGrade()
{
    grade temp;
    printf("\n_______________________________________________________\n\n");
    printf("Enter the name of the class: \n");
    scanf(" %s", temp.className);
    printf("Enter the letter grade you received: \n");
    scanf(" %s", &temp.gradeLetter);
    printf("Enter the percentage you received: \n");
    scanf("%lf", &temp.gradePercentage);
    return temp;
}


void DisplayGrade(grade anyGrade)
{
    printf("\n_______________________________________________________\n\n");
    printf("Class Name: %s\n\n", anyGrade.className);
    printf("Grade Letter: %s\n\n", &anyGrade.gradeLetter);
    printf("Grade Percentage: %f\n\n", anyGrade.gradePercentage);

}

int Decision()
{
    int choice;
    int count = 0;
    grade Grade;
    
    printf("\nEnter a 1 if you would like to look at previous grades, a 2 if you would like to add grades, or 0 to exit.\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        DisplayGrade(Grade);
    }
    
    if (choice == 2) {
        Grade = FillGrade();
        count = count + 1;
    }
    
    else {
        printf("Please enter 1, 2, or 0.");
    }
    
    return choice;
}
