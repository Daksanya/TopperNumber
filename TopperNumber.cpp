#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cin>>number;
    string num=to_string(number);
    int size=num.length();
    int sumOddDigits=0;
    int sumEvenDigits=0;
    for(int i=0;i<size;i++){
        int digit=num[i];
        if(i%2==0){
            sumEvenDigits+=digit;
        } else{
            sumOddDigits+=digit;
        }
    }
    if(sumEvenDigits==sumOddDigits){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
