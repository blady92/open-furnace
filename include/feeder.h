class Feeder {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual bool is_running() = 0;
};