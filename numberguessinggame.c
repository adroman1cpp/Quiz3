#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    //declare variables
    int input = 0;
    char u = 'a';
    int w;
    int max = 15;
    int error = 0;


    //ask user for input
    while(input !=3){

    printf("\nPress 1 to play a game");
    printf("\nPress 2 to change max number");
    printf("\nPress 3 to quit\n");
    scanf("%d", &input);
    srand(time(0));
    int random = (rand(%max)+1);

    //create option for 1
    if(choice==1){

        a:printf("\nEnter your guess: ");
        scanf("%c",&u);
        if(u=='u'){
            continue;
        } else {
            w = u- '0';
            if(w==random) {
                printf("You have won!"\n);
            } else if(n>random) {
                printf{"Your guess was higher."}
                goto a;
            } else {
                printf("Your guess was lower.")
                goto a;
            }
        }
    }

    //create option for 2



    //create option for 3

    }   


}