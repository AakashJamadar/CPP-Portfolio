#include <iostream> 
#include <vector>
#include <set>

std::vector<int> unionOf2Arrays(std::vector <int> a,std::vector <int> b){
    std::set<int> st;
    int n1=a.size();
    int n2=b.size();
    std::vector <int> unionn;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);  //Time-complexity is O(n1log(n)) n is size of set.
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);  //Time-complexity is O(n2log(n))  n is size of set.
    }
    for(int num:st){
        unionn.push_back(num);  //Time-complexity is O(n1+n2) in the worst case when both arrays have no elements in common.
    }
    return unionn;              //Total Time-complexity O(n1log(n)+n2log(n))+O(n1+n2)
}

int main(){                   //Space-complexity O(n1+n2)+O(n1+n2)  unionn space is used for returning(say it specifically to interviewer)
    int n1,n2;
    std::cin>>n1>>n2;
    std::vector<int> a(n1);
    for(int i=0;i<n1;i++){
        std::cin>>a[i];
    }
    std::vector<int>b(n2);
    for(int i=0;i<n2;i++){
        std::cin>>b[i];
    }
    std::vector <int> unionn=unionOf2Arrays(a,b);
    for(auto num:unionn){
        std::cout<<num<<" ";
    }
    return 0;
}