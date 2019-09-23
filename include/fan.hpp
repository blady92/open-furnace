#if !defined(OPENFURNACE_FAN_HPP)
#define OPENFURNACE_FAN_HPP

class Fan {
    public:
    virtual void set_power(int power) = 0;
    virtual int get_power() = 0;
};

#endif // OPENFURNACE_FAN_HPP
