//
//  main.cpp
//  1022_10.16_임수정
//
//  Created by 임수정 on 2018. 10. 22..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
class StackOfInteger{
public:
    StackOfInteger(){
        size = 0 ;
    }
    bool isEmpty () const{
        if(size == 0)
            return true;
        else
            return false;
    }
    int peek () const {
        return element[size-1];
    }
    void push(int value){
        element[size++] = value;
    }
    int pop(){
        return element[--size]; //size «œ≥™∞° ª©¡ˆ∏Èº≠ ∞™¿Ã æ¯æÓ¡ˆ¥¬∞« æ∆¥œ¡ˆ∏∏ ¥Ÿ¿Ωø° ≥÷¿ª∂ß ±◊ ¿ßƒ°ø° ≥÷∞‘ µ«π«∑Œ ∫Û∞Õ¿Ã≥™ ∏∂¬˘∞°¡ˆ
    }
    int getSize() const {
        return size;
    }
private:
    int element[100];
    int size;
};
int main(){
    cout << "Enter a number : " ;
    int num ;
    cin >> num;
    
    StackOfInteger primeFactor;
    
    int d = 2;
    
    while(d <= num){
        
        if(num%d == 0){
            primeFactor.push(d);
            num = num / d;
        }
        else{
            d++;
        }
    }
    int size = primeFactor.getSize();
    for(int i = 0 ; i < size ; i++)
        cout << primeFactor.pop() << " ";
    cout << endl;
    
    return 0;
}
