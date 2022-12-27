// Create a C++ class for player objects with the following attributes: player no., name,
// number of matches and number of goals done in each match. The number of
// matches varies for each player. Write a parameterized constructor which initializes
// player no., name, number of subjects and creates an array for number of goals and
// number of matches dynamically.
#include <iostream>
#include <cstring>
using namespace std;
class Player
{
private:
    int playerNo, matches;
    char playerName[20];
    int *goals;

public:
    Player(int x, const char name[20], int matches)
    {
        playerNo = x;
        strcpy(this->playerName, name);
        this->matches = matches;
        goals = new int[matches];
        int i;
        for (i = 0; i < matches; i++)
        {
            cout << "No of Goal in " << i + 1 << " Match : ";
            cin >> goals[i];
        }
    }
    void displayRecord()
    {
        int i;
        cout << "Player Name : " << playerName << endl;
        cout << "No of Mactches played : " << matches << endl;
        cout << "No of goals in each match : " << endl;
        for (i = 0; i < matches; i++)
        {
            cout << "No of Goal in " << i + 1 << " Match : ";
            cout << goals[i] << endl;
        }
    }
    ~Player()
    {
        delete[] goals;
    }
};
int main()
{
    Player p_1(1, "lovish duggal", 2);
    p_1.displayRecord();
}