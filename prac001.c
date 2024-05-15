#include <stdio.h>
#include <math.h>

int main() {
  int initial_count, num_hours;
  int totalCount;
  char continueChar;

  do{
  printf("Enter the initial number of bacteria: ");
  scanf("%d", &initial_count);

  printf("Enter the number of hours: ");
  scanf("%d", &num_hours);

  printf("The number of bacteria per hour will be... \n");

  for (int i = 1; i <= num_hours; i++)
  {
    // Calculate the number of generations that occur in the given number of hours
  int num_generations = i * 3; //time is 20 minutes
  int result = pow(num_hours, num_generations);
  totalCount = initial_count * result;
    printf("Hour %d : %d\n", i, totalCount);
  }

    printf("Press 'x' to end, any other key to continue: ");
    scanf(" %c", &continueChar);
  }while(continueChar != 'x');
  
  return 0;
}
