#include <iostream>

void fullPyramid (int n) {
    for (int i = 0; i < n; i++) {
        //Spaces
        for (int j = 0; j < n-i-1; j++){
            std::cout << " ";
        }
        // Stars
        for (int j = 0; j < 2*i+1; j++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}

void fullPyramid123Stars (int n) {
    for (int i = 0; i < n; i++) {
        //Spaces
        for (int j = 0; j < n-i-1; j++){
            std::cout << " ";
        }
        // Stars
        for (int j = 0; j < i+1; j++) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }
}

// Method - 2 (Mine)

void fullPyramid123Stars1 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            if (j > n-i-2 && j < n+i && (i+j)%2 == 0) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
}

void invertedPyramid123Stars (int n) {
    for (int i = 0; i < n; i++) {
        
        //Spaces
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        //Stars
        for (int j = 0; j < n-i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

// Combining pyramid and inverted pyramid we get Rhombus

void rhombus (int n) {
    for (int i = 0; i < n; i++) {
        //Spaces
        for (int j = 0; j < n-i-1; j++){
            std::cout << " ";
        }
        // Stars
        for (int j = 0; j < i+1; j++) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        
        //Spaces
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        //Stars
        for (int j = 0; j < n-i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void hollowPyramidLikeA (int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < 2*n-1; j++) {
            if (j == n-i-1 || j == n+i-1 ) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
}

// Method - 2 (Altering in pyramid)

void hollowPyramidLikeA1 (int n) {
    for (int i = 0; i < n; i++) {
        //Spaces
        for (int j = 0; j < n-i-1; j++){
            std::cout << " ";
        }
        // Stars (altering in this)
        for (int j = 0; j < i+1; j++) {
            // printing stars in only first and last column
            if (j == 0 || j == i+1-1) {
                std::cout << "* ";
            } else{
                std::cout << "  ";
            }
            
        }
        std::cout << '\n';
    }
}

// Just using altering method

void invertedHollowPyramidLikeV (int n) {
    for (int i = 0; i < n; i++) {
        
        //Spaces
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        //Stars
        for (int j = 0; j < n-i; j++) {
            if (j == 0 || j == n-i-1) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
            
        }
        std::cout << "\n";
    }
}

// Inverted Hollow Pyramid Homework (using 2n-2i-1 formula for spaces)

void invertedHollowPyramidLikeV1 (int n) {
    for (int i = 0; i < n; i++) {
        //Spaces
        for (int j = 0; j < i+1;  j++) {
            std::cout << " ";
        }
        //Stars
        for (int j = 0; j < 2*n-2*i-1; j++) {
            if (j == 0 || j == 2*n-2*i-1-1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
            
        }
        std::cout << '\n';
    }
}

void hollowRhombus (int n) {
    // Combining both hollow pyramid and inverted hollow pyramid
    for (int i = 0; i < n; i++) {
        //Spaces
        for (int j = 0; j < n-i-1; j++){
            std::cout << " ";
        }
        // Stars (altering in this)
        for (int j = 0; j < i+1; j++) {
            // printing stars in only first and last column
            if (j == 0 || j == i+1-1) {
                std::cout << "* ";
            } else{
                std::cout << "  ";
            }
            
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        
        //Spaces
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        //Stars
        for (int j = 0; j < n-i; j++) {
            if (j == 0 || j == n-i-1) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
            
        }
        std::cout << "\n";
    }
}

int main () {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        invertedHollowPyramidLikeV1(n);
    }
    return 0;
}