 #include <stdio.h>

int main() {
int amtgiven,billamt,a,b;
printf("enter the amount given");
scanf("%d",&amtgiven);
printf("enter the bill amount");
scanf("%d",&billamt);
a=amtgiven/billamt;
b=amtgiven%billamt;
printf("quotient:%d
printf("remainder:%d",b);
    return 0;
}