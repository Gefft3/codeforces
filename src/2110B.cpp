#include<iostream>
#include<algorithm>

using namespace std;

bool robotCanStop(const string& s) {
    
    int k = 0;
    char last = ' ';
    for(char c : s) {

        if (k == 0 && last == ')')
            return true;
        
        if (c == '('){
            last = c;
            k++;
        } 
            
        else if (c == ')'){
            last = c;
            k--;
        } 
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (robotCanStop(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}