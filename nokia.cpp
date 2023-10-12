#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countNonCommonElements(vector<int> &listInput1, vector<int> &listInput2)
{
    unordered_set<int> set1(listInput1.begin(), listInput1.end());
    unordered_set<int> set2(listInput2.begin(), listInput2.end());
    int count = 0;

    for (int num : listInput1)
    {
        if (set2.find(num) == set2.end())
        {
            count++;
        }
    }

    for (int num : listInput2)
    {
        if (set1.find(num) == set1.end())
        {
            count++;
        }
    }

    return count;
}

int main()
{
    // Input for listInput1
    int listInput1_size;
    cin >> listInput1_size;
    vector<int> listInput1;
    for (int i = 0; i < listInput1_size; i++)
    {
        int temp;
        cin >> temp;
        listInput1.push_back(temp);
    }

    // Input for listInput2
    int listInput2_size;
    cin >> listInput2_size;
    vector<int> listInput2;
    for (int i = 0; i < listInput2_size; i++)
    {
        int temp;
        cin >> temp;
        listInput2.push_back(temp);
    }

    int result = countNonCommonElements(listInput1, listInput2);

    cout << result << endl;

    return 0;
}
