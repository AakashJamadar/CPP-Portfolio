#include <iostream>  

//To include other files in thsi file,we use
//#include "intro.cpp"

class Hero{     //No need to create new class when included
    public:
        int health;
        double damage;
        char level;

    void attack(){
        std::cout<<"Attack\n";
    }
};

//Size of a empty class is 1 byte (least memory allocation possible)
//sizeof() prints the size of the type and not the memory allocated to it
//Class deon't take up memeory
//The objects when created takes the memeory depending on the number and type of variables present in the class (private variable takes up memory too)

//size of class is allocated a byte  to distinguish the instances of the object

//Remember class doesn't take memory,it's the object when instantiated takes up the memory

int main(){     //Comment the include file because there will be 2 int main

    //Hero wizard;

    std::cout<<sizeof(Hero);   //Outputs 4 because of the int present in Hero class;

    return 0;
}

//Size of class is dependent wholly on the size of the attributes declared in the class

//If class had int,double,char  size of the class would be 24 bytes

//                  How
//Because of padding 
//paddding in oops refers to the extra margin being added after the data structures or variables to properly allign tha data in memory

//              Why padding is neeeded
//1.Alignment requirements:Many processors access memory more efficiently if data is aligned on certain byte boundaries. 
//For instance, a 4-byte integer is typically accessed more efficiently if it is aligned on a 4-byte boundary.

//2.Performance: Misaligned data can lead to additional CPU cycles being used to read or write memory, thus degrading performance.

//3.Hardware Constraints: Some hardware platforms require data to be aligned in memory and can even raise exceptions if data is misaligned.

//                  ************Rules to add padding (To determine size of the class)************
//If class had char int char,compiler adds padding of 3 bytes after the fist char to align the upcoming integer to a 4-byte boundary and also
//adds 3 byte padding after the 3rd char to make th etotals ize if the cass to be a multiple of the largest allignment requirement
// we add the last padding to ensure that the further members can also be alligned

//If we had int,double,char   we add 3 bytes after int and 7 bytes after the char to make it 24 bytes(multiple of largest allignment requirement)
//If the upcoming member was a int the compiler now re alligns the padding to 3 bytes instead of 7 to save memory

//                              Greedy alignment
//In this processs we arrange the data memebrs in the order of their sizes to ensure minimum padding is added
//Taking above example we can arrange int char char ,now the padding will only be 2 bytes at the end to make the total size multiple of the largest allignment requirement

