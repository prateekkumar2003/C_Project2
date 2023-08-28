#include <stdio.h>
#include <stdbool.h>

void printBoard();
int checkWin();
void system();

char board[]={' ','1','2','3','4','5','6','7','8','9'};
int cnt=0;

void main(){
    int player=1;
    int input;
    printBoard();
   
    while (true)
    {
        player=(player%2==0) ? 2 : 1;
        char mark=(player==1) ? 'X' :'O';
        printf("Please enter Number For Player %d\n",player);
        scanf("%d",&input);
    if(input<1 || input>9 || board[input]=='X' || board[input]=='O'){
        printf("invalid input\n");
        continue;
    }

    board[input]=mark;
    cnt++;
    printBoard();

    int result=checkWin();

    if(result==1){
        printf("Player %d is the Winner\n",player);
        return;
    }else if(result==0){
        printf("draw");
        return; 
    }
    player++;
    }
    
    
}

void printBoard(){
    system("clear");
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}


int checkWin(){

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
    
    if(cnt==9){
        return 0;
    }
    return -1;
}
