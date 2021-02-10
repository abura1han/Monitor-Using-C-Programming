#include <stdio.h>

int main()
{

    char massage[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    int hr = 1, vr = 1, limit = 25, index = 0;

    //draw monitor
    for (int i = 1; i <= 400 - 25; i++)
    {

        if (hr >= 2 && hr <= 24 && vr >= 2 && vr <= 10)
        {
            if (hr >= 7 && hr <= 18 && vr == 6)
            {
                //print massage
                printf("%c ", massage[index]);
                index++;
            } 
            else if (hr >= 7 && hr <= 18 && vr == 7)
            {
                printf("- ");
            }
            
            else
            {
                //empty screen
                printf("  ");
            }
        }
        else if (hr >= 1 && hr <= 25 && vr >= 10 && vr <= 11)
        {
            //bottom moniter bar
            printf("* ");
        }
        else if ((hr >= 1 && hr <= 10) && vr >= 11 && vr <= 13 || (hr >= 14 && hr <= 25) && vr >= 11 && vr <= 13)
        {
            //blank space
            printf("  ");
        }
        else if ((hr >= 1 && hr <= 7) && vr >= 14 || (hr >= 17 && hr <= 25) && vr >= 14)
        {
            //blank space
            printf("  ");
        }
        else
        {
            //build material
            printf("* ");
        }

        hr++;

        if (i % limit == 0)
        {
            hr = 1;
            vr++;
            printf("\n");
        }
    }

    return 0;
}
