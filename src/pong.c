#include <stdio.h>

void view(int xBall, int yBall, int xLRac, int xRRac);

int main() {
    int xBall = 40;
    int yBall = 12;
    int xLRac = 2;
    int xRRac = 77; 
    view(xBall, yBall, xLRac, xRRac);
}

void view(int xBall, int yBall, int xLRac, int xRRac) {
    int width = 80;
    int height = 25;
    for(int string = 0; string < height; string++) {
        for(int column = 0; column < width; column++) {
          if(string == yBall)
              if(column == xBall)
                  printf("*");
          else
              printf(" ");
        }
        printf("\n");
    }
    
    
}
