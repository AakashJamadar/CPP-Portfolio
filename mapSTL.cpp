#include <iostream>
#include <map>

//Map

void explainMap(){
    //Map is a container which stores everything in respect of {key,value}
    //Key can be any datatype,similarly value
    //Keys are unique and are in sorted order
    std::map<int, int> m;
    std::map<int, std::pair<int, int>> m2;
    std::map<std::pair<int, int>,int> m3;
    m[1]=2;
    m.emplace(3,1);
    m.insert({2,4}); 
    m3[{2,3}]=10;
    std::cout<<m3[{2,3}];
    for( std::pair<int, int> pr : m){
        std::cout<<pr.first<<" "<<pr.second<<std::endl;
    }
    std::cout<<m[1]<<" "<<m[2]<<" "<<m[3]<<std::endl; //returns value of the key
    auto itt=m.find(2);
    std::cout<<(*itt).second;
    auto it=m.find(52466);
    std::cout<<(*it).second; //if number doesn't exist find() points end() and *(it) finds last key and prints it's value
    auto it1=m.lower_bound(1);
    std::cout<<(*it1).second; //works like lower bound and find(i,e returniong the value of the last key if key is not found)
    auto it2=m.upper_bound(1);
    std::cout<<(*it2).second; //works like lower bound and find(i,e returniong the value of the last key if key is not found)

    //erase, swap, size, empty are same as above
}

void explainMultiMap(){
    //everything same as map, only it can store muultiple keys
    //only m[key] cannot be used here
    //same like set and multi set(soreted but not unique,,ex:you can store{1,2}and {1,3})
}


void explainUnorderedMap(){
    //same as set and unordered_set differences(not sorted,randomised)
    //time complexity also same as unordered_set(O(1),rarely O(N))
}

int main(){
    explainMap();
    return 0;
}