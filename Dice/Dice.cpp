#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int number, numSide, numDie;

    cout << "How many dice will you roll?" << endl;
    cin >> numDie;

    cout << "How many sides will the dice have?" << endl;
    cin >> numSide;

    for (int i = 0; i < numDie; i++)
    {
        cout << "Result: ";

        number = rand() % numSide + 1;

        cout << number << "\t";
    }
}
