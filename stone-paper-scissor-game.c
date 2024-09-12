#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(int comp, int you){
    if(comp==you){
        return 0;
    }
    else if(comp==1 && you==2){
        return 1;
    }
    else if(comp==1 && you==3){
        return -1;
    }
    else if(comp==2 && you==1){
        return -1;
    }
    else if(comp==2 && you==3){
        return 1;
    }
    else if(comp==3 && you==1){
        return 1;
    }
    else if(comp==3 && you==2){
        return -1;
    }
}

int main(){
    int computer, you,result;
    srand(time(0));
    computer = rand()%3+1;
    printf("Press 1 for rock\n 2 for paper\n 3 for scissor\n");
    scanf("%d",&you);
    result = game(computer,you);
    printf("you choose %d and computer choose %d\n",you,computer);

    if(result==1){
        printf("yipee you won\n");
    }
    else if(result==-1){
        printf("oops you loose\n");
    }
    else if(result==0){
        printf("it's a tie");
    }
    return 0;
}