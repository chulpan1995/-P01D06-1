#include <stdio.h>
void screen (int Lpad, int Rpad, int xBall, int yBall, int visota, int shirina);
int main()
{
    int shirina = 80;
    int visota = 25;
    int Lpad = (visota / 2 ) - 1;
    int Rpad = (visota / 2 ) - 1;
    int xBall = shirina / 2;
    int yBall = visota / 2; 
    //int ball (xBall, yBall)
 
    while (1)
    {
        screen (Lpad, Rpad, xBall, yBall, visota, shirina); 
        char v;
        scanf("%c", &v);
        if (v == 'A' || v == 'a') {
            if (Lpad > 1) {
            Lpad--; }
        }
        else if (v == 'Z' || v == 'z') {
            if (Lpad + 2 < visota - 1) {
                Lpad++;
            }
        }
        else if (v == 'K' || v == 'k') {
            if (Rpad > 1) {
                Rpad --;
            }
        }
        else if (v == 'M' || v == 'm') {
            if (Rpad + 2 < visota - 1)
            Rpad ++; 
        }
    }
//return 0;
}
void screen (int Lpad, int Rpad, int xBall, int yBall, int visota, int shirina) {
    for (int y = 0; y <= visota; y++) {
        for (int x = 0; x <=shirina; x++) {
            if ((y == 0 || y == visota) && x != 0 && x <= shirina -1) {
                printf("*");
            }
            else if ((x == 0 || x == shirina) && y <= visota)
            {
                printf("*");
            }
            else if (y >= Lpad && y < Lpad + 3 && x == 2) {
                printf("|");
            }
            else if (y >= Rpad && y < Rpad + 3 && x == shirina - 2) {
            printf("|"); }
            else if (y == yBall && x == xBall) {
                printf("@");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
