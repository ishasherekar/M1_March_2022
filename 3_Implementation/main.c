#include "header.c"

struct coordinate{
    int x;
    int y;
    int direction;
};
 
typedef struct coordinate coordinate;
 
coordinate head, bend[500],food,body[30];

 
int main()
{
 
    char key;
 
    Print();
 
    system("cls");
 
    load();
 
    length=5;
 
    head.x=25;
 
    head.y=20;
 
    head.direction=RIGHT;
 
    Boarder();
 
    Food();  
 
    life=3;  
 
    bend[0]=head;
 
    Move();   
 
    return 0;
 
}
 


#include "function.c"


int Score()
{
   int score;
   GotoXY(20,8);
   score=length-5;
   printf("SCORE : %d",(length-5));
   score=length-5;
   GotoXY(50,8);
   printf("Life : %d",life);
   return score;
}
int Scoreonly()
{
int score=Score();
system("cls");
return score;
}
void Up()
{
   int i;
   for(i=0;i<=(bend[bend_no].y-head.y)&&len<length;i++)
   {
       GotoXY(head.x,head.y+i);
       {
           if(len==0)
               printf("^");
           else
               printf("*");
       }
       body[len].x=head.x;
       body[len].y=head.y+i;
       len++;
   }
   Bend();
   if(!kbhit())
       head.y--;
}
