#include <iostream>
using namespace std;
#include <string>
#include <vector>
int longestSubstring(string s){
    int length = 0;
    vector<int> count(128);

    for (int l=0, r =0; r<s.length(); ++r){
        ++count[s[r]];
        while(count[s[r]]>1){
            --count[s[l++]];

        }
        length = max(length, r-l+1);

    }
return length;
}
int main(){
    string s = {"aaaa   bbbbcbcbcb"};
    int len = longestSubstring(s);
    cout<<len<<endl;

}
