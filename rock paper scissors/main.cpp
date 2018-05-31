#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char response;
    int i;
    string answer;
    int number;
    char letter;
    do
      {
    cout << "This is a game of rock, paper, scissors so please pick rock, paper or scissors." << endl;
    cin >> answer;
    for (int i=0;i<answer.length(); i++)
    {
        answer[i] = tolower(answer[i]);
    }
    srand(time(0));
    number = 1 + (rand()%3);
    if (answer == "rock")
    {
        if (number == 1)
        {
            cout << "Looks like there is a tie, try again." << endl;
        }
        if (number == 2)
        {
            cout << "Hey it's paper that means you lose, try again later." << endl;
        }
        if (number == 3)
        {
            cout << "Hey it's scissors that means you win, congrats you beat the machine." << endl;
        }
    }
    if (answer == "paper")
    {
          if (number == 1)
        {
            cout << "So that's a rock that means you win, congrats you beat the machine." << endl;
        }
        if (number == 2)
        {
            cout << "Looks like there is a tie, try again." << endl;
        }
        if (number == 3)
        {
            cout << "Hey it's scissors that means you lose, try again later." << endl;
        }
    }
    if (answer == "scissors")
    {
           if (number == 1)
        {
            cout << "So that's a rock that means you lose, try again later." << endl;
        }
        if (number == 2)
        {
            cout << "So that's a paper that means you win, congrats you beat the machine."  << endl;
        }
        if (number == 3)
        {
            cout << "Looks like there is a tie, try again." << endl;
        }
    }
        cout << "Do you want to keep going? y/n." << endl;
        cin >> response;
        cout << endl << endl;
        response = tolower(response);
      }
      while (response != 'n');

    return 0;
}
