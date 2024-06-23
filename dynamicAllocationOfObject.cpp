#include <iostream> 

class Hero{
    private:
        int health;
    public:
        char level;
        void setLevel(char ch){
            level=ch;
        }
        void setHealth(int h){
            health=h;
        }
        char getLevel(){
            return level;
        }
        int getHealth(){
            return health;
        }

};

int main(){

    //Static allocation
    Hero h1;
    h1.level='w';
    h1.setHealth(65);
    std::cout<<h1.level<<'\n';   ///returns the char not its ascii value because we are returning the .level directly without going to
                                //the getLevel function having return type as int for testing
    std::cout<<h1.getLevel()<<'\n';
    std::cout<<h1.getHealth()<<'\n';

    //Dynamic allocation
    Hero *h2=new Hero;
    (*h2).level='t';            //cannot use h2.level directly as h2 is a pointer which stroes the address,so dereferencing it gives the corresponding object
    std::cout<<"Level: "<<(*h2).level<<std::endl;
    (*h2).setLevel('r');
    std::cout<<"Level: "<<(*h2).getLevel()<<'\n';
    (*h2).setHealth(58);
    std::cout<<"Health: "<<(*h2).getHealth()<<'\n';
    //Convenient way to access members of an object through pointer.It is by using Arrow operator(->)
    //This operator combines dereferencing and memeber access in one step
    h2->level='i';
    std::cout<<"Level: "<<h2->level<<'\n';
    h2->setHealth(78);
    std::cout<<"health: "<<h2->getHealth();

    return 0;
}