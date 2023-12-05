    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <cmath>
    #include <iomanip>
    #include <vector>
    #include <string.h>
    #include <cctype> // for tolower function
    #include <cstring>//memset
     
     
    #define ll  long long
    #define Ragdha ios_base::sync_with_stdio(0);cin.tie(0);
     
    using namespace std;
     
    int main() 
    {
        Ragdha
     
        int t;
        cin >> t;
     
        while (t--) 
        {
            string position;
            cin >> position;
     
            char column = position[0];
            char row = position[1];
     
            // Output all possible moves horizontally
            for (char c = 'a'; c <= 'h'; ++c)
            {
                if (c != column)
                {
                    cout << c << row << endl;
                }
            }
     
            // Output all possible moves vertically
            for (char r = '1'; r <= '8'; ++r) 
            {
                if (r != row)
                {
                    cout << column << r << endl;
                }
            }
        }
     
        return 0;
    }
