#pragma one;
#include "Vector2d.h"
#include <math.h>
#include <iostream>
#include <cmath>

using namespace lesson_9;
using namespace std;
void main()
{
	Vector2d VectorA;
	Vector2d VectorB(10,18,103,74);
	cout << "VectorA begin in " << VectorA.getStartVectorX()<<":"<< VectorA.getStartVectorY() 
		<<" and finish in "<<VectorA.getEndVectorX()<<":"<< VectorA.getEndVectorX() << endl;
	cout <<"Length of the VectorA="<<VectorA.VectorLength()<< endl;
	cout << "VectorB begin in " << VectorB.getStartVectorX() << "^" << VectorB.getStartVectorY()
		<< " and finish in " << VectorB.getEndVectorX() << ":" << VectorB.getEndVectorX() << endl;
	cout << "Length of the VectorB=" << VectorB.VectorLength() << endl;

	VectorA + 5;
	cout <<"VectorA + 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;
	
	VectorA - 5;
	cout << "VectorA - 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA * 5;
	cout << "VectorA * 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA / 5;
	cout << "VectorA / 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA += 5;
	cout << "VectorA += 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA -= 5;
	cout << "VectorA -= 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA *= 5;
	cout << "VectorA *= 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA /= 5;
	cout << "VectorA /= 5" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA=-VectorA ;
	cout << "- VectorA" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	Vector2d VectorC = VectorA + VectorB;
	cout << "VectorC = VectorA + VectorB" << endl;
	cout << " Now VectorC begin in " << VectorC.getStartVectorX() << ":" << VectorC.getStartVectorY()
		<< " and finish in " << VectorC.getEndVectorX() << ":" << VectorC.getEndVectorX() << endl;

	VectorC = VectorC - VectorA;
	cout << "VectorC = VectorC - VectorA" << endl;
	cout << " Now VectorC begin in " << VectorC.getStartVectorX() << ":" << VectorC.getStartVectorY()
		<< " and finish in " << VectorC.getEndVectorX() << ":" << VectorC.getEndVectorX() << endl;

	VectorA += VectorB;
	cout << "VectorA += VectorB" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;
	
	VectorA -= VectorB;
	cout << "VectorA -= VectorB" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;

	VectorA *= VectorB;
	cout << "VectorA *= VectorB" << endl;
	cout << " Now VectorA begin in " << VectorA.getStartVectorX() << ":" << VectorA.getStartVectorY()
		<< " and finish in " << VectorA.getEndVectorX() << ":" << VectorA.getEndVectorX() << endl;


	cin.get();
	cin.get();
}