
#include "../GTALib/Car.h"

#include <gtest/gtest.h>

TEST(CarTest, whenInitialized_thenEngineIsTurnedOff)
{
    Car a_car = Car();

    ASSERT_FALSE(a_car.isStarted());
}

TEST(CarTest, givenAnUnstartedCar_whenStartEngine_thenEngineIsTurnedOn)
{
    Car a_car = Car();

    a_car.StartEngine();

    ASSERT_TRUE(a_car.isStarted());
}

TEST(CarTest, givenAStartedCar_whenStartEngine_ThenThrowEngineAlreadyStartedException)
{
    Car a_car = Car();
    a_car.StartEngine();

    ASSERT_THROW(a_car.StartEngine(), std::runtime_error);
}

TEST(CarTest, givenAStartedCar_whenAccelerateWithARate_ThenAccelerationIsEqualToRate)
{
    Car a_car = Car();
    a_car.StartEngine();
    double rate = 10.0;

    a_car.Accelerate(rate);

    ASSERT_DOUBLE_EQ(a_car.getAcceleration(), rate);
}

TEST(CarTest, givenAStartedCar_whenStopEngine_ThenEngineIsTurnedOff)
{
    Car a_car = Car();
    a_car.StartEngine();

    a_car.StopEngine();

    ASSERT_FALSE(a_car.isStarted());
}

TEST(CarTest, givenAnUnstartedCar_whenStopEngine_ThenThrowEngineNotStartedException)
{
    Car a_car = Car();

    ASSERT_THROW(a_car.StopEngine(), std::runtime_error);
}