#include "Car.h"

#include <stdexcept>

Car::Car()
    : is_started_(false)
    , acceleration_(0.0)
{
}


Car::~Car()
{
}

void Car::StartEngine()
{
    is_started_ = true;
}

void Car::StopEngine()
{
    if (isStarted())
        is_started_ = false;
    else
        throw std::runtime_error("The engine is already stopped.");
}

bool Car::isStarted() const
{
    return is_started_;
}

void Car::Accelerate(double rate)
{
    acceleration_ = rate;
}

double Car::getAcceleration()
{
    return acceleration_;
}
