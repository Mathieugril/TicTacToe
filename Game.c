
#include <stdio.h>


void print_grid();

int main() {

    char choice;

    printf("     === Tic-Tac-Toe ===\n");
    printf(" Chose to play with X or O: ");
    scanf("%c", &choice);

    printf("\n\n");
    print_grid();

    
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
    


}