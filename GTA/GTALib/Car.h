#ifndef _CAR_H_
#define _CAR_H_

class Car
{
public:
    Car();
    virtual ~Car();

    void StartEngine();
    void StopEngine();

    void Accelerate(double acceleration);
    double getAcceleration();

    bool isStarted() const;

private:
    bool is_started_;
    double acceleration_;
};

#endif //_CAR_H_