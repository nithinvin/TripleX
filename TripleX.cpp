#include <iostream> 

void PrintIntroduction()
{
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

void PlayGame()
{
    // Print welcome messages to the terminal
    PrintIntroduction();

    //Declare 3 number code
    const int CodeA = 4, CodeB = 7, CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;

    const int CodeProduct = CodeA * CodeB * CodeC ;

    // Print sum and product to the terminal
    std::cout << '\n';
    std::cout << " + There are 3 numbers in the code" << '\n'; 
    std::cout << " + The codes add up to: " << CodeSum << '\n';
    std::cout << " + The codes multiply to give: " << CodeProduct << '\n';

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    // Guessed Sum and Product
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!";
    }
    else
    {
        std::cout << "\nYou lose!";
    }
}

int main()
{ 
    PlayGame();
    return 0;
}