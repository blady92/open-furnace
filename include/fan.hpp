#if !defined(OPENFURNACE_FAN_HPP)
#define OPENFURNACE_FAN_HPP

class Fan {
    public:
    void set_power(unsigned int power);
    unsigned int get_power();
};

#endif // OPENFURNACE_FAN_HPP
