#include <iostream>
#include "resist.h"

using namespace std;

int main() {
    Resistor r;
    initResistor(r);
    showResistor(r);

    const int count = 2;
    Resistor resistors[MAX_RESISTORS];
    initResistors(resistors, count);
    showResistors(resistors, count);

    double voltage;
    cout << "Voltage (V): ";
    cin >> voltage;
    checkResistors(resistors, count, voltage);

    return 0;
}
/*
Появился, значит, в Зоне Чёрный сталкер. К лагерю ночью повадился ходить и там сует руку в палатку и говорит:
«Водички попить!»
А если не дашь хлебнуть из фляжки или наружу полезешь — пришибет!
А раз мужик один решил пошутить: вылез тихо из палатки, надел кожаную перчатку и полез к соседям в палатку. 
Полез, значит, и попрошайничает жалостно: 
«Водички, водички попить…» 
А тут из палатки навстречу высовывается рука и за горло его — цап!
И сиплый голосок отзывается тихонько: 
«А тебе моя водичка зачем нужна?!»
*/
