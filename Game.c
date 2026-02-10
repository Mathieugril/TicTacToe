
#include <stdio.h>
#include <stdbool.h>


void print_grid();
void handle_inputs(char choice);

int main() {

    char choice;

    printf("     === Tic-Tac-Toe ===\n\n");
    printf(" Pick who plays first: ");
    scanf("%c", &choice);

    printf("\n\n");
    print_grid();

    handle_inputs(choice);


    return 0;
}
void print_grid() {

    char grid[21][42];
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

    
    for(int i = 0; i < 21; i++){
        for(int j = 0; j < 42; j++){
           printf("%c", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void handle_inputs(char choice) {

    bool game = true;
    int placement;


    while(game) {


        printf("Enter Square: ");
        scanf("%d", &placement);

       switch (placement) {
    case 11:
        break;

    case 12:
        break;

    case 13:
        break;

    case 21:
        break;

    case 22:
        break;

    case 23:
        break;

    case 31:
        break;

    case 32:
        break;

    case 33:
        break;

    default:
        break;
}


    }

}