#include <iostream>
#include <string>
using namespace std;

template <class T>
class Leaderboard
{
private:
    string names[100];
    T scores[100];
    int n;

public:
    Leaderboard()
    {
        n = 0;
    }

    void addPlayer(string pname, T pscore)
    {
        if (n < 100)
        {
            names[n] = pname;
            scores[n] = pscore;
            n++;
        }
        else
        {
            cout << "Leaderboard is full!" << endl;
        }
    }

    string getWinner()
    {
        if (n == 0)
        {
            return "No players added.";
        }
        T maxScore = scores[0];
        string winner = names[0];

        for (int i = 1; i < n; i++)
        {
            if (scores[i] > maxScore)
            {
                maxScore = scores[i];
                winner = names[i];
            }
        }
        return winner;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Name: " << names[i] << " Score: " << scores[i] << endl;
        }
    }
};

int main()
{
    Leaderboard<int> gameBoard;
    gameBoard.addPlayer("Alice", 1500);
    gameBoard.addPlayer("Bob", 2300);
    gameBoard.addPlayer("Charlie", 1900);
    gameBoard.display();
    cout << "GameBorad Leaderboard" << endl;
    cout << "Winner: " << gameBoard.getWinner() << endl;
    Leaderboard<double> gpaBoard;
    gpaBoard.addPlayer("Hamza", 3.5);
    gpaBoard.addPlayer("Ali", 3.9);
    gpaBoard.addPlayer("Daud", 3.7);
    cout << "GPA Leaderboard" << endl;
    gpaBoard.display();
    cout << "Winner: " << gpaBoard.getWinner() << endl;

    system("pause");
    return 0;
}