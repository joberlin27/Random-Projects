// Joshua Oberlin
// 9-10-2025

#include <iostream>
#include <random>

int main(){

    int min;
    int max;

    std::cout<<"Range minimum?"<<std::endl;
    std::cin>>min;

    std::cout<<"Range maximum?"<<std::endl;
    std::cin>>max;

    std::random_device rd; //random number from hardware
    std::mt19937 gen(rd()); //seed generator
    std::uniform_int_distribution<> distrib (min,max);  //establish range


    int randomValue = distrib(gen);

    std::cout<<"Random number between " << min << " and " << max <<"? Guess!" << std::endl;

    int guess;

    while (guess != randomValue){

        std::cout<<"Your guess?"<<std::endl;
        std::cin>>guess;

        if (guess < randomValue){
            std::cout<<"Too low!"<<std::endl;
        }

        else if (guess > randomValue){
            std::cout<<"Too high!"<<std::endl;
        }

    }

    std::cout<<"Correct! The number was "<< randomValue <<"!"<<std::endl;

}