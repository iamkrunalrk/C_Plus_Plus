#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Declare and initialize a vector of integers
    vector<int> numbers = {30, 10, 50, 20, 40};

    // Sort the vector in ascending order using the sort algorithm
    sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    cout << "Sorted Vector Elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Find an element in the vector using the find algorithm
    int target = 20;
    auto result = find(numbers.begin(), numbers.end(), target);

    if (result != numbers.end()) {
        cout << "Found " << target << " at position " << distance(numbers.begin(), result) << endl;
    } else {
        cout << target << " not found in the vector." << endl;
    }

    // Count the occurrences of an element in the vector using the count algorithm
    int countTarget = 30;
    int occurrenceCount = count(numbers.begin(), numbers.end(), countTarget);
    cout << countTarget << " appears " << occurrenceCount << " times in the vector." << endl;

    return 0;
}