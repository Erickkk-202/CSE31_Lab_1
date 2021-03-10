

#include <stdio.h>


int main(){
int pos = 0;//The declaring the total of the postive numbers
int pos_i = 0;// The declaring how many postive numbers were inputed
int neg = 0;//The declaring the total of the negative numbers
int neg_i = 0;// The declaring how many negative numbers were inputed


printf(" Please enter an integer ");

int integer;
scanf("%d", &integer);//takes user input on a integer

while (integer != 0 ){// while loop to continue asking the user for an integer till user inserts "0"
    if ( integer > 0){
    pos_i += +1; //couts how many postive integers are being taken into consideration
    pos += integer;// totals up all the postive numbers
    
    

    }

    if(integer <0){
        neg_i += +1; //couts how many negative integers are being taken into consideration
        neg += integer;// totals up all the postive numbers
    }
    printf(" Please enter an integer ");
    scanf("%d", &integer);

    
}

if (pos >= 1){//if the total is greater than or equal to 1 take the average
    printf("This is the average of all the postive numbers: ");
     int avg_pos = (pos/pos_i); // average = total / # of integers
    printf("%d\n",avg_pos); // print average
}

if (neg < 0){
    printf("This is the average of all the negative numbers: ");
     int avg_neg = (neg/neg_i);// average = total / # of integers
     printf("%d\n", avg_neg);// print average
}







return 0;
}
