#include <iostream>
#include <vector>

using namespace std;

// prototypes
double find_Average(const vector<double>& numbers);
double findMax(const vector<double>& numbers);

int main()
{
    int n;
    cout << "How many numbers you have: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid number" << endl;
        return 0;
    }


    vector<double> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Average = " << find_Average(numbers) << endl;
    cout << "Max of numbers = " << findMax(numbers) << endl;

    return 0;
}


double find_Average(const vector<double>& numbers)
{
    if (numbers.empty())
    {
        cout << "Invalid number" << endl;
        return 0.0;
    }

    double sum = 0.0;
    for (double number : numbers)
    {
        sum += number;
    }

    return sum / numbers.size();
}

double findMax(const vector<double>& numbers)
{
    if (numbers.empty())
    {
        cout << "Invalid number" << endl;
        return 0.0;
    }

    double maxNumber = numbers[0];
    for (double number : numbers )
    {
        if (number > maxNumber)
        {
            maxNumber = number;
        }
    }

    return maxNumber;
}