#pragma once

#include <iostream>
#include <vector>

using namespace std;

class VectorND { // vectorND
public:
	
	std::vector<int> values_; // use this if you wnat

	VectorND()
	{}


	VectorND(const std::vector<int>& _values_input) {

		for (vector<int>::size_type i = 0; i < _values_input.size(); i++) {
			values_.push_back(_values_input[i]);
			//std::cout << _values_input[i] << std::endl;
		}

	}

	VectorND operator+(const VectorND& vector_input)
	{

		VectorND vec;

		for (vector<int>::size_type i = 0; i < vector_input.values_.size(); i++) {
			vec.values_.push_back(values_[i] + vector_input.values_[i]);
		}

		return vec;

	}

	int operator*(const VectorND& vector_input)
	{

		int ans = 0;

		for (vector<int>::size_type i = 0; i < vector_input.values_.size(); i++) {
			ans += values_[i] * vector_input.values_[i];
		}

		return ans;

	}


	std::ostream& operator<<(const VectorND& vec)
	{
		for (vector<int>::size_type i = 0; i < vec.values_.size(); i++) {
			std::cout << i << " : " << vec.values_[i] << std::endl;
		}
		
	}

};