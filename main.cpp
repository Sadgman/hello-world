#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int num = 1;
    while(num < 11){
        cout<<num<<endl;
        num += 1;
        Sleep(1000);
    }
    cout<<"nothing";
}
