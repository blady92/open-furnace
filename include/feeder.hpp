#if !defined(OPENFURNACE_FEEDER_HPP)
#define OPENFURNACE_FEEDER_HPP

class Feeder {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual bool is_running() = 0;
};

#endif // OPENFURNACE_FEEDER_HPP