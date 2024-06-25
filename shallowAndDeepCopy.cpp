#include <iostream> 
#include <cstring>

//Shallow copy and Deep copy 

//Default constructor does the shallow copy 

class Hero{
    public:
        int health;
        char level;
        char *name;  //using pointer instead of char name[100] becuse it is good practice to use pointer to allocate memory in heap(as heap memory is high)

        Hero(){
            char name[100];   //constructor gets called when object is created,so char array will also be created then
        }
        //Copy constructor 
        Hero(Hero &obj){
            char *arr=new char[strlen(obj.name)+1];      //Here +1 is for null terminator
            strcpy(arr,obj.name);                       //strcpy handles the null terminator by copying it too along the name(obj.name had null terminator)
            this-> name=arr;           //this-> means current object and here current object is h2 ,,also assigns the current obj to point to arr address
            //Above,name works too as we are accessing within the function,added this-> for clarity
        }
        void setHealth(int health){
            this-> health=health;
        }
        void setLevel(char level){
            this-> level=level;
        }
        void setName(char name[]){
            strcpy(this-> name,name);
        }
        void print(){
            std::cout<<"[Name:"<<name;
            std::cout<<" ,Health:"<<health;
            std::cout<<" ,Level:"<<level<<"]"<<std::endl<<'\n';;
        }
};


int main(){
    Hero h1;
    h1.setHealth(50);
    h1.setLevel('c');
    char name[7]="Aakash";   //strcpy,strlrn,strcat rely on the extra 1 space of the char array to work because that extra space contains
    //null terminator ('\0')  
    //this null terminator marks the end of the string and is essential for the string manipulation functions to determine string's length and boundaries
    //Even if we don't mention size of the array(here 7,,,,,6 for the name and one for null terminator) the compiler automaically calculates
    //the size needed to accomodate the string literal plus a null terminator
    //If we explicitly type big size,extra spaces after the null terminator will contain garbage values
    h1.setName(name);
    h1.print();

    //use deafault copy constructor(by commenting our explicitly created copy constructor,,we have none here btw)
    Hero h2(h1);
    //Hero h2=h1;  
    //Both does the same work
    h2.print();
    h1.name[0]='S';
    h1.print();
    h2.print();   //When we changed the fist letter of h1's name,it affected the h2's name too,,This is because of the default copy constructor doing the shallow copy
    
    //Why did this happen?What is Shallow copy?
    //This happened because of the shallow copy.Shallow copy duplicates the values of the members from one object to another.If one of the memebers had a
    //pointer, then the shallow copy copies the address instead of copying the data that the pointer is pointing to.
    //Therefore both original and the copied objects will point to the same address.so,any modifications in the first object will 
    //affect the second object too as both point to the same address(here,the address of the array is stored in both copy and original object
    //instead of its data therefore modifications is happened to the single array as both have the same address strored in their object memory)

    //What is the solution?   
    //Deep copy
    //What is Deep copy and how can it be achieved?
    //Deep copy duplicates the actual data pointed by the pointer(here,by creating new array),this ensures that bot original and copied 
    //objects will have separate dynamically allocated memories for their members,thereore modification in one object doesn't affect the other object's member
    //(here,the new copy constructor creates new array and strores its address in the new pointer)

    //How to do deep copy?
    //creating explicit copy constructor to create a new array
    //now modification in h1 doesn't affect h2 as we have created new array to store the name of new object and its address in arr pointer

    return 0;
}