// n raised to the power p using recursion
#include <iostream>
#include <algorithm>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}
int main(int argc, char const *argv[])
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << endl;
    return 0;
}
