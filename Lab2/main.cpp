#include "breakfast.h"

int main()
{
    Breakfast* breakfast = new Breakfast();

    breakfast->PrintBreakfast();

    delete breakfast;

    return 0;
}
