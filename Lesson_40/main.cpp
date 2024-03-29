#include <iostream>
#include <iomanip>

using namespace std;


class Trader {
    public: 
        Trader(double);

        void tripleBonus();

        double getBonus();

    private: 
        double bonus;
};

Trader::Trader(double initial_bonus) {
    bonus = initial_bonus;
}

void Trader::tripleBonus() {
    bonus *= 3;
}

double Trader::getBonus() {
    return bonus;
}

void valueBoostBonus(Trader valueTrad) {
    cout << "Before, valueTrad: " << valueTrad.getBonus() << endl;
    valueTrad.tripleBonus();
    cout << "Afer, valueTrad: " << valueTrad.getBonus() << endl;
}

void refBoostBonus(Trader& refTrad) {
    cout << "Before, refTrad: " << refTrad.getBonus() << endl;
    refTrad.tripleBonus();
    cout << "After, refTrad: " << refTrad.getBonus() << endl;
    return;
}
// it's not an object it's a pointer to an object => two solutions:
// (*pTrad).getBonus()
// *pTrad->getBonus()

void pointerBoostBonus(Trader* pTrad) {
    cout << "Before, pTrad: " << pTrad->getBonus() << endl;
    pTrad->tripleBonus();
    cout << "After, pTrad: " << pTrad->getBonus() << endl;
    return;
}


int main(int argc, const char * argv[]) {
    Trader trader(1000000.01);

    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "Trader initial bonus: " << trader.getBonus() << endl;

    valueBoostBonus(trader);
    cout << "Value, bonus now: " << trader.getBonus() << endl;

    refBoostBonus (trader);
    cout << "Ref, bonus now: " << trader.getBonus() << endl;

    pointerBoostBonus (&trader);
    cout << "Pointer, bonus now: " << trader.getBonus() << endl;

    return 0;
}