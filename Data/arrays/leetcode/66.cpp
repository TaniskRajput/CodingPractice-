#include <iostream>
#include <vector>
using namespace std;
vector<int> addone(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            return digits;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}
int main()
{
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;

    vector<int> digits(n);
    cout << "Enter the digits separated by space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    // Call the function
    digits = addone(digits);

    // Print the result
    cout << "Result: ";
    for (int val : digits)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}