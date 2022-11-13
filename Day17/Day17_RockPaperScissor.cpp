// Topic: Rock Paper Scissor Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0

int rock_paper_scissor (int p1, int p2)
{
    int result;

    if (p1 == ROCK && p2 == PAPER)
        result = PLAYER2_WIN;

    else if (p1 == PAPER && p2 == ROCK)
        result = PLAYER1_WIN;

    else if (p1 == PAPER && p2 == SCISSOR)
        result = PLAYER2_WIN;

    else if (p1 == SCISSOR && p2 == PAPER)
        result = PLAYER1_WIN;

    else if (p1 == SCISSOR && p2 == ROCK)
        result = PLAYER2_WIN;

    else if (p1 == ROCK && p2 == SCISSOR)
        result = PLAYER1_WIN;

    else
        result = DRAW;

    return result;
}

int get_user_input()
{
    int choice;
    do
    {
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Please input [1,2,3]: ");
        scanf("%d",&choice);
        if ( !(choice >= 1 && choice <= 3) )
        {
            printf("Invalid Input, Enter 1 or 2 or 3,\n\n");
        }
    }
    while ( !(choice >= 1 && choice <= 3) );

    return choice;
}

void print_word(int v)
{
    if (v == ROCK)
        printf("Rock\n");
    else if (v == PAPER)
        printf("Paper\n");
    else if (v == SCISSOR)
        printf("Scissor\n");
}

int main()
{
    int user_score = 0;
    int computer_score = 0;
    srand(time(NULL));

    int quit = 0;

    while(!quit)
    {
        int user_input = get_user_input();
        int computer_choice = (rand() % 3) + 1;

        printf("\nUser chose: \n");
        print_word(user_input);
        printf("Computer chose: \n");
        print_word(computer_choice);

        int winner = rock_paper_scissor(user_input, computer_choice);

        if (winner == DRAW)
        {
            printf("\nIt is a draw.\n");
        }

        else if (winner == PLAYER1_WIN)
        {
            printf("\nUser wins the round. :)\n");
            user_score++;
        }

        else if (winner == PLAYER2_WIN)
        {
            printf("\nComputer wins the round. :(\n");
            computer_score++;
        }

        printf("\nUser's Score: %d\n",user_score);
        printf("Computer's Score: %d\n",computer_score);

        printf("\nIf you want to continue then enter any integer and if you want to terminate enter 0:\n\n");
        int response;
        scanf("%d",&response);
        if (response == 0)
        {
            quit = 1;
        }
    }

    printf("\n-------------------------------------\n");
    printf("FINAL SCORE: \n");
    printf("\nUser's Score: %d\n",user_score);
    printf("Computer's Score: %d\n",computer_score);

    if (user_score > computer_score)
        printf("\nUSER IS THE WINNER! :D\n");

    else if (user_score < computer_score)
        printf("\nCOMPUTER IS THE WINNER! :O");

    else
        printf("\nTHE GAME WAS A DRAW!");

    return 0;
}
