#include<iostream>
#include<string.h>
#include<map>
#include<iterator>
using namespace std;

/* input : aabcd 
   output : abacd

   a = 2;
   b = 1;
   c = 1;
   d = 1;

   if the count is 2 then make them consequtive
   a then find something which is not equal to a

*/

string seperateConsequtives(string word){
    map <char,int> storeCounts;
    map <char,int> :: iterator it;
    int i = 0;
        
        for(int i = 0 ; i < word.length() ;  i++){
            storeCounts[word[i]]++;
        }
    for(it = storeCounts.begin() ; it!=storeCounts.end() ; it++){
            cout<<"{"<<it->first<<","<<it->second<<"}"<<endl;
    }

    return word;

}
int main(){
    string word;
    string convertedWord;
    cout<<"Enter the word with some consequtive letters"<<endl;
    cin>>word;
    convertedWord = seperateConsequtives(word);

}