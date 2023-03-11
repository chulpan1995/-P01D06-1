#include <stdio.h>

void view(int xBall, int yBall, int xLRac, int xRRac, int fScore, int sScore);

int main() {
    // Стартовые позиции мяча
    int xBall = 40;
    int yBall = 12;
    // Стартовые позиции ракеток
    int xLRac = 2;
    int xRRac = 77; 
    // Стартовый счет
    int fScore = 0;
    int sScore = 0;

    view(xBall, yBall, xLRac, xRRac, fScore, sScore);

}

// Функция "Вид"
void view(int xBall, int yBall, int xLRac, int xRRac, int fScore, int sScore) {
    int width = 80;
    int height = 25;
    for(int string = 0; string < height; string++) {
        for(int column = 0; column < width; column++) {
            // Для первой и последней строки печатаем линию
            if((string == 0) || (string == height - 1))
                printf("-");

            // Печатаем заполнение поля, ракетки и мяч
            if((string == yBall) || (string == yBall + 1) || (string == yBall - 1))
                if((column == xBall) && (string == yBall))
                    printf("*");
                else if(column == xLRac)
                    printf("|");  
                else if(column == xRRac)
                    printf("|");      
            else
                printf(" ");      
        }
        printf("\n");
    } 
    printf("Score %d : %d\n", fScore, sScore);
}