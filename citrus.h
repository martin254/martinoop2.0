#ifndef CITRUS_H
#define CITRUS_H
#include<string>

class CitrusFruit{
protected:
  float ph;
public:
  CitrusFruit(float ph) : ph(ph){}
  float getPh();
  const char * getName();
};
#endif
