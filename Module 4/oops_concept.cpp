#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;   

void displayMenu()  // Display menu 
{
    cout << "\n1) ROCK" << endl;    // Print Rock
    cout << "2) PAPER" << endl;   // Print Paper
    cout << "3) SCISSORS" << endl; // Print Scissors
    cout << "-> Select Your Choice: "; // Enter your choice
}

void playRound(char playerChoice, char computerChoice, int &playerScore, int &computerScore) // Round play for win or loss or tie
{
    switch(playerChoice) // Switch case for player choice
    {
        case 'R':   // Case R is for player Rock choice
            switch(computerChoice) // Player Rock switch case for computer's choice
            {
                case 'R': cout << "It's a tie!" << endl; break; // It's a tie
                case 'P': cout << "You lose!" << endl; computerScore++; break; // You lose
                case 'S': cout << "You win!" << endl; playerScore++; break; // You win
            }
            break;
        case 'P':   // Case P is player Paper choice
            switch(computerChoice) // Player Paper switch case for computer's choice
            {
                case 'R': cout << "You win!" << endl; playerScore++; break;
                case 'P': cout << "It's a tie!" << endl; break;
                case 'S': cout << "You lose!" << endl; computerScore++; break;
            }
            break;
        case 'S':   // Case S is player Scissors choice
            switch(computerChoice) // Player Scissors switch case for computer's choice
            {
                case 'R': cout << "You lose!" << endl; computerScore++; break;
                case 'P': cout << "You win!" << endl; playerScore++; break;
                case 'S': cout << "It's a tie!" << endl; break;
            }
            break;
        default:
            cout << "Invalid input!" << endl; // Invalid choice
    }
}

int main() 
{
    srand(time(0)); // Initialize random number generator
    char playerChoice, computerChoice;
    int randomChoice, rounds, i;
    int playerScore = 0, computerScore = 0;
    string playerName;

    cout << "Welcome to Rock, Paper, Scissors!" << endl; // Game welcome message

    cout << "\nEnter Your Name: ";
    cin >> playerName;

    cout << "\n" << playerName << ", How Many Rounds Do You Want To Play? ";
    cin >> rounds;

    cout << "\nLet's start the game!" << endl;
    
    for (i = 0; i < rounds; i++) // Loop for each round
    {
        cout << "\nRound No: " << (i + 1) << "/" << rounds << endl; // Round number
        cout << playerName << "'s Score: " << playerScore << endl; // Print player's score
        cout << "Computer Score: " << computerScore << endl; // Print computer's score

        displayMenu();   // Display menu
        int choice;
        cin >> choice;   // Get player's choice

        switch(choice) 
        {
            case 1: playerChoice = 'R'; break; // Player Rock choice 
            case 2: playerChoice = 'P'; break; // Player Paper choice 
            case 3: playerChoice = 'S'; break; // Player Scissors choice 
            default: playerChoice = 'X'; break; // Default choice
        }

        // Generate computer's choice
        randomChoice = rand() % 3; 
        if (randomChoice == 0) 
        {
            computerChoice = 'R';
        } 
        else if (randomChoice == 1) 
        {
            computerChoice = 'P';
        } 
        else 
        {
            computerChoice = 'S';
        }
        
        // Print computer's choice
        cout << "Computer's choice is: " << (computerChoice == 'R' ? "ROCK" : (computerChoice == 'P' ? "PAPER" : "SCISSORS")) << endl;
        
        playRound(playerChoice, computerChoice, playerScore, computerScore);
    }
    
    // Print final score
    cout << "\nFinal Scores:\n";
    cout << playerName << "'s Score: " << playerScore << endl;
    cout << "Computer Score: " << computerScore << endl;
    
    // Print game result
    if (playerScore > computerScore) 
    {
        cout << "You win the game!" << endl;
    } 
    else if (playerScore < computerScore) 
    {
        cout << "You lose the game!" << endl;
    } 
    else 
    {
        cout << "The game is a tie!" << endl;
    }

    return 0;
}

