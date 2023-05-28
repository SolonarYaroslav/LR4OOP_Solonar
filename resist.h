#ifndef RESIST_H
#define RESIST_H

const int MAX_RESISTORS = 100;

struct Resistor {
    double resistance;
    double max_power;
};

void initResistor(Resistor& resistor);
void initResistors(Resistor* resistors, int count);
void showResistor(const Resistor& resistor);
void showResistors(const Resistor* resistors, int count);
void checkResistors(const Resistor* resistors, int count, double voltage);

#endif
