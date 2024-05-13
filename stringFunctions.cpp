#include <iostream>

int main(){
    // std::string name;
    // std::cout<<"Enter your name.";
    // std::getline(std::cin,name);

    // name.length();  //gives string length.

    // name.empty();   //returns a boolean value.
    // if(name.empty()){
    //     std::cout<<"You haven't entered anything.";
    // }

    // name.clear();   //clears the string.

    // name.append("sir");  //concatenates two strings.
    // std::cout<<name;

    //name=name.at(4);   //to access a part of string
    // name=name[3];       //other way to accesss it.
    // std::cout<<name;

    // name.insert(1,"aak");  //to insert a string at specified location.
    // std::cout<<name;

    //std::cout<<name.find("  ");  //to find a substring(use "") or a character (use ''),mor multi space use "",single space is treated as a char

    //name=name.erase(0,2); //we can't store the erased part as it returns the modified string 
    // std::string neww=name.erase(0,2);  //neither like this as it returns the modified string and the neww gets equated to modified string
    // std::cout<<neww;  //Conclusion:erase() function retruns the modified string.
    //in(0,2) 2 is exlusive

    // std::string s1="hatra  ";
    // std::string s2="hatrz ";
    // std::cout<<s1.compare(s2);
    //compare function compares 2 strings and it returns an integer value.
    //In s1.compare(s2);
    //if s1 and s2 strings are identical comare function returns 0

    //if string length of s1 string was smaller than that of s2 then compare function returns a number <0
    //if s1 had same characters compared to s2 untill s1's string ends,it returns s2.size()-s1.size()
    //if it had different characters then it returns -1 irrespective of the length difference of 2 strings
    //if s1 string had space after its character it doesn't return differences in length integer(when s1<s2) instead it returns +/-1
    //if it reads space in s2 before s1's length ends it returns positive value as it reads space

    //if s1>s2 vice versa of all these.

    //IF BOTH STRINGS HAD SAME LENGTH THEN THEY SEE THE FIRST CHARACTER THAT DOESN'T MATCH AND SMALLER CHARACTER VALUE STRING IS DECLARED AS SMALLER

    //SPACE ADDED AFTER THE STRING COUNTS IF BOTH STRINGS ARE SAME
    //SPACE ADDED AFTER THE STRING DOESN'T COUNT IF BOTH STRINGS AREN'T SAME EVEN IF THEY HAD SAME LENGTH AS LOWEST VALUE STRING IS COUNTED AS SMALLER

    //SUB STRING  Syntax(str.substr(pos,len)) position,length
    // std::string str="i am there sir";
    // std::cout<<str.substr(3,9);
    //if len is not passed as a parameter,it is counted as size()
    //what if size() in length(len) is a big  number,it returns the whole string starting form the position(Pos)

    //Time-complexity of substr is O(n)

    //PROBLEMS ON SUBSTRING:NEW FILE

    std::string str="i am there in here";
    std::string s2="jioju";
    //std::cout<<str.replace(0,5,"hello")<<'\n'; //after replacing str gets converted to the remaining string
    //std::cout<<str.replace(2,5,s2);
    //std::cout<<str.replace(0,4,s2,0,3);
    //std::cout<<str.replace(0,4,"to you",6); //replaces first 4 character sof str with  3 characters of to you
    std::cout<<str.replace(2,6,2,'#');   //replaces the 2th to 6 th index of string str with 2 #(the replacing part in this syntax can only be character)
    //no string. Therefore the syntax is str.replace(int,int,int,const char [5]);
    return 0;
}