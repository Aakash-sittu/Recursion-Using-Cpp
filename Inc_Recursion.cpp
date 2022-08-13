#include <iostream>
#include <algorithm>
using namespace std;
void inc(int n)
{
    if (n == 0)
        return;
    inc(n - 1);
    cout << n << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    inc(n);
    cout << endl;
    return 0;
}
