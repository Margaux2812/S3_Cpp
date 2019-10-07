#ifndef __VECTOR_D_HPP__
#define __VECTOR_D_HPP__

#include <iostream>
#include <math.h>
#include <stdlib.h>

class VectorD
	{
	public:
		VectorD(const size_t);
		VectorD(const VectorD&);
		~VectorD();

		inline unsigned int size() const{
			return m_vecSize;
		}
		double* getVector() const;

		void setSize(unsigned int);
		void setVector(double*);

		double& operator[](const unsigned int);
		const double& operator[](const unsigned int) const;
		double dot(const VectorD&) const;
		double getNorm() const;
		void normalize();
	
	private:
		double* m_vector;
		size_t m_vecSize;
	};

#endif // __VECTOR_D_HPP__
