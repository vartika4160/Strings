#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1;
    int count =0;
    cout<<"Enter a string: ";
    getline(cin,str1);
    for(int i=0; str1[i]!='\0';i++){
        count++;
    }
    cout<<"The lenght of the string is: "<<count;
    
return 0;
}
