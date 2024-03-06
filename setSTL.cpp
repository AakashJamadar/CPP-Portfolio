#include <iostream>
#include <set>
#include <unordered_set>

//SET
//stores everything im sorted order
//stores unique

void explainSet(){
    std::set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2);
    s.insert(4);
    s.insert(3); //{1,2,3,4}
    std::set<int>::iterator it=s.find(3); //finds and returns an iterator which points towards 3
    std::cout<<*(it)<<" ";
    std::set<int>::iterator itt=s.find(65); //65 isn't here,so iterator poits to end(s.end()),hence output will be last element.
    std::cout<<*(itt)<<" "; 
    s.erase(5); //erases 5,takes logarithmic time
    int cnt=s.count(1); //returns the count of occurrences.(0/1(as occurence is unique))
    std::set<int>::iterator it1=s.find(1);
    std::set<int>::iterator it2=s.find(4);
    s.erase(it1,it2);
    for(int num:s){
        std::cout<<num<<" "<<std::endl;;
    } 
    //lower_bound() and upper_bound() works in the same way as in vector
    std::set<int>::iterator it3=s.lower_bound(2);
    auto it4=s.upper_bound(3); 
    std::cout<<*(it3)<<" "<<*(it4);  //returns the value iterator is pointing to,not the index 
    //cannot get the index of the iterator in set unlike vector 

}

//MultiSet:sorted but not unique

void explainMultiSet(){
    std::multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1,1,1}
    ms.erase(1);  //erases all 1's  //erase(1) is:erase element,so it erases all the elements (here,all 1's),,erase(find()) is erase iterator since find() returns an iterator
    int cnt=ms.count(1);  //counts the number of 1's in the multiSet
    std::multiset<int>::iterator it=ms.erase(find(1)); //find() will return an iterator pointing to the first occurence of the element.if the element is not present,it returns ms.end().
    //Therefore ms.erase(find(1)) will erase first occurence of '1',continue..
    //and returns an iterator pointing to the element following the one that was erased(if there are 2 elements,it erases first one and points to next one). If the value is not found, it returns ms.end().

    std::cout<<*(it);// for it=ms.find   *(it) is 'N'(just like lower bound function).,,,  *(found element is element itself).
    //for it=erase(find()) ,,*(it)=next element if element is present,,,last element if element is not present.
    std::multiset<int>::iterator itt=ms.erase(ms.find(1),std::next(ms.find(1),2)); 
    //finds first 1 and finds 2 places after 1 then erases first 1 and next element as last is not included
    //*(itt) if element is absent *(itt)='N',,,,if element is present *(itt)prints next element after erasing range(remember not includes lat element)
    //if it exactly completest the range *(itt) returns n(now N will be 2 less as it erases last 2 elements),,,,if it completes half range it gives mixed values like last elment or N after erasing half range
    //rest all functions same as set
    }

    //Unorderd set

    void explainUSet (){
        std::unordered_set<int> us;
        //it does not stores in the sorted order,but it stores unique.
        //lower_bound and upper_bound functions don't work here as the set is not in sorted order
        //The elements will be displayed in an order determined by their hash values and their positions in the hash table buckets.
        //Most cases time complexity is O(1) for all opertaions but
        //in worst cases,when there are collisions,it goes for O(N) linear time ..next line
        //when data is given in such a way that they want you to explore the worst case.
    }

int main(){
    //explainSet();
    explainMultiSet();

    return 0;
}