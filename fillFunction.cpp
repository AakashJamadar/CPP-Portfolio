#include <iostream>
#include <algorithm>

int main(){
    //fill(begin,end,value)   begin is inclusive and end is exlusive
    //fills the range of elements with mentioned value
    const int size=21;
    //int arr[10];
    //std::fill(arr,arr+9,4); 
    std::string foods[size];
    //std::fill(foods,foods+size,"kabab");

    //To fill half of the arraty with a food and rest half with different food
    std::fill(foods,foods+(size/2),"kabab");
    std::fill(foods+size/2,foods+size,"egg rice");

    //To fill one third of array 3 times with different food
    std::fill(foods,foods+size/3,"kabab");
    std::fill(foods+size/3,foods+size*2/3,"egg rice");
    std::fill(foods+size*2/3,foods+size,"egg masala");

    for(std::string food:foods){
        std::cout<<food<<'\n';
    }    
    return 0;
}