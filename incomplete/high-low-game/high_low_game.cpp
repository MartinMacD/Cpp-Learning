#include <iostream>
#include <ctime>

int main(){
    std::srand(time(0));
    int user_num, rand_num, counter;

    counter = 0;
    rand_num = std::rand() % 100 + 1;

    std::cout << "Enter a number between 1 and 100" << std::endl;
    
    while(true){
        std::cin >> user_num;

        counter = counter + 1;

        if(user_num == rand_num){
            std::cout << "Congratulations you guessed the number! It took you " << counter << " guesses." << std::endl;
            break;
        }
        else if(user_num < rand_num){
            std::cout << "Your guess was too low, try again." << std::endl;
        }else if(user_num > rand_num){
            std::cout << "Your guess was too high, try again." << std::endl;
        }
    }
    
    return 0;
}
