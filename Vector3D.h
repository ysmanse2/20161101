#pragma once
//
//#include <iostream>
//#include <string>
//#include <set>
//#include <cassert>
//
//
//class Vector3D { // vectorND
//public:
//	int x_, y_, z_;
//	int *v_; // dynamic array with n components
//	std::vector<int> values_; // use this if you wnat
//
//	Vector3D(const int& N_input) {
//
//	}
//
//	Vector3D () : x_(0), y_(0), z_(0)
//	{}
//
//	Vector3D(const int& x_input, const int& y_input, const int& z_input) : x_(x_input), y_(y_input), z_(z_input)
//	{
//		//x_ = x_input;
//		//y_ = y_input;
//		//z_ = z_input;
//	}
//
//	Vector3D operator+(const Vector3D& intput) 
//	{
//
//		Vector3D vec;
//
//		vec.x_ = this->x_ + intput.x_;
//		vec.y_ = this->y_ + intput.y_;
//		vec.z_ = this->z_ + intput.z_;
//
//		return vec;
//
//	}
//
//	int operator*(const Vector3D& intput)
//	{
//
//		int ans;
//
//		ans = this->x_ * intput.x_;
//		ans += this->x_ * intput.x_;
//		ans += this->x_ * intput.x_;
//
//		return ans;
//
//	}
//
//
//	//std::ostream& operator<< (std::ostream& os, const Vector3D& vec)
//	//{
//	//	std::cout << vec.x << " " << vec.y << " " << vec.z_ << std::endl;
//	//}
//
//};