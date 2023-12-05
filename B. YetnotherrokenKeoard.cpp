#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string.h>
#include <cctype> // for tolower function
#include <cstring>//memset
#include <stack>


#define ll  long long
#define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


void processKeyPresses(string& x, string& y) 
{
    stack<char> lowercaseStack, uppercaseStack;

    for (int i = x.size() - 1; i > -1; i--)
    {
        if (x[i] == 'b') 
        {
            lowercaseStack.push(x[i]);
        }
        else if (x[i] == 'B')
        {
            uppercaseStack.push(x[i]);
        }
        else 
        {
            if (x[i] > 96) 
            { 
                // lowercase letter
                if (!lowercaseStack.empty()) 
                {
                    lowercaseStack.pop();
                }
                else 
                {
                    y += x[i];
                }
            }
            else 
            { 
                // uppercase letter
                if (!uppercaseStack.empty())
                {
                    uppercaseStack.pop();
                }
                else
                {
                    y += x[i];
                }
            }
        }
    }

    reverse(y.begin(), y.end());
}

void solve()
{
    string x, y;
    cin >> x;
    processKeyPresses(x, y);
    cout << y << "\n";
}


int main() 
{
    Ragdha

    int t = 1;
    cin >> t;

    while (t--) 
    {
        solve();
    }
    return 0;
}
