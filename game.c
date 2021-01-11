#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int random(int n){
    int c;
    srand(time(NULL));
    c= rand()%n;
    return c;

}

int check(char a, char b){

    if((a=='R') &&  (b=='S')){
        return 1;
        }
    else if((a=='P') && (b=='R')){
        return 1;
    }
    else if((a=='S') && (b=='P')){
        return 1;
    }
    
    else if((a=='S') && (b=='R')){
        return -1;
    }
    else if((a=='R') && (b=='P')){
        return -1;
    }
    else if((a=='P') && (b=='S')){
        return -1;
    }
    
    else if((a=='S') && (b=='S')){
        return 0;
    }
    
    else if((a=='P') && (b=='P')){
        return 0;
    }
    
    else if((a=='R') && (b=='R')){
        return 0;
    }
}

int main()
{
    char name[15];
    char playerChoice, compChoice;
    int c;
    int z=0,x=0;
    
    char arr[]={'R','P','S'};
    printf("Enter your name \n");
    gets(name);
    printf("Welcome %s\n",name);
    printf("We Will Play Best of 3\n\n");

    
    for (int i = 0; i < 3; i++)
    {
        /* code */

    printf("Enter Your choice \n 1.Rock 2.Paper 3.Scissor\n");
    scanf("%d",&playerChoice);

    printf("You choice is %c\n\n",arr[playerChoice-1]);

    printf("Computer choice is %c\n\n",arr[random(3)]);

    c=check(arr[playerChoice-1],arr[random(3)]);

    if(c==1){
        z++;
        printf("You Got it !! \n\n");
        
    }
    else if(c==-1){
        x++;
        printf("Computer Got it !!\n\n");
    }
    else if(c==0){
        printf("Its a draw \n\n");
    }

    printf("Scores\n\n");
    printf("You :- %d \n",z);
    printf("Comp :- %d \n\n",x);

    

    }
    
if(z>x){
        printf("Congrasts !! You Won The Game\n");
    }
    else if(x>z){
        printf("You Lost it !! Comp Won The Game\n");

    }
    else{
        printf("Its a Draw \n");

    }

    return 0;
}
