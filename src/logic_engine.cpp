#include "logic_engine.hpp"

#include "fan.hpp"
#include "feeder.hpp"
#include "heater.hpp"

#include "flame_sensor.hpp"
#include "fuel_sensor.hpp"
#include "temp_sensor.hpp"

Fan *fan;
Feeder *external_feeder;
Feeder *internal_feeder;
Heater *heater;

FlameSensor *flame_sensor;
FuelSensor *external_fuel_sensor;
FuelSensor *internal_fuel_sensor;
TemperatureSensor *internal_temperature_sensor;
TemperatureSensor *external_temperature_sensor;

void LogicEngine::init() {
}

void LogicEngine::run_logic() {
    heater_logic();
    fan_logic();
    feeder_logic();
}

void heater_logic() {
}

void fan_logic() {
    
}

void feeder_logic() {

}