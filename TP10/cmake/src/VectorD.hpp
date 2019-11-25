#ifndef __VECTOR_D_HPP__
#define __VECTOR_D_HPP__

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <algorithm>

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
		/// \brief Computes the dot product between two vectors
		/// \param vec: vector used for the dot product with this
		/// \return the result (scalar) of the dot product between two vectors
		double dot(const VectorD&) const;
		double getNorm() const;
		void normalize();

		int save(const std::string &filename) const;
		static VectorD load(const std::string &filename);
		VectorD operator+(const VectorD &vec) const;
	
	private:
		double* m_vector;
		size_t m_vecSize;
	};

	std::ostream& operator<<(std::ostream &stream, const VectorD &vec);

#endif // __VECTOR_D_HPP__
