#include <iostream>

int main(){
    //dynamic memory=memory that is allocated after the program is already compiled and running.
    //use the 'new' operator to alloctae memory in heap rathe than the stack.

    //useful when we don't know how much memory we will need.
    //Makes our program more flexible especially when accepting user input

    int* pNum=0;  //null pointer
    pNum=new int; //dynamic memory
    *pNum=32;

    std::cout<<"Address: "<<pNum<<'\n';  //adress of the heap
    std::cout<<"Value: "<<*pNum<<'\n';   //value present in that heap

    delete pNum; //A good practice is to delete the pointer that has dynamically allocated memory associated with it.

    char* pGrades=NULL;
    int size;

    std::cout<<"How many grades to enter in?: ";
    std::cin>>size;

    pGrades=new char[size];

    for(int i=0;i<size;i++){
        std::cout<<"Enter grade#"<<i+1<<": ";
        std::cin>>pGrades[i];
    }

    for(int i=0;i<size;i++){
        std::cout<<pGrades[i]<<" ";  //or use pGrades+i(prints i'th element)
    }

    delete[] pGrades;  //deleting array to save it from memory leak.
    return 0;          //if dynamically allocated memory is not deleted,the memory stays there untill all the memory in the heap 
    // gets consumed causing the program to crash

}