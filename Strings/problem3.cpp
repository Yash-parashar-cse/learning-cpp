// Counting the number of vowels, consonants and words..
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[50] = "how Many wOrds";
    int vowel_count = 0;
    int cons_count = 0;
    int word_count = 1;

   for(int i=0;s[i]!= '\0'; i++){
    if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
         s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowel_count += 1;
         }else if(s[i] == ' '){
            word_count += 1;
         }else{
            cons_count += 1;
         }
   }cout<<"Number of vowels is "<<vowel_count<<endl;     
    cout<<"Number of consonant is "<<cons_count<<endl;     
    cout<<"Number of words is "<<word_count<<endl;     

    return 0;
}