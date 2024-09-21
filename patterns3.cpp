#include <iostream>

// Start and end row should have space 

void hollowRhombusInsideRectangle (int n) {
    for (int i = 0; i < 2*n; i++) {
        for (int j = 0; j < 2*n+1; j++) {
            if (i < n) {
                if (j > n-i-1 && j < n+i+1) {
                    std::cout << " ";
                } else {
                    std::cout << "*";
                }
            } else {     
                if (j > i-n && j < 3*n-i) {
                    std::cout << " ";
                } else {
                    std::cout << "*";
                }
            } 
        }
        std::cout << '\n';
    }
}

// Method - 2

void hollowRhombusInsideRectangle1 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < 2*i+1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < n-i; j++) {
            std::cout << "*";
        }
        std::cout << '\n';  
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < 2*n-2*i-1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i+1; j++) {
            std::cout << "*";
        }
        std::cout << '\n';  
    }
}

void randomPattern1 (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*i+1; j++) {
            if (j%2 == 0) {
                std::cout << i+1 << " ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }
}

// Method - 2 (Mine)

void randomPattern1A (int n) {
    for (int i = 0; i < n; i++) {
        std::cout << i+1 << " ";
        for (int j = 0; j < i; j++) {
            std::cout << "* " << i+1 << " ";
            
        }
        std::cout << '\n';
    }
}

// Method - 3

void randomPattern1B (int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            if (j == i) {
                std::cout << i+1;
            }else {
                std::cout << i+1 << "*";
            }
            
        }
        std::cout << "\n";
    }
}

void randomPattern2 (int n) {
    for (int i = 0; i < n; i++) {
        for ( int j = 0; j < 2*n-2*i-1; j++) {
            if (j % 2 != 0) {
                std::cout << "*";
            } else {
                std::cout << n-i;
            }  
        }
        std::cout << "\n";
    }
}
 
int main () {
    int t;
    std::cin>> t;
    while (t--) {
        int n;
        std::cin >> n;
        randomPattern2(n);
    }
    return 0;
}