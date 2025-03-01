#include <iostream>
#include <random>
using namespace std;

int main() {
    int choice;
    random_device rd;  // Seed
    mt19937 gen(rd()); // Mersenne Twister generator
    uniform_int_distribution<int> dist(1, 3); // Range [1,3]

    int winning_door = dist(gen);
    vector<int> doors = {1, 2, 3};

    cout << "Pick a choice: Door 1, Door 2, or Door 3" << endl;
    cin >> choice;
    auto it = find(doors.begin(), doors.end(), choice);
    if (it != doors.end()) {
        doors.erase(it);  // Removes choice from the vector
    }
    //logic to take that out of doors
    if (choice == winning_door) {
        uniform_int_distribution<int> dist(0, doors.size() - 1);
        int random_index = dist(gen);
        int random_door;
    }
    int firstOpen = 6 - (choice + winning_door);
    bool switch_choice;
    cout << "Opening door " << firstOpen << ". There is nothing behind door " << firstOpen << endl;
    cout << "Before we proceed, would you like to stick with door " << choice << " or switch to door " << winning_door;
}