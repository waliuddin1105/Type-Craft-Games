#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<unistd.h>

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_RESET   "\x1b[0m"
#define COLOR_MAGENTA "\033[0;35m"
#define COLOR_CYAN "\033[0;36m"
#define COLOR_ORANGE "\033[38;2;255;165;0m"

#define TEXT_BOLD "\033[1m"
#define TEXT_RESET "\033[0m"

void disp_features(char *playerName, int level, int score, int lives)
{
	system("cls");
    printf(TEXT_BOLD COLOR_YELLOW "\n\t\t\t\t\t\t\t\t\t\t\t\tPlayer Name: %s" COLOR_RESET TEXT_RESET, playerName);
    printf(TEXT_BOLD COLOR_BLUE "\n\t\t\t\t\t\t\t\t\t\t\t\tLevel: %d" COLOR_RESET TEXT_RESET, level);
	printf(TEXT_BOLD COLOR_GREEN "\n\t\t\t\t\t\t\t\t\t\t\t\tScore: %d" COLOR_RESET TEXT_RESET, score);
    printf(TEXT_BOLD COLOR_RED "\n\t\t\t\t\t\t\t\t\t\t\t\tLives: %d" COLOR_RESET TEXT_RESET, lives);
 
}

