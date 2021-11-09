#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int random()
{
    int randnum;
    srand(time(0));            //uses current time to produce random time
    randnum = rand() % 10 + 1; // returns number from 1 to 10 1%10 returns from 1 to 9 adding 1
    // printf("%d \n", randnum);
}

void loading()
{
    for (int i = 0; i <= 10; i++)
    {
        Sleep(200);
        printf(".");
    }
}
void truth(int x)
{
    loading();
    int y = x;
    switch (y)
    {
    case 1:
        printf("\n TELL YOUR CRUSH'S NAME ");
        break;
    case 2:
        printf("\n Who are you most jealous of?");
        break;
    case 3:
        printf("\n WHATS YOUR DARKEST SECRET \n");
        break;
    case 4:
        printf("\n WHAT DO YOU THINK ABOUT ME \n");
        break;
    case 5:
        printf("\n HAVE YOU EVER ATE THE FOOD THAT FELL ON THE FLOOR\n");
        break;
    case 6:
        printf("\n Have you ever faked sick to get out of a party?\n");
        break;
    case 7:
        printf("\n How many selfies do you take a day?\n");
        break;
    case 8:
        printf("\n Where are you ticklish?\n");
        break;
    case 9:
        printf("\n When is  the last time you apologized? What for?\n");
        break;
    case 10:
        printf("\n What’s your most bizarre nickname?\n");
        break;
    }
    Sleep(20000);
    main();
}

void dare(int y)
{
    loading();
    int x = y;
    switch (x)
    {
    case 1:
        printf("\nCall your crush.");
        break;
    case 2:
        printf("\nGive your phone to another player who can send one text saying anything they want to one of your contacts.");
        break;
    case 3:
        printf("\nLick a bar of soap.n");
        break;
    case 4:
        printf("\nDo 5 minutes of stand-up comedy.\n");
        break;
    case 5:
        printf("\nTalk in a Jamaican accent until your next turn \n");
        break;
    case 6:
        printf("\n Eat a teaspoon of mustard.\n");
        break;
    case 7:
        printf("\nShower with your clothes on.\n");
        break;
    case 8:
        printf("\nEnd each sentence with the word “not” until your next turn.\n");
        break;
    case 9:
        printf("\nName a famous person that looks like each player.\n");
        break;
    case 10:
        printf("\nPour ice down your pants\n");
        break;
    }
    Sleep(20000);
    main();
}

int main()
{
    system("cls");
    printf(" HI \n Please Enter your name : ");
    char name[10];

    scanf("%s", &name);

    printf("*********************Hi %s  Welcome *********************\n\n\n", name);
repeat:
    printf("Let's play truth or dare !!!!! \n \t\tEnter the choice 1. Truth  or 2.dare: ");
    int choice;

    scanf("%d", &choice);
    if (choice == 1 || choice == 2)
    {
        switch (choice)
        {
        case 1:
            truth(random());
            break;
        case 2:
            dare(random());
            break;
        }
    }
    else
    {
        printf("\n The choice You have entered is incorrect please try again \n");
        goto repeat;
    }

    //random();
}