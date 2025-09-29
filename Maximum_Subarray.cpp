#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int Curr_Sum = 0;
    int Maxi_Sum = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        Curr_Sum += arr[i];
        Maxi_Sum = max(Maxi_Sum, Curr_Sum);

        if (Curr_Sum < 0)
        {
            Curr_Sum = 0;
        }
        
    }

    cout << Maxi_Sum;
}