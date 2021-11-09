// https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
    //int size=0;
    string st;
    getline(cin, st);
    
    getline(cin, st);
    
    vector <string> vst;
    string stemp;
    for (int i = 0; i<=st.size();i++)
    {
        if ((stemp != "") && (st[i] == ' ' || i==st.size())){
            vst.push_back(stemp);
            stemp="";
            }
        else
            stemp+=st[i];
    };


    /*cout << "\nOld vector ";
    for (string s: vst)
    {
        cout << s << " ";
    };
    */
    
    //cout << "\nNew vector ";
    for (int i=vst.size()-1;i>=0;i--){
        cout << vst[i];
        if (i!=0)
            cout <<" ";
    }
    
    return 0;
}
