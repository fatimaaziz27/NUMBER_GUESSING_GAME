#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n = rand() % 100 + 1;
    int a = -1;
    int guesses = 0;

    while (a != n) {
        guesses++;

        cout << "Enter a number: ";
        cin >> a;

        if (a > n) {
            cout << "Enter a lower number." << endl;
        }
        else if (a < n) {
            cout << "Enter a higher number." << endl;
        }
    }

    cout << "Congratulations! You guessed the number in "
         << guesses << " attempt(s)." << endl;

    return 0;
}












#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n = rand() % 100 + 1;
    int a = -1;
    int guesses = 0;

    while (a != n) {
        guesses++;

        cout << "Enter a number: ";
        cin >> a;

        if (a > n)
            cout << "Enter a lower number." << endl;
        else if (a < n)
            cout << "Enter a higher number." << endl;
    }

    cout << "Congratulations! You guessed the number in "
         << guesses << " attempt(s)." << endl;

    return 0;
}
