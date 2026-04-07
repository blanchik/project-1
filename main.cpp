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
            x1 = ((-b) - sqrt(D))/(a*2);
            x2 = ((-b) + sqrt(D))/(a*2);
            
        }
    }

};

int main(){

}