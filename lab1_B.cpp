#include <iostream>

using namespace std;

void algo(int n)
{
    cout << n <<" ";
    if(n==1) return;
    else if(n%2==1) algo(3*n+1);
    else algo(n/2);
}

int main()
{
    int n;
    cout << "Please enter any integer:";
    cin >> n;
    algo(n);
    cout << endl;
    return 0;
}

