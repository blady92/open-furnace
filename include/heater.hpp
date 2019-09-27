#if !defined(OPENFURNACE_HEATER_HPP)
#define OPENFURNACE_HEATER_HPP

class Heater {
public:
    void set_power(unsigned int power);
    unsigned int get_power();
};

#endif // OPENFURNACE_HEATER_HPP