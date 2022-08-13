#include <iostream>
#include <algorithm>
using namespace std;
void dec(int n)
{
    if (n == 1)
    {
        cout << n << endl;
        return;
    }

    cout << n << endl;
    dec(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << endl;
    dec(n);
    return 0;
}
