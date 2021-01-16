#include <iostream> 

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    //Declare 3 number code
    const int CodeA = 4, CodeB = 7, CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;

    const int CodeProduct = CodeA * CodeB * CodeC ;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << " + There are 3 numbers in the code" << std::endl; 
    std::cout << " + The codes add up to: " << CodeSum << std::endl;
    std::cout << " + The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA ;
    std::cin >> GuessB ;
    std::cin >> GuessC ;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!";
    }
    else
    {
        std::cout << "You lose!";
    }
    
    return 0;
}