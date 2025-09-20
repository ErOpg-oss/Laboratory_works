#include <iostream>

int main() {
    int stops;
    int cost = 5;
    int total = 0;

    std::cout << "Введите количество остановок: ";
    std::cin >> stops;
    if (stops >= 0)
    {
        for (int i = 1; i <= stops; ++i) 
        {
            total += cost;
        }
        std::cout << "Общая стоимость проезда: " << total << " рублей." << std::endl;
    }
    else{
        std::cout<<"Число остановок отрицательное"<<std::endl;
    }

    return 0;
}

