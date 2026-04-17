//LAB REPORT 03 (LOOPS)

#include <stdio.h>
int main(){
    int num, rev=0, rem;
    
    //INPUT PART 
    printf("ENTER A INTEGER NUMBER:");
    scanf("%d", &num);

    //CONDITION PART
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    //OUTPUT PART
    printf("REVERSED NUMBER=%d\n", rev);

    return 0;
}