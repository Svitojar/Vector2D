#pragma one;
#include "Vector2d.h"
#include <iostream>
#include <math.h>
#include <cmath>
namespace lesson_9
{
	using namespace std;
	Vector2d::Vector2d()
	{
		StartVectorX = 7;
		StartVectorY = 20;
		EndVectorX = 27;
		EndVectorY = 37;
	}

	Vector2d::Vector2d(int StartVectorX, int StartVectorY, int EndVectorX, int EndVectorY)
	{
		this->StartVectorX = StartVectorX;
		this->StartVectorY = StartVectorY;
		this->EndVectorX = EndVectorX;
		this->EndVectorY = EndVectorY;
	}

	int Vector2d::getStartVectorX()
	{
		return StartVectorX;
	}
	int Vector2d::getStartVectorY()
	{
		return StartVectorY;
	}
	int Vector2d::getEndVectorX()
	{
		return EndVectorX;
	}
	int Vector2d::getEndVectorY()
	{
		return EndVectorY;
	}

	double Vector2d::VectorLength()
	{
		return  sqrt(pow((StartVectorX - EndVectorX), 2) + pow((EndVectorX - EndVectorY), 2));
	}
	Vector2d::Vector2d(Vector2d&& other)
	{
		StartVectorX = other.StartVectorX;
		StartVectorY = other.StartVectorY;
		EndVectorX = other.EndVectorX;
		EndVectorY = other.EndVectorY;
	}
	Vector2d Vector2d::operator +(const Vector2d& other)
	{
		int StartVectorX = this->StartVectorX +other.StartVectorX;
		int StartVectorY = this->StartVectorY + other.StartVectorY;
		int EndVectorX = this->EndVectorX + other.EndVectorX;
		int EndVectorY = this->EndVectorY + other.EndVectorY;
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}

	Vector2d Vector2d::operator -(const Vector2d& other)
	{
		int StartVectorX = this->StartVectorX - other.StartVectorX;
		int StartVectorY = this->StartVectorY - other.StartVectorY;
		int EndVectorX = this->EndVectorX - other.EndVectorX;
		int EndVectorY = this->EndVectorY - other.EndVectorY;
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}

	Vector2d Vector2d::operator -()
	{
		Vector2d temp;
		temp.EndVectorX = -EndVectorX;
		temp.EndVectorY = -EndVectorY;
		temp.StartVectorX = -StartVectorX;
		temp.StartVectorY = -StartVectorY;
		return temp;
	}

	Vector2d Vector2d::operator +=(const Vector2d& other)
	{
		this->StartVectorX += other.StartVectorX;
		this->StartVectorY += other.StartVectorY;
		this->EndVectorX += other.EndVectorX;
		this->EndVectorY += other.EndVectorY;
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}

	Vector2d Vector2d::operator =(const Vector2d& other)
	{
		int a = other.StartVectorX;
		int b = other.StartVectorY;
		int c = other.EndVectorX;
		int d = other.EndVectorY;
		this->StartVectorX = a;
		this->StartVectorY = b;
		this->EndVectorX = c;
		this->EndVectorY = d;
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}

	Vector2d Vector2d::operator -=(const Vector2d& other)
	{
		this->StartVectorX -= other.StartVectorX;
		this->StartVectorY -= other.StartVectorY;
		this->EndVectorX -= other.EndVectorX;
		this->EndVectorY -= other.EndVectorY;
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}

	Vector2d Vector2d::operator *=(const Vector2d& other)
	{
		this->StartVectorX *= other.StartVectorX;
		this->StartVectorY *= other.StartVectorY;
		this->EndVectorX *= other.EndVectorX;
		this->EndVectorY *= other.EndVectorY;
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}

	void Vector2d::operator +(int a)
	{
		this->EndVectorX = EndVectorX + a;
		this->EndVectorY = EndVectorY + a;
		this->StartVectorX = StartVectorX + a;
		this->StartVectorY = StartVectorY + a;
	}
	void Vector2d::operator -(int a)
	{
		this->EndVectorX = EndVectorX - a;
		this->EndVectorY = EndVectorY - a;
		this->StartVectorX = StartVectorX - a;
		this->StartVectorY = StartVectorY - a;
	}
	void Vector2d::operator /(int a)
	{
		this->EndVectorX = EndVectorX / a;
		this->EndVectorY = EndVectorY / a;
		this->StartVectorX = StartVectorX / a;
		this->StartVectorY = StartVectorY / a;
	}
	void Vector2d::operator /=(int a)
	{
		this->EndVectorX /=  a;
		this->EndVectorY /=  a;
		this->StartVectorX /= a;
		this->StartVectorY /= a;
	}
	void Vector2d::operator *(int a)
	{
		this->EndVectorX = EndVectorX * a;
		this->EndVectorY = EndVectorY * a;
		this->StartVectorX = StartVectorX * a;
		this->StartVectorY = StartVectorY * a;
	}

	void Vector2d::operator +=(int a)
	{
		this->EndVectorX += a;
		this->EndVectorY += a;
		this->StartVectorX += a;
		this->StartVectorY += a;
	}
	void Vector2d::operator -=(int a)
	{
		this->EndVectorX -= a;
		this->EndVectorY -= a;
		this->StartVectorX -= a;
		this->StartVectorY -= a;
	}
	void Vector2d::operator *=(int a)
	{
		this->EndVectorX *= a;
		this->EndVectorY *= a;
		this->StartVectorX *= a;
		this->StartVectorY *= a;
	}
	Vector2d OtherClass::crossProduct(Vector2d a, Vector2d b)
	{
		int StartVectorX = a.getStartVectorX()*b.getStartVectorX();
		int StartVectorY = a.getStartVectorY()*b.getStartVectorY();
		int EndVectorX = a.getEndVectorX()*b.getEndVectorX();
		int EndVectorY = a.getEndVectorY()*b.getEndVectorY();
		return Vector2d(StartVectorX, StartVectorY, EndVectorX, EndVectorY);
	}
}