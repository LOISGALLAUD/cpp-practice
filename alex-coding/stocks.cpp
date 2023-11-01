#include <iostream>
#include <vector>

/*
 * saving = 250
 * currentValue = [175, 133, 109, 210, 97]
 * futureValue = [200, 125, 128, 228, 133]
 */

using namespace std;

int selectStock(int saving, vector<int> currentValue, vector<int> futureValue)
{
    int max = 0;
    int index = -1;
    for (int i = 0; i < currentValue.size(); i++)
    {
        int profit = futureValue[i] - currentValue[i];
        if (profit > max && currentValue[i] <= saving)
        {
            max = profit;
            index = i;
        }
    }
    return index;
}

int main()
{
    int saving = 30;
    vector<int> currentValue = {1, 2, 4, 6};
    vector<int> futureValue = {5, 3, 5, 6};
    int profit = 0;
    while (saving > 0)
    {
        int index = selectStock(saving, currentValue, futureValue);
        if (index == -1)
        {
            break;
        }
        profit += futureValue[index] - currentValue[index];
        saving -= currentValue[index];
        currentValue.erase(currentValue.begin() + index);
        futureValue.erase(futureValue.begin() + index);
    }
    cout << "Profit: " << profit << endl;
    return 0;
}
