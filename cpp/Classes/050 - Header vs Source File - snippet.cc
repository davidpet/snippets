// --------- Class Prototype (typically in "Car.h" or similar) ---------

class Car {
private:
    int speed;
    int maxSpeed;

public:
    // Constructor
    Car(int max);

    // Member function prototypes
    void accelerate(int amount);
    void decelerate(int amount);
    int currentSpeed() const;
};

// ---------------------------------------------------------------------
// --------- Implementation (typically in "Car.cc" or similar) ---------

Car::Car(int max) : speed(0), maxSpeed(max) {}

void Car::accelerate(int amount) {
    speed += amount;
    if (speed > maxSpeed) {
        speed = maxSpeed;
    }
}

void Car::decelerate(int amount) {
    speed -= amount;
    if (speed < 0) {
        speed = 0;
    }
}

int Car::currentSpeed() const {
    return speed;
}

// ---------------------------------------------------------------------
