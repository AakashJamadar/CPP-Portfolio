#include<iostream>
#include<utility>
//pairs
void explainPair(){
    std::pair<int, std::string> p={2,"hey"};
    std::cout << p.first<<" "<<p.second;
    std::pair<int,std::pair<int,std::string>> p2={3,{2,"hey"}};
    std::cout<<p2.second.first<<" "<<p2.second.second<<" "<<p2.first;
    std::pair<int, int> arr[] = {{1,2},{2,3},{3,4}};
    std::cout<< arr[0].first;
}

int main(){
   
    explainPair();
    return 0;
}