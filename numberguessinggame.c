#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    //declare variables
    int input = 0;
    char u = 'a';
    int w;
    int max = 10;


    //ask user for input
    while(input !=3){

        printf("\nPress 1 to play a game");
        printf("\nPress 2 to change max number");
        printf("\nPress 3 to quit\n");
        printf("Enter your option: ");
        scanf("%d", &input);
        srand(time(0));
        int random = (rand()%max)+1;

        //create option for 1
        if(input==1){

            printf("Enter your guess: \n");
            scanf("%c",&u);
            if(u=='u'){
                continue;
            } else {
                w = u - '0';
                if(w==random) {
                    printf("You have won!\n");
                } else if(w>random) {
                    printf("Your guess was higher.\n");
                    
                } else if (w<random){
                    printf("Your guess was lower.\n");
                    
                }
            }
            
        }
        //create option for 2
        else if(input==2) {

            b:printf("\nYou can set Maximum to 100");
            printf("\nEnter new value: ");
            scanf("%d", &max);
            if(max>0 && max<=100){
                printf("Value has been set.\n");
            } else {
                printf("Invalid value.\n");
                goto b;
            }
        }
    }   
    //create option for 3
    printf("\nGame is over.\n");

}
