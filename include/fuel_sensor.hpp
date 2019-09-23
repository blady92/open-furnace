#if !defined(OPENFURNACE_FUELSENSOR_HPP)
#define OPENFURNACE_FUELSENSOR_HPP

class FuelSensor {
public:
    virtual bool is_fuel() = 0;
};

#endif // OPENFURNACE_FUELSENSOR_HPP