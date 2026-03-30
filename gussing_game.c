#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess;
    int no_of_attempts=0;
    srand(time(NULL));

    printf("Welcome to the guessing game!\n");
    random=rand() % 100+1;
    do{
        printf("Enter a number between 1 to 100: ");
        scanf("%d",&guess);
        no_of_attempts++;

        if(guess<random){
            printf("Guess larger number\n");
        }else if(guess>random){
            printf("Guess smaller number.\n");
        }else{
            printf("Congratulations! You guessed the number\n %d in  %d attempts.\n",random,no_of_attempts  );
        }

    }while(guess!=random);
    printf("Thank you for playing the guessing game!\n");
    printf("\n Developed by Maan Singh.");

}
