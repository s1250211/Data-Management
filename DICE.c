#include<stdio.h>
#include<time.h>
int main(){
  int Dice1_p1,Dice2_p1,Dice1_p2,Dice2_p2,Total,Total1;
  char name[15],name1[15];
  printf("What is plater1's name?\n");
  scanf("%s",name);
  printf("Hellow,%s !\n\n",name);
  printf("What is plater2's name?\n");
  scanf("%s",name1);
  printf("Hellow,%s !\n\n",name1);
  
  printf("Roling the dice...\n");
  srand(time(NULL));
  Dice1_p1=rand()%6+1;
  Dice2_p1=rand()%6+1;
  Dice1_p2=rand()%6+1;
  Dice2_p2=rand()%6+1;
  Total = Dice1_p1+Dice2_p1;
  Total1= Dice1_p2+Dice2_p2,
  
  printf("Player1 Dice1 : %d\n",Dice1_p1);
   printf("Player1 Dice2 : %d\n",Dice2_p1);
   printf("Player1 Total value : %d\n\n",Total);

   printf("Player2 Dice1 : %d\n",Dice1_p2);
   printf("Player2 Dice2 : %d\n",Dice2_p2);
   printf("Player2 Total value : %d\n\n",Total1);
   
   if(Total>Total1){printf("%s Won !\n",name);
   printf("%s Lost.\n",name1);
   }
   else {printf("%s Won !\n",name1);
   printf("%s Lost.\n",name);
   }
   
  return 0;
 
}
