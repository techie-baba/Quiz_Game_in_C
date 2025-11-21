#include <stdio.h>

int main()
{
    int Q1, Q2, Q3, Q4, Q5, userInput;
    int score;

    do
    {
        score = 0; // Reset score at the beginning of each attempt

        printf("Q1 How many colors are in a rainbow? \n 1) 8 2) 7 3) 6 4) 5\n:");
        scanf("%d", &Q1);
        if (Q1 == 2)
            score++;

        printf("Q2 Which planet is known as the Red Planet? \n 1) Earth 2) Jupiter 3) Mars 4) Venus\n:");
        scanf("%d", &Q2);
        if (Q2 == 3)
            score++;

        printf("Q3 Which year was Facebook launched? \n 1) 2004 2) 2008 3) 2010 4) 2011\n:");
        scanf("%d", &Q3);
        if (Q3 == 1)
            score++;

        printf("Q4 What is the largest planet in our solar system? \n 1) Earth 2) Mars 3) Jupiter 4) Saturn\n:");
        scanf("%d", &Q4);
        if (Q4 == 3)
            score++;

        printf("Q5 Which language is used to create Android apps? \n 1) Python 2) Java 3) Swift 4) C++\n:");
        scanf("%d", &Q5);
        if (Q5 == 2)
            score++;

        printf("You Scored : %d\n", score);
        printf("Do you want to take the test again - 1. Yes 2. No: ");
        scanf("%d", &userInput);

    } while (userInput == 1);

    printf("Thank You....\n");
    return 0;
}