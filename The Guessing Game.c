#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess, number, nguesses=1;
    srand(time(0));
    number = rand()%100+1;
    
    do{
        printf ("Guess a number between 1 and 100:\n");
        scanf("%d", &guess);  
        
        if(guess>number)
        printf("Lower number please.\n");
        
        else if(guess<number)
        printf("Larger number please.\n");
        
        else
        {
            printf ("You have selected right number in %d attempt.", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    
    return 0;
}
