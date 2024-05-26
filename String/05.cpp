#include <bits/stdc++.h>
using namespace std;
char toUpperCase(char ch){
    if(ch>='A'&& ch<='Z') return ch;
    else{
        return  ch-'a'+'A';
    }
}
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    char upperCh  = toUpperCase(ch);
    cout << "Uppercase: " << upperCh << endl;
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
char toUpperCase(char ch){
    if(ch>='A'&& ch<='Z') return ch;
    else{
        return  ch-32;
    }
}
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    char upperCh  = toUpperCase(ch);
    cout << "Uppercase: " << upperCh << endl;
    return 0;
}
