//  https://www.hackerrank.com/challenges/cpp-input-and-output/problem

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int total = 0;
    string sText;
    
    getline (cin, sText);
    
    string st;
  
    for (int i = 0; i <= sText.size(); i++)
    {
        while (isdigit (sText[i]))
        {
            st.push_back (sText[i]);
            i++;
        }
        if (st != "")
            total += stoi (st);
        st = "";

    }

  cout << total;

  return 0;
}


