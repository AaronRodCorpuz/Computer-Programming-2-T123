#include <stdio.h>
int main()
{

    int Grade;
   
   	printf ("Enter Grade: ");
		scanf ("%d", &Grade);
		
		while (Grade <= 0)
			{
			    printf("Invalid input. Try Again.");
				printf ("\n\nEnter Grade: ");
			    scanf("%d", &Grade);
			}
		
		while (Grade > 100)
			{
			    printf("Invalid input. Try Again.");
				printf ("\n\nEnter Grade: ");
			    scanf("%d", &Grade);
      } 

	    if(Grade >= 92 || Grade == 100)
         {
             printf("Your letter grade is A!");
         }
         else if (Grade >= 84 || Grade == 91)
         {
             printf("Your letter grade is A-!");
         }
         else if (Grade >= 76 || Grade == 83)
         {
             printf("Your letter grade is B!");
         }
         else if (Grade >= 68 || Grade == 75)
         {
             printf("Your letter grade is B-!");
         }
         else if (Grade >= 60 || Grade == 67)
         {
             printf(" Your letter grade is C!");
         }
         else if (Grade >= 50 || Grade == 59)
         {
             printf ("Your letter grade is D!");
         }
         else if (Grade < 50)
         {
             printf("Your letter grade is F.");
         }
        
  return 0;
}
