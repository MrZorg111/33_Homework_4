#include <iostream>
#include "function.h"

int main() {
    int v(0);
    std::string answer("0");
    std::cout << "Выберите тип вводимых данных: \n"
              << "Int = 1\n"
              << "Double = 2\n"
              << "Float = 3" << std::endl;
    std::cin >> v;

    switch(v) {
        case 1: {
            int data(0), sum(0);    
            std::cout << "Enter the data to calculate the arithmetic mean: " << std::endl;
            do{
                loading(data);
                std::cout << "To complete the data entry, enter stop." << std::endl;
                std::cin >> answer;
            }while(answer != "stop");
            arifm_mean(sum);
        break;
        }
        case 2: {
            double data(0), sum(0);    
            std::cout << "Enter the data to calculate the arithmetic mean: " << std::endl;
            do{
                loading(data);
                std::cout << "To complete the data entry, enter stop." << std::endl;
                std::cin >> answer;
            }while(answer != "stop");
            arifm_mean(sum);
        break;
        }
        case 3: {
            float data(0), sum(0);    
            std::cout << "Enter the data to calculate the arithmetic mean: " << std::endl;
            do{
                loading(data);
                std::cout << "To complete the data entry, enter stop." << std::endl;
                std::cin >> answer;
            }while(answer != "stop");
            arifm_mean(sum);
        break;
        }
    }
    return 0;
}