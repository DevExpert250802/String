#include <iostream>
using namespace std;
 int getlength(char name[]){
     int count = 0;
     for(int i =0; name[i]!='\0'; i++ ){
          count++;
     }
     return count;
 }
int main(){
    char name [27];
    cout<<"Enter your name:";
    cin>>name;
    cout<< "Length:"<< getlength(name)<< endl;
    return 0;
}
