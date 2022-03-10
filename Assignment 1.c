#include <stdio.h>
#include <stdlib.h>

/* Name: Jeremiah Rallos
   ID: 34454127
   Purpose: Modular Change Calculator */

int main()
{
 system("color 3");

      int num = 0, remainingValue = 0;
      char exitresult;

  while(exitresult != 'n')
  {
     num = getInput();

            remainingValue = change(50, num);
            remainingValue = change(20,remainingValue);
            remainingValue = change(10,remainingValue);
            remainingValue = change(5,remainingValue);

      exitresult =  exitStage();
  }

return 0;
}


int getInput () //Input Function.
{
    int input;

        printf("\n[ Please enter a number. ]\n");
        printf("[ It must be a multiple of 5. ]\n");
        printf("[ It should be a value you wish to change. ]\n");

     if (scanf("%d%*c", &input) != 1)
     {
        while(getchar()!='\n'); // This line prevents the input of alphabetic characters.

         printf("\n[ Invalid input. ]\n");
     }

     else if( (input < 5 || input > 95) || (input % 5 != 0) )
    {

         printf("\n[ Invalid input, please try again! ]\n");

    }
       else
       {

        return input;

       }
}

int change(int coinsize, int coinvalue) // Change calculator.
{
    int temp = 0;

       while(coinvalue >= coinsize)
       {
        coinvalue = coinvalue - coinsize; // Sending back new value to main.
        temp++; //increments the amount of coins
       }

    printf("[ Number of %i cents are %d ]\n", coinsize, temp);

    return coinvalue;
}

int exitStage ()
{
    char choice;

     printf("[ Would you like to continue? (y/n) ]\n");
     scanf("%c%*c", &choice);

     if(choice == 'y')
     {
         return choice;
     }
     else if(choice == 'n')
     {
         printf("[ Thanks for sticking around. ]");

         return choice;
     }

}


