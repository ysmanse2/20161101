#pragma once
#include "VectorND.h"
#include <vector>

class MatrixNxN // to MatrixMxM
{
public:

	std::vector<VectorND> rows_;

	MatrixNxN()
	{}


	MatrixNxN(const std::vector<VectorND>& vector_input) : rows_(vector_input) 
	{}

	VectorND operator*(const VectorND& rhs)
	{

		VectorND ans;

		for (vector<int>::size_type j = 0; j < rows_.size(); j++) {
		//	for (vector<int>::size_type i = 0; i < rows_[i].values_.size(); i++) {
				ans.values_.push_back(rows_[j] * rhs);
		//	}
		}
		

		return ans;
	}
};