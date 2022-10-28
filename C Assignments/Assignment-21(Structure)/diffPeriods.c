// Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct Time
{
   int hours;
   int minutes;
   int seconds;
};

int main()
{
   struct Time startingTime,EndingTime,result;
   printf("Enter Hours ,Min & seconds for Starting-Time:");
   scanf("%d",&startingTime.hours);
   scanf("%d",&startingTime.minutes);
   scanf("%d",&startingTime.seconds);
   printf("Enter Hours ,Min & seconds for Ending-Time:");
   scanf("%d",&EndingTime.hours);
   scanf("%d",&EndingTime.minutes);
   scanf("%d",&EndingTime.seconds);

   if(startingTime.seconds>=EndingTime.seconds)
     result.seconds=startingTime.seconds-EndingTime.seconds;
   else
   {
    startingTime.minutes--;
    startingTime.seconds+=60;
    result.seconds=startingTime.seconds-EndingTime.seconds;
   }

   if(startingTime.minutes>=EndingTime.minutes)
     result.minutes=startingTime.minutes-EndingTime.minutes;
   else
   {
    startingTime.hours--;
    startingTime.minutes+=60;
    result.minutes=startingTime.minutes-EndingTime.minutes;
   }
   
   result.hours=startingTime.hours-EndingTime.hours;

   printf("The Diff bw two periods is %d:%d:%d",result.hours,result.minutes,result.seconds);
   return 0;
}