#ifndef ORANGE_H
#define ORANGE_H
#include <string>

class Orange : public CitrusFruit {
public:
Orange(float ph) : CitrusFruit(ph){}
const char * getName();
float getPh();
void PrintTheFruits(CitrusFruit &fruit){
cout << "fruit is a " << fruit.getName()
<< " and has a pH " << fruit.getPh() << endl;
}
};
#endif
