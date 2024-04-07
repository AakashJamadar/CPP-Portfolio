#include <iostream>

int main(){
    std::string s;
    std::cin>>s;

   // pre compute
    int hash[26]={0};  //if hash[256] is used;  int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1; //hash needs int inside,so it converts char to its ascii value,,,//if hash[256] is used;  hash[s[i]]=0;
    }
    int q;
    std::cin>>q;
    while(q--){
        char c; 
        std::cin>>c;
        std::cout<<hash[c-'a']<<std::endl;  ////if hash[256] is used;  cout<<hash[c];
        hash[c];
    }
        //fetch
    
    return 0;
}