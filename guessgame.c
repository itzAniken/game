#include<stdio.h>
#include<stdlib.h>

int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100 +1;
    printf("GAME START NOW\n");

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("greater number please\n");
        }
        else{
            printf("hurray you got it!!!!!");
            printf("you guessed it in %d attempt",nguess);
        }
        nguess++;
    }while(guess!= number);

    
    
    return 0;
}