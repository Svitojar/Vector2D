#pragma once
namespace lesson_9
{
	class OtherClass;
	class Vector2d
	{
	public:
		Vector2d();
		Vector2d(int StartVectorX, int StartVectorY, int EndVectorX, int EndVectorY);
		Vector2d(Vector2d&& other);
		Vector2d operator +(const Vector2d& other);
		Vector2d operator -(const Vector2d& other);
		Vector2d operator - ();
		Vector2d operator +=(const Vector2d& other);
		Vector2d operator -=(const Vector2d& other);
		Vector2d operator *=(const Vector2d& other);
		Vector2d operator =(const Vector2d& other);
		void operator +(int a);
		void operator -(int a);
		void operator /(int a);
		void operator /=(int a);
		void operator +=(int a);
		void operator -=(int a);
		void operator *=(int a);
		void operator *(int a);
		int getStartVectorX();
		int getStartVectorY();
		int getEndVectorX();
		int getEndVectorY();
		double VectorLength();
	private:
		int StartVectorX;
		int StartVectorY;
		int EndVectorX;
		int EndVectorY;
	};
	class OtherClass
	{
	public:
		static Vector2d crossProduct(Vector2d a, Vector2d b);
	};
}
