#include <iostream>
#include <math.h>

class Solution{
private:
 int x1; //first root
 int x2; //second root
 int D; //Discriminant

public:
    void Discriminant(int a, int b, int c){
        int roots;
        D = (b*b)+(-4*a*c);
        if (D>0){
            std::cout << "two root in the discriminant" << std::endl;
            x1 = ((-b) - sqrt(D))/(a*2);
            x2 = ((-b) + sqrt(D))/(a*2);
            std::cout << "First root: " << x1 << "\nSecond root: " << x2 << std::endl;
        }
        else if(D==0){
            std::cout << "one root in the discriminant" << std::endl;
            x1 = (-b)/(a*2);
            std::cout << "First root: " << x1 << std::endl;
        }
        else{
            std::cout << "no roots" << std::endl;
        }
        return;
    }

};

int main(int args, char* arg[]){
    std::cout << args << std::endl;
    if (args < 4 || args > 4){
        std::cout << "You need to enter 3 values" << std::endl;
        return 0;
    }
}