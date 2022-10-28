// Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>
int main()
{
 
    int x;
    float amount,surcharge,totalBill;
    printf("Enter the Unit Charges: ");
    scanf("%d",&x);
    switch (x<=50)
    {
    case 0:
      {
        switch (x<=100)
         {
          case 0:
            {
               switch (x<=250)
               {
                  case 0:
                  amount =220+(x-250)*1.50;
                  break;
                
                  case 1:
                  amount =100+(x-150)*1.20;
                  break;
               }
            }
             break;

          case 1:
           amount =25+(x-50)*0.75;
           break;
         }
      }
       break;

    case 1:
        amount =x*0.50;
        break;
    }
   surcharge = amount * (20/100.0);
   totalBill = amount + surcharge;
   printf("The total bill is %.2f",totalBill);
}