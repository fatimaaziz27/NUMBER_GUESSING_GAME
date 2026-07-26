#include <iostream>
#include <random>
#include <cstdio>

using namespace std;
int main() 
{
    std::random_device rd;
    // 2. Initialize the standard math engine (Mersenne Twister)
    std::mt19937 gen(rd());
    // 3. Define the inclusive range [min, max]
    std::uniform_int_distribution<int> distrib(1, 100);
    // 4. Generate the random number
    int n = distrib(gen);
    // printf("random number %d \n",n);

    int a = -1;
    int guesses = 0;

    while (a != n) {
        guesses ++;
        
        printf("Enter a number: ");
        scanf("%d",&a);

        if (a>n)
            printf("\nEnter lower number\n");
        else if (a<n)
            printf("\nEnter higher number\n");
    }
    printf("The number you guessed in %d attempts.",guesses);
}
