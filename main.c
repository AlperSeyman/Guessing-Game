#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess_count = 0;
    int guess_limit = 3;
    int outOf_guess =0 ;
    int guess;

    while(guess != secretNumber && outOf_guess == 0){
        if(gues_count < guess_limit){
            printf("Enter a number: ");
            scanf("%d",&guess);
            guess_count++;
        }
        else{
            outOf_guess = 1;
        }
    }
    if(outOf_guess == 1){
        printf("Out of guess");
    }
    else{
        printf("You Winn");
    }

    return 0;
}
