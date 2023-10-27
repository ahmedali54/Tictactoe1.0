#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int row, column;

int check_result(int board[][5]) //Setting conditions for 3*3 and 5*5
{ if (row == 3)
    {
        if ( board[0][0] == board[0][1] && board[0][1] == board[0][2] )
            {
            return 1;
            }
        else if ( board[1][0] == board[1][1] && board[1][1] == board[1][2] )
            {
            return 1;
            }
        else if ( board[2][0] == board[2][1] && board[2][1] == board[2][2] )
            {
            return 1;
            }

        else if ( board[0][0] == board[1][0] && board[1][0] == board[2][0] )
            {
            return 1;
            }
        else if ( board[0][1] == board[1][1] && board[1][1] == board[2][1] )
            {
            return 1;
            }
        else if ( board[0][2] == board[1][2] && board[1][2] == board[2][2] )
             {
             return 1;
             }
        else if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] )
            {
            return 1;
            }
        else if ( board[0][2] == board[1][1] && board[1][1] == board[2][0] )
            {
            return 1;
            }
        else if ( board[0][0] != 1  && board[0][1] != 2  && board[0][2] != 3  && board[1][0] != 4  && board[1][1] != 5 &&
                  board[1][2] != 6  && board[2][0] != 7  && board[2][1] != 8  && board[2][2] != 9 )
             {
             return 0;
             }

        else {
                return -1 ;
             }
    }

    else
    {
        if ( board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][2] == board[0][3] && board[0][3] == board[0][4] )
            {
            return 1;
            }
        else if ( board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][2] == board[1][3] && board[1][3] == board[1][4] )
        {
            return 1;
            }
        else if ( board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][2] == board[2][3] && board[2][3] == board[2][4] )
            {
            return 1;
            }
        else if ( board[3][0] == board[3][1] && board[3][1] == board[3][2] && board[3][2] == board[3][3] && board[3][3] == board[3][4] )
            {
            return 1;
            }
        else if ( board[4][0] == board[4][1] && board[4][1] == board[4][2] && board[4][2] == board[4][3] && board[4][3] == board[4][4] )
            {
            return 1;
            }
        else if ( board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == board[3][0] && board[3][0] == board[4][0] )
            {
             return 1;
             }
        else if ( board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[2][1] == board[3][1] && board[3][1] == board[4][1] )
            {
             return 1;
             }
        else if ( board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[2][2] == board[3][2] && board[3][2] == board[4][2] )
            {
             return 1;
             }
        else if ( board[0][3] == board[1][3] && board[1][3] == board[2][3] && board[2][3] == board[3][3] && board[3][3] == board[4][3] )
            {
             return 1;
             }
        else if ( board[0][4] == board[1][4] && board[1][4] == board[2][4] && board[2][4] == board[3][4] && board[3][4] == board[4][4] )
            {
            return 1;
            }
        else if ( board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] )
            {
             return 1;
             }
        else if ( board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] )
            {
            return 1;
            }
        else if ( board[0][0] != 1  && board[0][1] != 2  && board[0][2] != 3  && board[0][3] != 4  && board[0][4] != 5 &&
                  board[1][0] != 6  && board[1][1] != 7  && board[1][2] != 8 && board[1][3] != 9  && board[1][4] != 10 &&
                  board[2][0] != 11 && board[2][1] != 12 && board[2][2] != 13 && board[2][3] != 14 && board[2][4] != 15 &&
                  board[3][0] != 16 && board[3][1] != 17 && board[3][2] != 18 && board[3][3] != 19 && board[3][4] != 20 &&
                  board[4][0] != 21 && board[4][1] != 22 && board[4][2] != 23 && board[4][3] != 24 && board[4][4] != 25 )
            {
            return 0;
            }
        else
            {
            return -1 ;
            }
    }
}

