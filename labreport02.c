//LAB REPORT 02 (C WITH CONDITION)
#include <stdio.h>
int main(){
    int yr;
    //Input part
    printf("Input a year:");
    scanf("%d",&yr);
    //Condition and Output part
    if(yr%400==0){
        printf("Leap Year\n");
    }
    else if(yr%100==0){
        printf("Not a Leap Year\n");
    }
    else if(yr%4==0){
        printf("Leap Year\n");
    }
    else{
        printf("Not a Leap Year\n");
    }
    return 0;
}