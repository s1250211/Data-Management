#include<stdio.h>
#include<time.h>
int main(){
  int Dice1,Dice2,Total;
  char name[15];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hellow,%s !\n",name);
  printf("Roling the dice...\n");
  srand(time(NULL));
  Dice1=rand()%6+1;
  Dice2=rand()%6+1;
  Total = Dice1+Dice2;
  printf("Dice1 : %d\n",Dice1);
   printf("Dice2 : %d\n",Dice2);
   printf("Total value : %d\n",Total);
   if(Total>7)printf("%s Won !\n",name);
   else printf("%s Lost.\n",name);

  return 0;
 
}