void display_board(int board[][5], int row, int column) {
    system("cls");
    cout << "   Welcome To TiC t@c ToE   ";
    cout << "Player - 1 : 'X' and player - 0 : 'O' .\n\n\n\n"; // Updated markers

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (board[i][j] == 101) // Change 101 to 'X'
                cout << "\tX";
            else if (board[i][j] == 999) // Change 999 to 'O'
                cout << "\tO";
            else
                cout << "\t" << board[i][j];
        }
        cout << endl;
    }
}

void play_move(int board[][5])
{
    string name1;
    string name2;
    int player = 1 , p ;
    int choose_move ;
    int mark ;
    int pp;

        cout <<" \n\n\nNumber of players? " ;
        cin >> pp ;

    do
    {
        display_board(board,row,column) ;


        player = (player % 2);





if (pp == 1) // introduces Human VS computer option
{
       if (player != 0) {
        cout << "\n\n\n\nplayer " << player << " , please choose your move : " ;
        cin >> choose_move ;
        mark = 101 ;
        player = player+1;

        }
       else if (player==0){
        cout << "\n\n\n\nplayer " << player << " , please choose your move : " ;

        choose_move = rand () % (row*column);
        mark = 999;
        player = player+1;

        }


}
 else { // introduces 2 players option which I chose to be any number other than one
        cout << "\n\n\n\nplayer " << player << " , please choose your move : " ;
        cin >> choose_move ;
        mark = (player % 2) ? 101 : 999 ; // Sets switch between two people to use 101 and 999
        player = player+1 ;
      }

 bool repeat_move = true; //  To avoid repetition of moves

    while (repeat_move){
        if(row == 5 && choose_move <= 25 || row == 3 && choose_move <= 9) // Also to avoid using moves not in the board
        {
            for (int i = 0 ; i < row ;i++)
            {for (int j = 0 ; j < column ; j++)
                {
                     while (choose_move == board[i][j])
                    {board[i][j]=mark ;
                    repeat_move = false;}
                }
            }
            if (repeat_move){
                cout << "Invalid Move. Please Press Enter and choose again : " << endl;
                cin >> choose_move;
            }
        }
        else
        {
            while (!(row == 5 && choose_move <= 25 || row == 3 && choose_move <= 9))
            {

            cout << "Invalid Move. Please Press Enter and choose again : " << endl;
            cin >> choose_move;
             for (int i = 0 ; i < row ;i++)
             {for (int j = 0 ; j < column ; j++)
                {while (choose_move == board[i][j])
                    {board[i][j]=mark ;
                    repeat_move=false;}
                }

            }
        }

    }
}



    p = check_result(board); // Checks for draw
        if (p == 0)
        {
            display_board(board,row,column) ;
            cout << "\n\n\n\nResult : The Game Is Draw. \n" ;
            break ;
        }
    }
    while ( p != 1) ; //Checks for win
    if (p == 1)
    {
        display_board(board,row,column) ;
        cout << "\n\n\n\nResult : player " << --player << " is winner. " ;

    struct participant // Just to make it different from other Tic Tic Toe games a little joke at the end
{
    string name1;
    string name2;
};
    cout << "\n\nWinner is ";
    cin >> name1; '\n';
    cout << "loser is ";
    cin >> name2;  '\n';
    cout << "\n\nGood game " << name1 << " \nYou are very bad at this " << name2 << " try a different game HeHeHe" ;'\n'; // no offence intended

}
}


// ... (Rest of the functions remain the same)

int main() {
    int board[5][5];
    int x = 1;
    cout << "Enter the size of the board (either 3 for 3*3 or 5 for 5*5): ";
    cin >> row;

    while (row != 3 && row != 5) {
        cout << "\n\nYour entered board size is neither 3*3 nor 5*5. Please enter again: ";
        cin >> row;
    }
    column = row;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            board[i][j] = x++;
            cout << "\t" << board[i][j];
        }
        cout << endl;
    }

    play_move(board);
}
