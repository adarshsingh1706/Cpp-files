#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

string solution(const string &forth) {
    unordered_map<char, int> count;

    // Count occurrences of each direction in the outward path
    for (char direction : forth) {
        count[direction]++;
    }

    // Calculate the net movements needed to return to the starting point
    int northExcess = count['N'] - count['S'];
    int eastExcess = count['E'] - count['W'];

    // Initialize the return path
    string backPath;

    // Create the return path balancing the excess movements
    if (northExcess > 0) {
        backPath += string(northExcess, 'S'); // Excess north needs to be balanced by south
    } else if (northExcess < 0) {
        backPath += string(-northExcess, 'N'); // Excess south needs to be balanced by north
    }

    if (eastExcess > 0) {
        backPath += string(eastExcess, 'W'); // Excess east needs to be balanced by west
    } else if (eastExcess < 0) {
        backPath += string(-eastExcess, 'E'); // Excess west needs to be balanced by east
    }

    // Ensure that the return path is different from the reversed outward path
    string reversedForth = forth;
    reverse(reversedForth.begin(), reversedForth.end());

    // To ensure the return path is not the same as the reversed path
    // Try to create a variation of the return path
    if (backPath == reversedForth) {
        if (backPath.length() > 1) {
            // Make the first swap to ensure it's different
            swap(backPath[0], backPath[1]);
        } else {
            // If the path is very short, ensure it's not the same
            backPath += 'X'; // Add a dummy character to ensure it's different
        }
    }

    return backPath;
}

int main() {
    string path = "NEENWN";
    cout << "Back path: " << solution(path) << endl;
    return 0;
}
