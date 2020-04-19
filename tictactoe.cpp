#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

//Make a game of tic tac toe
/*

Need a board class

Need a way to enter in inputs

Play against another player or a computer

Run in a main program


*/



int main() {

    bool stopGame = false;

    while (stopGame == false) {

        bool correctChoice = false;
        char playerInput = '\0';

        while (correctChoice == false) {
            cout << "Would you like to play as X's or O's? Enter x or o:";
            cin >> playerInput;

            if (playerInput == 'x') {

                cout << "You have selected X's" << endl;

                correctChoice = true;
            }

            else if (playerInput == 'o') {

                cout << "You have selected O's" << endl;
                correctChoice = true;
            }

            else {
                cout << "You made a wrong selection, please try again." << endl;
            }
        }

        cout << "This is the empty board." << endl;

        //build a board and have it populated in a 2D array
        const int row = 3;
        const int column = 3;

        // std::vector<char> board(row, column) = { {0,0,0},{},{} };

         //initialize board
        char board[row][column];

        char blank = '\0';

        for (int i = 0; i < row; i++) {

            cout << "|";

            for (int j = 0; j < column; j++) {

                board[i][j] = blank;

                cout << board[i][j];
                cout << "|";
            }
            //cout << "|"
            cout << endl;
        }

        //position entry
        correctChoice = false;
        while (correctChoice == false) {
            
            bool correctPiece = false;
            short xCord = 0;
            short yCord = 0;

            while (correctPiece == false) {
                cout << "Choose a x and y coordinate to place your piece (1-3,1-3)" << endl;
               

                cout << "X cord: ";
                cin >> xCord;
                cout << "Y cord: ";
                cin >> yCord;

                if (xCord > 3 || xCord < 1 || yCord > 3 || yCord < 1) {

                    cout << "Invalid entry, please try again." << endl;

                }
                else {
                    correctPiece = true;
                }
            }

            xCord -= 1;
            yCord -= 1;

            board[xCord][yCord] = playerInput;
            for (int i = 0; i < row; i++) {

                cout << "|";

                for (int j = 0; j < column; j++) {

                    cout << board[i][j];
                    cout << "|";
                }
                
                cout << endl;
            }





        }


    }
   
   


    return 0;
}




