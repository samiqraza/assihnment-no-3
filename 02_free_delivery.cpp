#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 3000)
    {
        cout << "Congratulations! You Qualify for Free Delivery";
    }

    return 0;
}
