#include <stdio.h>

#include <stdlib.h>

 

double DisplayMenu ()

{

  printf ("----------------");

  printf ("- 1)Add    -");

  printf ("- 2)Subtract  -");

  printf ("- 3)Multiply  -");

  printf ("- 4)Exit    -");

  printf ("----------------");

}

 

int main ()

{

  int choice = 0;

  int n1, n2;

 

    while (choice != 5)

    {

      printf ("----------------\n");

      printf ("- 1)Add    -\n");

      printf ("- 2)Subtract  -\n");

      printf ("- 3)Multiply  -\n");

      printf ("- 4)Exit    -\n");

      printf ("----------------\n");

 

      scanf ("%d", &choice);

 

      if (choice == 1)

      {

          scanf("%d %d", &n1, &n2);

          printf("%d - %d = %d\n", n1, n2, n1-n2);

      }

      else if (choice == 2)

      {

                 scanf("%d %d", &n1, &n2);

                printf("%d - %d = %d\n", n1, n2, n1-n2);

      }

      else if (choice == 3)

     {

                  scanf("%d %d", &n1, &n2);

                 printf("%d - %d = %d\n", n1, n2, n1-n2);

     }

  }

  exit (0);

}