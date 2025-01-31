#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
int height=20;
int width=30;
int ballx=3, bally=2;
int basex=4;
int direction,flag,game=0;
int speed=300;
int score=0;
int maxscore=0;


void draw()
{
for (int i=1;i<=height+4;i++)
{
    for(int j=1;j<=width+2;j++)
    {
        if(i==bally&&j==ballx)
        {
            printf("@");
        }
        else
        {
        if(i==1||i==height+4||j==1||j==width+2)
        {
        printf("#");
        }
        else 
        {
            if(i==height+3)
            {
                printf("^");
            }
            else
            {
                if(i==height+2&&(j==basex||j==basex+1 || j==basex+2))
                printf("-");
                else
                printf(" ");
            }
        }
        }
        
    }
    printf("\n");
}
}
    void arrow_1()

     {
         bally++;
           ballx++;
           
           if(bally==height+1 && (ballx==basex || ballx==basex+1 || ballx==basex+2))
           {
            if(ballx==width+1)
            {
                direction=4;
                score++;
                return;
            }
            else{
                direction=2;
                score++;
                return;
              }
            }
           else 
           {
            if(bally==height+2)
            {
                game=2;
                return;
            }
            else{
                if(ballx==width+1)
                {
                    direction=3;
                    return;
                }
                else
                {
                    return;
                }

            }
           }


     }
     void arrow_2(){

     
           bally--;
           ballx++;
             if(bally==2 || ballx==width)
             {
                if(bally==2 && ballx==width)
                {
                    direction=3;
                    return;
                }
                 else{
                    if(bally==2)
                    {
                      direction=1;
                      return;
                    }
                    else{

                     if(ballx==width)
                     {
                        direction=4;
                        return;
                     }
                     else{
                        return;
                     }
                    }

                 }

             }

     }
         

     

 

     void arrow_3( )

     {  bally++;
           ballx--;
           if(bally==height+1 && (ballx==basex || ballx==basex+1 || ballx==basex+2))
           {
            if(ballx==2)
            {
                direction=2;
                score++;
                return;
            }
            else{
                direction=4;
                score++;
                return;
              }
            }
           else 
           {
            if(bally==height+2)
            {
                game=2;
                return;
            }
            else{
                if(ballx==2)
                {
                    direction=1;
                    return;
                }
                else{
                    return;
                }

            }
           }

     }
      
     void arrow_4()

     {
        bally--;
           ballx--;
             if(bally==2 || ballx==2)
             {
                if(bally==2 && ballx==2)
                {
                    direction=1;
                    return;
                }
                 else{

                    if(bally==2)
                    {
                      direction=3;
                      return;
                    }
                    else{

                     if(ballx==2)
                     {
                        direction=2;
                        return;
                     }
                     else
                     {
                        return;
                     }
                    }

                 }

             }
      }
      void check()
      {
        printf("ballx=%d bally=%d game=%d flag=%d direction=%d direction basex=%d\n",ballx,bally,game,flag,direction,basex);
      } 
void setup()
{
    Sleep(speed);
    system("cls");
    switch(direction)
    {
        case 1:
        arrow_1();
        break;
        case 2:
        arrow_2();
        break;
        case 3:
        arrow_3();
        break;
        case 4:
        arrow_4();
        break;
    }
     
}
void player_input()
{
if(kbhit()) { 
		switch (getch()) { 
		case 'a': 
			flag = 1; 
			break; 
		case 's': 
			flag = 2; 
			break; 
		case 'x': 
			game= 1; 
			break; 
		} 
        
        if(flag==1)
        {
            if(basex!=2)
            {
                basex--;
            }

        }
        else{
            if(flag==2)
            {
                if(basex!=width-1)
                {
                    basex++;
                }
            }
        }
	}
}
int main()
{ 
    int n;
  n=2;
     int ab=1;
     direction=1;
     while(ab){
        
     printf("Welcome to this ping pong game.\n");
     printf("Controls: <s> to move the paddle towards the right.\n <a> to move paddles to the left. \n<x> to terminate the game in between.\n");
     printf("which top corner would you like to start. Press 1 for left and 2 for right\n");
     int c;
     while(TRUE)
     {int a;
     scanf("%d",&a);
        if(a==1||a==2)
        { c=a;
            break;
        }
        else
        {
            printf("Please enter a valid input. Press 1 for left and 2 for right\n ");
        }
     }
        if(c==1)
        {
            bally=2;
            ballx=2;
            direction=1;
        }
        if(c==2)
        {
            bally=2;
            ballx=width+1;
            direction =3;
        }
     
        printf("What difficulty would you like.\n");
        printf("1. Easy- paddles are fast and the game is slow\n");
        printf("2. Moderate -paddles are fast but the game is also fast\n");
        printf("3. Hard- paddles are slow but the game is fast\n");
    int b;
    while(TRUE)
     {int a;
     scanf("%d",&a);
        if(a==1||a==2||a==3)
        { c=a;
            break;
        }
        else
        {
            printf("Please enter a valid input.\n ");
        }
     }
        if(c==1)
        {
           n=2;
           speed=400;
        }
        if(c==2)
        {
            n=2;
            speed=250;
        }
        if(c==3)
        {
            n=1;
            speed=300;
        }
     
     
      while(game==0){
        draw();
        
        for (int i=0;i<n;i++)
        {
            player_input();
        }
        setup();
      }
      if(game==1)
      {
        draw();
        printf("Game terminated!\n");
        game=0;
      }
      if(game==2)
      {
        draw();
        printf("You lose!\n");
        game=0;
      }
      if(maxscore<score)
      {
        maxscore=score;
      }
      printf("Your score is %d\n",score);
      score=0;
      printf("Press 0 to exit and 1 to play again\n");
      int k;
      scanf("%d",&k);
      ab=k;

      if(ab==0)
      {
        printf("Your maxscore is %d",maxscore);
        exit(0);
      }
     }

}
