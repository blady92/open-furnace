#if !defined(OPENFURNACE_FEEDER_HPP)
#define OPENFURNACE_FEEDER_HPP

class Feeder {
public:
    void start();
    void stop();
    bool is_running();
};

#endif // OPENFURNACE_FEEDER_HPP