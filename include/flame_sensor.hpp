#if !defined(OPENFURNACE_FLAMESENSOR_HPP)
#define OPENFURNACE_FLAMESENSOR_HPP

class FlameSensor {
public:
    virtual bool is_flame() = 0;
};

#endif // OPENFURNACE_FLAMESENSOR_HPP