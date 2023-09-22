#include <iostream>
#include <random>
using namespace std;

int main() {
    // Create a random number generator engine
    random_device rd; // A source of random entropy
    mt19937 gen(rd()); // Mersenne Twister PRNG engine

    // Define a distribution (e.g., uniform distribution between 1 and 100)
    uniform_int_distribution<int> distribution(1, 100);

    // Generate random numbers
    int randomNum1 = distribution(gen);
    int randomNum2 = distribution(gen);

    cout << "Random Number 1: " << randomNum1 << endl;
    cout << "Random Number 2: " << randomNum2 << endl;

    return 0;
}
