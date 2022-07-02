#include <bits/stdc++.h>
using namespace std;
bool MAIN_LOOP = true;
int COUNT_GAME = 0, whoIsNow = 0;
class Board
{
    static Board *boardData;
    static char boardVariable[];
    Board(){};
    static int whoWon;

    int scanAll()
    {
        int f = 0, pas;
        for (char x : {'X', 'O'})
        {
            char *hm = &Board::boardVariable[0];
            if (x == 'X')
                pas = 2;
            else
                pas = 1;
            if (hm[0] == x && hm[0] == hm[1] && hm[1] == hm[2])
            {
                f = pas;
                break;
            }
            else if (hm[3] == x && hm[3] == hm[4] && hm[3] == hm[5])
            {
                f = pas;
                break;
            }
            else if (hm[6] == x && hm[7] == hm[6] && hm[7] == hm[8])
            {
                f = pas;
                break;
            }
            else if (hm[0] == x && hm[0] == hm[3] && hm[0] == hm[6])
            {
                f = pas;
                break;
            }
            else if (hm[1] == x && hm[1] == hm[4] && hm[1] == hm[7])
            {
                f = pas;
                break;
            }
            else if (hm[2] == x && hm[2] == hm[6] && hm[8] == hm[2])
            {
                f = pas;
                break;
            }
            else if (hm[0] == x && hm[0] == hm[4] && hm[0] == hm[8])
            {
                f = pas;
                break;
            }
            else if (hm[2] == x && hm[2] == hm[4] && hm[2] == hm[6])
            {
                f = pas;
                break;
            }
        }
        return f;
    }

public:
    static Board *getBoard()
    {
        if (!boardData)
        {
            boardData = new Board;
        }
        return boardData;
    }
    void printBoard()
    {
        int u = 0;
        cout << "_____________\n";
        for (; u < 3; u++)
            cout << "| " << boardVariable[u] << " ";
        cout << "|\n|-----------|\n";
        for (; u < 6; u++)
            cout << "| " << boardVariable[u] << " ";
        cout << "|\n|-----------|\n";
        for (; u < 9; u++)
            cout << "| " << boardVariable[u] << " ";
        cout << "|\n|___________|\n\n";
    }

    void canHeDoDat(int pick, bool player)
    {
        if (boardVariable[pick - 1] == ' ')
        {
            if (!player)
                boardVariable[pick - 1] = 'O';
            else
                boardVariable[pick - 1] = 'X';
            COUNT_GAME++;
        }
        else
        {
            cout << "Wrong move player -" << player + 1 << '\n';
            whoIsNow = 1 - whoIsNow;
        }
    }
    void showRes()
    {
        whoWon = scanAll();
        if (COUNT_GAME == 9 && !whoWon)
            cout << "It's Draw\n", printBoard();
        else if (whoWon == 1)
            cout << "Player-1 won\n", printBoard();
        else if (whoWon == 2)
            cout << "Player-2 won\n", printBoard();
    }

    char *getBoardData()
    {
        return boardData->boardVariable;
    }
};

Board *Board::boardData = 0;
int Board::whoWon = 0;
char Board::boardVariable[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

class NotPlayer
{
public:
    Board *boardController = Board::getBoard();
    int play()
    {
        char *ve = boardController->getBoardData();
        return 1;
    }
};

class ActualPlayer
{
public:
    int play()
    {
        int n;
        cout << "Enter your pick : ";
        cin >> n;
        return n;
    }
};

int main()
{
    NotPlayer Emon;
    ActualPlayer player;
    Board *boardController = Board::getBoard();
    while (MAIN_LOOP)
    {
        boardController->printBoard(); // Board ta print korbe
        if (whoIsNow)
            boardController->canHeDoDat(Emon.play(), whoIsNow); // player chal dibe and ta allowed kina check kora hobe
        else
            boardController->canHeDoDat(player.play(), whoIsNow); // player chal dibe and ta allowed kina check kora hobe
        boardController->showRes();
        whoIsNow = 1 - whoIsNow; // kar chal ta decide korbe
    }
}