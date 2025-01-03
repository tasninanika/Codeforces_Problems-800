#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    cin >> word;

    for(int i = 0; i < word.length(); i++){
        for(int j = 0; j < word.length()-1; j++){
            if(word[j] > word[j+1]){
                swap(word[j],word[j+1]);
            }
        }
    }
    int count = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] != word[i+1]){
            count++;
        }
    }
    if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
