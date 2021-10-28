#include <iostream>
#include <random>

#include "breakfast.h"

void Breakfast::PrintBreakfast()
{
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution randomDistribution(0, 1);
    for(int i = 0; i< 5; i++)
    {
        std::cout<< (randomDistribution(randomEngine) ? "apple" : "banana") <<std::endl;
    }

}
