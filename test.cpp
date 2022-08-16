#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << i + 1 << endl;
            break;
        }
        else if (i >= n)
            cout << "No Match" << endl;
    }
    return 0;
}
