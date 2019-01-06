//
//  main.cpp
//  10.1.cpp
//
//  Created by 임수정 on 2018. 10. 19..
//  Copyright © 2018년 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

void sort(string& s){
    for(int i = 0 ; i < s.length()-1 ; i++){
        int min = s[i];
        int minIndex = i;
        for(int j = i+1 ; j < s.length() ; j++){
            if(s[j] < min){
                min = s[j];
                minIndex = j;
            }
        }
        if(minIndex != i){
            s[minIndex] = s[i];
            s[i] = min;
        }
    }
}

bool isAnagram(const string& s1, const string& s2){
    if(s1.length() != s2.length())
        return false;
    
    for(int i = 0 ; i < s1.length() ; i++){
        if(s1[i] != s2[i])
            return false;
    }
    
    return true;
}
int main(){
    string s1, s2;
    cout << "Enter a string s1: ";
    cin >> s1;
    cout << "Enter a string s2: ";
    cin >> s2;
    
    string orgS1 = s1;
    string orgS2 = s2;
//    cout << s1 << endl;
//    cout << s2 << endl;
    sort(s1);
    sort(s2);
//    cout << s1 << endl;
//    cout << s2 << endl;
    
    
    if(isAnagram(s1, s2))
        cout << orgS1 << " and " << orgS2 << " are anagrams" <<endl;
    else
        cout <<orgS1 << " and " << orgS2 << " are not anagrams" <<endl;
    
    
    
    return 0;
}
