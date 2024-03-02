#include<iostreaam>
#include<vector>
#include<utility>//used for adding pair

//vectors   

void explainVector(){
    std::vector<int> k;
    k.push_back(5);
    k.emplace_back(6);
    std::cout<<k[0];
    std::vector<std::pair<int,int>> vec;   
    vec.push_back({8,9});
    vec.emplace_back(6,4);
    std::cout<<vec[0].first<<vec[1].first;
    std::vector<int> v(5,100);  
    for(int i=0; i<10; i++){
        std::cout<<k[i]<<" ";
    }
    std::vector<int> m(5);
    std::cout<<m[2];
    std::vector<int> v1(5,62);
    std::vector<int> v2(v1);
    std::cout<<v2[3]<<" "<<v1[2]<<std::endl;
    std::vector<int> v3(v2);
    std::cout<<v3[4];
    std::vector<int> a={1,2,3,4,5};
    std::vector<int>::iterator it=a.begin();
    it+=2;
    std::cout<<*(it)<<" ";
    std::vector<int>::iterator itt=a.end();
    itt--;
    for(std::vector<int>::reverse_iterator itt=a.rend(); itt!=a.rbegin(); --itt){
        std::cout<<*(itt)<<" ";
    }   
    std::vector<int>::reverse_iterator ittt=a.rend();
    ittt--;
    std::cout<<*(ittt)<<" ";
    
    for(std::vector<int>::reverse_iterator ii=a.rbegin(); ii!=a.rend(); ++ii){
        std::cout<<*(ii)<<" ";
    }
    a.erase(a.begin()+1);
    a.erase(a.begin()+1,a.begin()+4);
    for each loop
    for(int num: a){
        std::cout<<num<<" ";
    }

    //Insert function

    std::vector<int> vi(2,50);
    vi.insert(vi.begin(),300);
    vi.insert(vi.begin()+1,2,100);
    std::vector<int> va={25,35,45,55,65};
    va.insert(va.begin()+1,a.begin(),a.begin()+3); 
    for(auto num:va){
        std::cout<<num<<" ";
    }   
    va.pop_back();  

    va.clear();
    std::cout<<va.size();
    va.swap(vi);
    std::cout<<va.size()<<" ";
    std::cout<<va.empty();
}
int main(){  
    explainVector();
    return 0;
}