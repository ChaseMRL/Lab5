#ifndef RNG_H
#define RNG_H

class rng //creating class//

{
public:
	rng(); //constructor//
	~rng(); //destructor//

	void setranNum1(int ranNum1_); //get and set functions for the two random number generators//
	int getranNum1();

	void setranNum2(int ranNum2_);
	int getranNum2();

private:
	int ranNum1; //intializing random number generators
	int ranNum2;
};
#endif !RNG_H