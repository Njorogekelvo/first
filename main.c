#include <stdio.h>
#include <stdlib.h>
// relational operators:> < <= >= == !=
//logical operator: &&(and ||(pipes) !(not) - used to combine two programs
// control structures
// 1. selection/decision making/conditional;( if - to pass a condition),(else - as an alternative if misses condition)
int main();
int main()
{
    printf("tWelcome to zetech c snack shop !\n");
    menu();
    return 0;
}
  int menu()
{

  int item;
  printf("\tToday's menu\n");
  printf("1. Hamburger - ksh. 50\n");
  printf("2. Samosa - ksh. 50\n");
  printf("3. Coffee - ksh. 40\n");
  printf("Enter Item No: ");
  scanf(" %d",&item);
   if(item > 0 && item <= 3)
     {
    printf("item added to cart,Thank you for choosing us\n");
  }

  else{
      printf("invalid item\n");
      menu();
  }
    return item;
}




