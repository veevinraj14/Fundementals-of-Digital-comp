#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
    string choice;

    cout << "\n===== Netflix Movie Recommendation Assistant =====\n";
    cout << "Choose a genre:\n";
    cout << "1. Action\n";
    cout << "2. Comedy\n";
    cout << "3. Horror\n";
    cout << "4. Romance\n";
    cout << "5. Sci-Fi\n";
    cout << "Enter your choice (number or name): ";
    cin >> choice;

    if (choice == "1" || choice == "Action" || choice == "action")
    {
        recommendAction();
    }
    else if (choice == "2" || choice == "Comedy" || choice == "comedy")
    {
        recommendComedy();
    }
    else if (choice == "3" || choice == "Horror" || choice == "horror")
    {
        recommendHorror();
    }
    else if (choice == "4" || choice == "Romance" || choice == "romance")
    {
        recommendRomance();
    }
    else if (choice == "5" || choice == "Sci-Fi" || choice == "scifi" || choice == "SciFi")
    {
        recommendSciFi();
    }
    else
    {
        cout << "❌ Invalid choice! Please try again.\n";
    }

    cout << "\nExiting... Thank you for using Netflix Assistant!\n";
    return 0;
}
