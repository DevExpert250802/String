#include <bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z') return ch;
    else{
        return  ch-'A'+'a';
    }
}
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    char lowerCh = toLowerCase(ch);
    cout << "Lowercase: " << lowerCh << endl;
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z') return ch;
    else{
        return  ch+32;
    }
}
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    char lowerCh = toLowerCase(ch);
    cout << "Lowercase: " << lowerCh << endl;
    return 0;
}
