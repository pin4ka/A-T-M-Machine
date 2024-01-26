#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>
// int main()
// {

//     return 0;
// }

void ProCess()
{
    // printf("0%%\n ");
    // Sleep(1000);
    // printf("25%%\n");
    // Sleep(1000);
    // printf("55%%\n");
    // Sleep(1000);
    // printf("85%%\n");
    // Sleep(100);
    // printf("100%%\n");
    for (int i = 0; i < 100; i++)
    {
        printf("#");
        Sleep(50);
    }
    printf("\t");
}
void WaiT()
{
    Sleep(3000);
}

int rupee()
{
    srand(time(0));
    return rand();
}