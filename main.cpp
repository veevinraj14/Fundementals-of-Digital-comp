#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int choice;
    bool running = true;

    while (running)
    {
        cout << "\n===== Movie Recommendation System =====\n";
        cout << "1. Horror\n";
        cout << "2. Romance\n";
        cout << "3. Sci-Fi\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            recommendHorror();
            break;
        case 2:
            recommendRomance();
            break;
        case 3:
            recommendSciFi();
            break;
        case 4:
            running = false;
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
        cout << "\n";
    }

    return 0;
}
