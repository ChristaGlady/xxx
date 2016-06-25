#include <stdio.h>
#include <conio.h>
 
int main(){
int number;
clrscr();
printf("Enter a number \n");
scanf("%d", &number);
if(number%2 == 1){
printf("%d is Odd Number\n", number);
}
else {
printf("%d is Even Number\n", number);
 }
getch();
return 0;
