#include <iostream>

void squarePattern(int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout << "* ";
        }
        std::cout << '\n';
    }
}

void rectanglePattern(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n; j++) {
            std::cout << "* ";
        }std::cout << '\n';
    }
}

void hollowRectangle(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n - 1; j++) {
            if (i == 0 || i == n-1){
                std::cout << "* ";
            } else {
                if (j == 0 || j == 2*n - 2){
                    std::cout << "* ";
                } else{
                    std::cout << "  ";
                }
                
            }
        }
        std::cout << '\n';
    }
}

void halfPyramidPattern (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            std::cout << "* ";          
        }
        std::cout << "\n";
    }
}

void appliedHalfPyramidPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                std::cout << "* ";
            } else {
                std::cout << "# ";
            }    
        }
        std::cout << '\n';
    }
}

void invertedHalfPyramid(int n) {
    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n-i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void appliedInvertedPyramid (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n-i) {
                std:: cout<< "* ";
            } else {
                std::cout << "# ";
            }
        }
        std::cout << '\n';
    }
}

void numericHalfpyramid (int n) {
    for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < i+1; j++) {
        std::cout << j+1 << " ";
    }
    std::cout << '\n';
 }}

 void invertedNumericHalfPyramid (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            std::cout << j+1 << " ";
        }
        std::cout << '\n';
    }
 }

void hollowInvertedHalfPyramid (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (i == 0 || j ==0 || j == n-i-1) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }
}

void FullPyramid (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 2*n-1; j++) {
            if (j < n-i-1 || j > n+i-1) {
                std::cout << "  ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << '\n';
    }
}

void hollowFullPyramid (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 2*n-1; j++) {
            if (j < n-i-1 || j > n+i-1) {
                std::cout << "  ";               
            } else if ((i != 0 && i != n-1) && (j > n-i-1 && j < n+i-1) ) {
                    std::cout << "  ";
            }
            else {
                std::cout << "* ";
            }
        }
        std::cout << '\n';
    }
}

                // Easier way

void hollowFullPyramid2 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            if (j == n-i-1 || j == n+i-1 || i == n-1) {
                std::cout << "* ";
            }
            else {
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
    std::cin >> n;
    hollowFullPyramid2(n);
    }

    return 0;
}