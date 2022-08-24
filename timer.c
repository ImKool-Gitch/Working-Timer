#include <stdio.h>
#include <windows.h>

int algorithm(int s, int m)
{
    return (s + (m * 60));
}

int main()
{
    int minute, second;
    printf("Enter a time(MINUTES:SECONDS): ");
    scanf("%d %d", &minute, &second);
    sleep(algorithm(second, minute));
    printf("TIMES UP !\n");
    for (int i = 1; i < 10; i++)
    {
        Beep(1000, 70);
        Beep(1000, 70);
        Beep(1000, 70);
        Beep(1000, 70);
        sleep(1);
    }
    return 0;
}
