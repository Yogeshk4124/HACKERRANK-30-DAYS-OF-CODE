#include<stdio.h>
#include<math.h>
int main()
{
float total,tip_percent,tax_percent,meal_cost;
scanf("%f",&meal_cost);
scanf("%f",&tip_percent);
scanf("%f",&tax_percent);
    tip_percent=(tip_percent*meal_cost)/100;
tax_percent=(tax_percent*meal_cost)/100;
   total=roundf((meal_cost+tip_percent+tax_percent));
printf("%.0f",total);

}
