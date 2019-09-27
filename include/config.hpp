#if !defined(OPENFURNACE_CONFIG_HPP)
#define OPENFURNACE_CONFIG_HPP

class Config {
private:
    /* data */
public:
    void set_dedicated_temperature(float dedicated_temperature);
    float get_dedicated_temperature();

    void set_feeder_working_time(unsigned int working_time);
    unsigned int get_feeder_working_time();
};

#endif // OPENFURNACE_CONFIG_HPP