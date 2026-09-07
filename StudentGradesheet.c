#include <stdio.h>

int main()
{
    int math, science, english, history, geography;
    int totalmark = 100;
    int total;
    float percentage, CGPA, SGPA;

    char mathgrade, sciencegrade, englishgrade, historygrade, geographygrade;

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    if (math >= 90)
        mathgrade = 'O';
    else if (math >= 80)
        mathgrade = 'E';
    else if (math >= 70)
        mathgrade = 'A';
    else if (math >= 60)
        mathgrade = 'B';
    else if (math >= 50)
        mathgrade = 'C';
    else if (math >= 45)
        mathgrade = 'D';
    else
        mathgrade = 'F';


    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    if (science >= 90)
        sciencegrade = 'O';
    else if (science >= 80)
        sciencegrade = 'E';
    else if (science >= 70)
        sciencegrade = 'A';
    else if (science >= 60)
        sciencegrade = 'B';
    else if (science >= 50)
        sciencegrade = 'C';
    else if (science >= 45)
        sciencegrade = 'D';
    else
        sciencegrade = 'F';


    printf("Enter the marks of English: ");
    scanf("%d", &english);

    if (english >= 90)
        englishgrade = 'O';
    else if (english >= 80)
        englishgrade = 'E';
    else if (english >= 70)
        englishgrade = 'A';
    else if (english >= 60)
        englishgrade = 'B';
    else if (english >= 50)
        englishgrade = 'C';
    else if (english >= 45)
        englishgrade = 'D';
    else
        englishgrade = 'F';


    printf("Enter the marks of History: ");
    scanf("%d", &history);

    if (history >= 90)
        historygrade = 'O';
    else if (history >= 80)
        historygrade = 'E';
    else if (history >= 70)
        historygrade = 'A';
    else if (history >= 60)
        historygrade = 'B';
    else if (history >= 50)
        historygrade = 'C';
    else if (history >= 45)
        historygrade = 'D';
    else
        historygrade = 'F';


    printf("Enter the marks of Geography: ");
    scanf("%d", &geography);

    if (geography >= 90)
        geographygrade = 'O';
    else if (geography >= 80)
        geographygrade = 'E';
    else if (geography >= 70)
        geographygrade = 'A';
    else if (geography >= 60)
        geographygrade = 'B';
    else if (geography >= 50)
        geographygrade = 'C';
    else if (geography >= 45)
        geographygrade = 'D';
    else
        geographygrade = 'F';


    total = math + science + english + history + geography;
    percentage = total / 5.0;
    CGPA = percentage / 10;
    SGPA = CGPA;


    printf("\n========== STUDENT REPORT --\n");

    printf("Student Name : TAFFIKUDDIN KHAN\n\n");

    printf("Math       : %d/%d  Grade = %c\n", math, totalmark, mathgrade);
    printf("Science    : %d/%d  Grade = %c\n", science, totalmark, sciencegrade);
    printf("English    : %d/%d  Grade = %c\n", english, totalmark, englishgrade);
    printf("History    : %d/%d  Grade = %c\n", history, totalmark, historygrade);
    printf("Geography  : %d/%d  Grade = %c\n", geography, totalmark, geographygrade);

    printf("\nTotal Marks : %d/500\n", total);
    printf("Percentage  : %f\n", percentage);
    printf("CGPA        : %f\n", CGPA);
    printf("SGPA        : %f\n", SGPA);

    return 0;
}