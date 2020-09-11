#include <stdio.h>
#include <stdlib.h>

#define GRADES_COUNT 5

struct Student
{
    char lastName[20] ;
    char firstName[20] ;
    int grades[GRADES_COUNT] ;
};

void displayStudent (struct Student);

int main()
{
    int i;
    struct Student s1 = {
        "HADDOCK",
        "Archibald",
        {8, 10, 12, 10, 16}
    }, s2;
    
    displayStudent(s1);

    s2 = s1;
    s2.grades[4] = 15;

    displayStudent(s1);
    displayStudent(s2);
    
    return 0;
}

/**
 * Display the last name, first name, grades list and grades average for a student
 * @param student Student (structure) to display
 * @return Nothing
 */
void displayStudent (struct Student student) {
    int i;
    float gradesSum = 0;
    
    printf("\nNom : %s\nPrénom : %s\nNotes :", student.lastName, student.firstName);
    
    for (i = 0; i < GRADES_COUNT ; i++) {
        gradesSum += student.grades[i];
        printf(" %d", student.grades[i]);
    }
    printf(", Moyenne : %.1f\n", gradesSum / 5);
}