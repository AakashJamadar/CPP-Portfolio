#include <iostream>
#include <map>

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    std::map<int,int> mpp; //use unorder map for better complexity
    for(int i=0;i<n;i++){
        std::cin>>arr[i];  
        mpp[arr[i]]++;  //we saved one for-loop here but it doesn't affect time compexity much, as it is N+N here not N*N.(as we ignore constant in O(N))
    }
    //pre compute 

    //iterate in the map
    for(auto num:mpp){
        std::cout<<num.first<<"->"<<num.second<<std::endl;  //if unordered map is used,the order won't be the same
    }

    int q;
    std::cin>>q;
    while(q--){
        int num;
        std::cin>>num;
        //fetch
        std::cout<<mpp[num]<<std::endl;
    }

    return 0;
}

//Time-Complexity for map
//storing,fetching  both happens in log(n)(best,worst,average cases),,n=no of elements in the map data structure.

//Time-Complexity for unordered map
//storing,fetching  both happens in O(1)(best,average cases),,but worst case ends up taking linear time O(N) n=no of elements
//here worst case happens very rarely like when collisions happen

//CONCLUSION:use unordered map most of the times,if it fails or gives "time limit exceeded" then switch back to map