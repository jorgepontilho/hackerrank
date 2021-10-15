#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> vcNum = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int n;
    cin >> n;

    int n1;
    cin >> n1;

    for (int i = (n<1?1:n); i<=n1; i++ )
        {
            if (i<=9)
                cout << vcNum[i]<< endl;
            else
            {
                if (i%2!=0)
                    cout << "odd"<< endl;
                else
                    cout << "even"<< endl;
            }
        }
    return 0;
}