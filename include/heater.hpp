#if !defined(OPENFURNACE_HEATER_HPP)
#define OPENFURNACE_HEATER_HPP

class Heater {
public:
    virtual void set_power(int power) = 0;
    virtual int get_power() = 0;
};

#endif // OPENFURNACE_HEATER_HPP