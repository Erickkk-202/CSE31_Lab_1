#include <stdio.h>
int main(){
int rep; // the amount of times I want it to repeat
int typo; // the line I want it make an error
int i = 1;



printf("enter the number of repetitions for the punishment phrase: "); 
scanf("%d", &rep); // Take user input on how many times I want it to repeat



if(rep>0){// checks if the amount of repetition is correct

    printf("“Enter the repetition count when you wish to introduce a typo: "); 
    scanf("%d", &typo);// Takes in user input on what line the user want the error

    if (typo> 0 && typo <rep ){ //Checks if the line that has the typo is from line one to the last life.

        while( i < rep){ // The code excutes as many times as the user wanted it to repeat

            if(i == typo){ // when the i is equal to the line that has the error it prints the error
                printf("C programmming lnguage is the bet! ");
            }else{ // if I does not equal the error line keep printing the correct statement
              printf("C programming language is the best! ");  
            }

            i++;

        }
        
    }else{
                printf("You entered an invalid value for the typo placement! \n");

            }

 

}else{
    printf("You entered an invalid value for the number of repetitions! \n ");
}



return 0;
}
