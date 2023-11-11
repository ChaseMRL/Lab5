#include "rng.h"

rng::rng()
{
	ranNum1 = 0; //initializing the randum numbers//
	ranNum2 = 0;
}
rng::~rng() //destructor//
{
}

void rng::setranNum1(int ranNum1_) //get and set function stuff//
{
	ranNum1 = ranNum1_;
}

void rng::setranNum2(int ranNum2_)
{
	ranNum2 = ranNum2_;
}

int rng::getranNum1()
{
	return ranNum1;
}

int rng::getranNum2()
{
	return ranNum2;
}