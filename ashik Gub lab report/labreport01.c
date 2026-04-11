//Lab Report 1 (Basics c)
#include<stdio.h>
int main(){
    //Input part of this program
    int tdays, ys, ms, ds;
    pritf ("Input the number of days:");
    scanf ("%d", &tdays);


    //Calculation part of this program
    //YEARS
    ys= tdays/365;
    //MONTHS
    ms= (tdays%365)/30;
    //DAYS
    ds= (tdays%365)%30;

    //Output Part of this program
    printf("Years: %d\n",ys);
    printf("Months: %d\n",ys);
    printf("Days: %d\n",ys);

    return 0;
}