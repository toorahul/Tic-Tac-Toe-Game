#include<stdio.h>
#include<conio.h>

void Frame();
int whowin();
void system();

char board[]= {'0','1','2','3','4','5','6','7','8','9'};

void main(){
    int player = 1,input,status=-1;
    Frame();
    

    while(status=-1){
        player = (player %2 ==0) ? 2:1;
        char mark = (player==1) ? 'X' :'O';
        printf("please enter number for Player %d \n",player);
        scanf("%d",&input);
        if(input<1 || input>9){
        printf("Invalid Input :");
    }

    board[input] = mark;
    Frame();
    
    int result = whowin();
    if(result==1){
        printf("Player %d is the WINNER \n\n",player);
    }
    else if(result==0){
        printf("MATCH DRAW");
        return;
    }
    if(result==-1)

    player++;

    }
    
}


void Frame(){
    system("cls");
    printf("\n\n\n");
    printf("->->-> Enjoy your Tic Tac Toe Game <-<-<-\n\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[1],board[2],board[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[4],board[5],board[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[7],board[8],board[9]);
    printf("   |   |   \n");
  
}

int whowin(){
    if(board[1]==board[2] && board[2]==board[3]){
    return 1;
    }
     if(board[1]==board[4] && board[4]==board[7]){
    return 1;
    }
     if(board[7]==board[8] && board[8]==board[9]){
    return 1;
    }
     if(board[3]==board[6] && board[6]==board[9]){
    return 1;
    }
     if(board[1]==board[5] && board[5]==board[9]){
    return 1;
    }
     if(board[3]==board[5] && board[5]==board[7]){
    return 1;
    }
     if(board[2]==board[5] && board[5]==board[8]){
    return 1;
    }
     if(board[4]==board[5] && board[5]==board[6]){
    return 1;
    }
    int count=0;
    for(int i=1 ; i <=9 ; i++)
    {
        if (board[i]=='X' || board[i]=='O'){
            count++;
        }
    }
    if(count == 9){
        return 0;
    }
    return -1;
}