#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String: "<<endl;
    getline(cin,s);
    string temp;
    // for(int i=0;i<s.length();i++){
    //     if(s[i]==' '){
            
    //         temp.push_back('@');
    //         temp.push_back('4');
    //         temp.push_back('0');
    //     }
    //     else{
    //         temp.push_back(s[i]);
    //     }
    // }

    // Without Temp:
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
        {
            s[i] = '@';
            s.insert(i + 1, "40");
            i += 2; // Skip the added "40" to avoid infinite loop
        } 
    }

    // cout<<temp<<endl;
    cout<<s<<endl;
    return 0;
}