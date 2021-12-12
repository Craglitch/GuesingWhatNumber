#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // declare a variable guess,guesses and answer
    int guess;
    int guesses;
    int answer;
    
    // declare variable for max and min to generate random num 
    const int MAX = 100;
    const int MIN = 1;
    
    srand(time(0));
    answer = (rand() % MAX) + MIN;
    printf("\n    Teka apa nombor ini     ");
    printf("\n****************************");
    printf("\nmasukkan nombor : "); scanf("%d", &guess);
    do{
        
        printf("\n****************************");
        if (guess > answer) {
            printf("\n%d nombor terlalu tinggi !", guess);
            printf("\ncuba lagi : "); scanf("%d", &guess);
        } else if (guess < answer) {
            printf("\n%d nombor terlalu rendah !", guess);
            printf("\ncuba lagi : "); scanf("%d", &guess);
        }else {
            printf("\n");
        }
        guesses++;
    
    }while(guess != answer);
    
    printf("\nHuraiii selemat nombor anda benar");
    printf("\n------------Record---------------");
    printf("\npercubaan : %d", guesses);
    printf("\njawapan : %d", answer);
    
    return 0;
    
}
