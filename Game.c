
#include <stdio.h>
#include <stdbool.h>

#include <ctype.h>
#include <string.h>


void make_grid(char grid[21][42]);
void handle_inputs(char CHOICE, char grid[21][42]);
void xo();

int main() {

    char choice, CHOICE;
    char grid[21][42];


    printf("     === Tic-Tac-Toe ===\n\n");
    printf(" Pick who plays first: ");
    scanf("%c", &choice);
    CHOICE = tolower(choice);
  
        while(CHOICE != 'x' && CHOICE != 'o') {
            printf(" \n[ERROR] Invalid input. Try again!\n");
            printf(" Pick who plays first: ");
            scanf(" %c", &choice);
            CHOICE = tolower(choice);
        }
    printf("\n");

  
    make_grid(grid);
    handle_inputs(CHOICE,grid);

    return 0;
}

void make_grid(char grid[21][42]) {

    for (int i = 0; i < 21; i++) {
      for (int j = 0; j < 42; j++) {
        grid[i][j] = ' ';
    }
   
}
    for(int i = 1; i < 21; i++){
        for(int j = 1; j < 42; j++){
            if (i % 7 == 0){
                grid[i][j] = '_';
            }
             if (j % 14 == 0) {
                grid[i][j] = '|';
            }
        }
    }

   
}

void handle_inputs(char CHOICE, char grid[21][42]) {

    bool board[3][3] = {
    { true, true, true },
    { true, true, true },
    { true, true, true }
    };

    char X[4][4] = {{'\\',' ',' ','/',},
                    {' ','\\','/',' ',},
                    {' ','/','\\',' ',},
                    {'/',' ',' ','\\',}};

    char O[5][6] = {{' ',' ','_','_',' ',' '},
                    {' ','/',' ',' ','\\',' '},
                    {'|',' ',' ',' ',' ','|'},
                    {'|',' ',' ',' ',' ','|'},
                    {' ','\\','_','_','/',' '}};




    bool game = true;
    int placement;


    while(game) {
        
    for(int i = 0; i < 21; i++){
        for(int j = 0; j < 42; j++){
           printf("%c", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");


        printf("Enter Square: ");
        scanf("%d", &placement);


 switch (placement) {
    case 11:

    if(board[0][0]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 3][j + 5] = X[i][j];
            }
        }
        CHOICE = 'o';
        board[0][0] = false;
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 2][j + 4] = O[i][j];
            }
        }
        board[0][0] = false;
        CHOICE = 'x';
    }
}
        break;

    case 12:

    if(board[0][1]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 3][j + 20] = X[i][j];
            }
        }
        board[0][1] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 2][j + 19] = O[i][j];
            }
        }
        board[0][1] = false;
        CHOICE = 'x';
    }
}

        break;

    case 13:

    if(board[0][2]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 3][j + 34] = X[i][j];
            }
        }
        board[0][2] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 2][j + 33] = O[i][j];
            }
        }
        board[0][2] = false;
        CHOICE = 'x';
    }
}

        break;

    case 21:

    if(board[1][0]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 9][j + 5] = X[i][j];
            }
        }
        board[1][0] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 9][j + 4] = O[i][j];
            }
        }
        board[1][0] = false;
        CHOICE = 'x';
    }
}

        break;

    case 22:

    if(board[1][1]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 9][j + 20] = X[i][j];
            }
        }
        board[1][1] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 9][j + 19] = O[i][j];
            }
        }
        board[1][1] = false;
        CHOICE = 'x';
    }
}

        break;

    case 23:

    if(board[1][2]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 9][j + 34] = X[i][j];
            }
        }
        board[1][2] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 9][j + 33] = O[i][j];
            }
        }
        board[1][2] = false;
        CHOICE = 'x';
    }
}

        break;

    case 31:

    if(board[2][0]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 16][j + 5] = X[i][j];
            }
        }
        board[2][0] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 15][j + 4] = O[i][j];
            }
        }
        board[2][0] = false;
        CHOICE = 'x';
    }
}

        break;

    case 32:

    if(board[2][1]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 16][j + 20] = X[i][j];
            }
        }
        board[2][1] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 15][j + 19] = O[i][j];
            }
        }
        board[2][1] = false;
        CHOICE = 'x';
    }
}

        break;

    case 33:

    if(board[2][2]) {
    if (CHOICE == 'x'){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                grid[i + 16][j + 34] = X[i][j];
            }
        }
        board[2][2] = false;
        CHOICE = 'o';
    }else{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            grid[i + 15][j + 33] = O[i][j];
            }
        }
        board[2][2] = false;
        CHOICE = 'x';
    }
}

        break;

    default:
    
        break;
         }
       }

}

void xo(){

  /*  char X[6][6] = {{'\\',' ',' ',' ',' ','/'},
                    {' ','\\',' ',' ','/',' '},
                    {' ',' ','\\','/',' ',' '},
                    {' ',' ','/','\\',' ',' '},
                    {' ','/',' ',' ','\\',' '},
                    {'/',' ',' ',' ',' ','\\'}};  

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
           printf("%c", X[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    */
    
 
                    

  /*  char O[6][6] = {{' ',' ','/','\\',' ',' '},
                    {' ','/',' ',' ','\\',' '},
                    {'|',' ',' ',' ',' ','|'},
                    {'|',' ',' ',' ',' ','|'},
                    {' ','\\',' ',' ','/',' '},
                    {' ',' ','\\','/',' ',' '},};

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
           printf("%c", O[i][j]);
        }
        printf("\n");
    }
    printf("\n"); */


}