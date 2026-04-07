#include <iostream>
#include <math.h>
#include <cstdlib>

class Solution{
private:
 float x1; //first root
 float x2; //second root
 float D; //Discriminant

public:
    void Discriminant(float a, float b, float c){
        D = (b*b)+(-4*a*c);
        if (D>0){
            std::cout << "two root in the discriminant" << std::endl;
            x1 = ((-b) + sqrt(D))/(a*2); std::cout << "first root:\n\t(" << -b << "+" << sqrt(D) << ")" << "/2*" << a << " = " << x1 << std::endl;
            x2 = ((-b) - sqrt(D))/(a*2); std::cout << "Second root:\n\t(" << -b << "-" << sqrt(D) << ")" << "/2*" << a << " = " << x2 << std::endl;
        }
        else if(D==0){
            std::cout << "one root in the discriminant" << std::endl;
            x1 = (-b)/(a*2); std::cout << "root:\n\t" << -b << "/2*" << a << " = " << x1 << std::endl;
        }
        else{
            std::cout << "no roots" << std::endl;
        }
        return;
    }

};

int main(int args, char* arg[]){
    float a, b, c;
    Solution sol;
    if (args < 4 || args > 4){
        std::cout << "You need to enter 3 values" << std::endl;
        return 0;
    }
    try{
        a = std::atof(arg[1]);
        b = std::atof(arg[2]);
        c = std::atof(arg[3]);

    }catch(std::exception *e){
        std::cout << e->what() << std::endl;
        return 0;
    }

    sol.Discriminant(a, b, c);

}