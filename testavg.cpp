#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double score, total = 0;
    int count = 0;
    string input;

    cout << "Enter test scores one by one. Type 'done' and press Enter to finish and see the average.\n";

    while (true)
    {
        cout << "Enter score " << count + 1 << ": ";
        cin >> input;

        if (input == "done" || input == "DONE" || input == "Done")
        {
            break;
        }

        try
        {
            score = stod(input);
            total += score;
            count++;
        }
        catch (...)
        {
            cout << "Invalid input. Please enter a number or 'done' to finish.\n";
        }
    }

    if (count > 0)
    {
        double average = total / count;
        cout << fixed << setprecision(1);
        cout << "The average test score is: " << average << endl;
    }
    else
    {
        cout << "No scores were entered.\n";
    }

    return 0;
}