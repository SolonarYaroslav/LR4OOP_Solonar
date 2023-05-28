#include <iostream>
#include "resist.h"

using namespace std;

void initResistor(Resistor& resistor) {
    cout << "Enter resistance (Ohm): ";
    cin >> resistor.resistance;
    if (resistor.resistance < 0) {
        resistor.resistance = 0;
    }

    cout << "Enter max power (Watt): ";
    cin >> resistor.max_power;
    if (resistor.max_power < 0) {
        resistor.max_power = 0;
    }
    cout << endl;
}

void initResistors(Resistor* resistors, int count) {
    for (int i = 0; i < count; i++) {
        cout << "Resistor #" << i+1 << endl;
        initResistor(resistors[i]);
    }
}

void showResistor(const Resistor& resistor) {
    cout << "Resistance = " << resistor.resistance << " Ohm" << endl;
    cout << "Max power = " << resistor.max_power << " Watt" << endl;
}

void showResistors(const Resistor* resistors, int count) {
    for (int i = 0; i < count; i++) {
        cout << "Resistor #" << i+1 << endl;
        showResistor(resistors[i]);
        cout << "==============================================" << endl;
    }
}

void checkResistors(const Resistor* resistors, int count, double voltage) {
    for (int i = 0; i < count; i++) {
        double current = voltage / resistors[i].resistance;
        double power = current * current * resistors[i].resistance;
        if (power > resistors[i].max_power) {
            cout << "Resistor #" << i+1 << " has been burned" << endl;
        } else {
            cout << "Resistor #" << i+1 << " is good" << endl;
        }
    }
}
