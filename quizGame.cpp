#include <iostream>

int main(){
    std::string questions[]={"What year was C++ created?: ",
                             "Who invented C++?: ",
                             "What is the predecessor of C++?: ",
                             "C++ is a _____ language?: "};

    std::string options[][4]={{"A.1969","B.1975","C.1985","D.1989"},
                             {"A.Guido van Rossum","B.Bjarne Stroustrap","C.JOhn Carmack","D.Mark Zuckerberg"},
                             {"A.C","B.C+","C.C--","D.C#"},
                             {"A.Compiled","B.Interpreted","C.Machine","Scripting"}};

    char answerKey[]={'C','B','A','A'};    

    int sizeQues=sizeof(questions)/sizeof(questions[0]);
    int sizeOpti=sizeof(options[0])/sizeof(options[0][0]);
    char guess;
    int score=0;

    std::cout<<"**********************************QUIZ**********************************\n";

    for(int i=0;i<sizeQues;i++){
        std::cout<<"***************************************\n";
        std::cout<<questions[i]<<'\n';
        std::cout<<"***************************************\n";
        for(int j=0;j<sizeOpti;j++){
            std::cout<<options[i][j]<<'\n';
        }
            std::cin>>guess;
            guess=toupper(guess);
            if(guess==answerKey[i]){
                std::cout<<"Correct answer.\n\n";
                score++;
            }else{
                std::cout<<"Wrong answer!\n";
                std::cout<<"Correct answer is "<<answerKey[i]<<"\n\n";
            }        
    } 
    std::cout<<"*****************RESULTS****************\n";
    std::cout<<"*                                      *\n";     
    std::cout<<"****************************************\n";        
    std::cout<<"Correct answers="<<score<<'\n';
    std::cout<<"Total questions="<<sizeQues<<'\n';
    std::cout<<"You scored "<<(score/(float)sizeQues)*100<<"%";
    return 0;
}