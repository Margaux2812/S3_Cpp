#include "VectorD.hpp"
#include <math.h>

VectorD::VectorD(const size_t taille)
: m_vecSize(taille)
{
	std::cout<<"Constructeur appelé"<<std::endl;
	m_vector = new double[taille];
}

VectorD::VectorD(const VectorD& vector)
: VectorD(vector.size())
{
	std::copy(vector.getVector(), vector.getVector() + vector.size(), this->getVector());
	std::cout<<"Constructeur par copie appelé"<<std::endl;
}

VectorD::~VectorD(){
	delete[] m_vector;
}

double* VectorD::getVector() const {
	return m_vector;
}

void VectorD::setSize(unsigned int taille){
	m_vecSize = taille;
}

void VectorD::setVector(double* vector){
	m_vector = vector;
}

double& VectorD::operator[](unsigned int i){
	return m_vector[i];
}

const double& VectorD::operator[](unsigned int i) const{
	return m_vector[i];
}

double VectorD::dot(const VectorD& other) const
{
	double sum=0.;

	for(unsigned int i=0; i< this->size(); i++){
		sum += this->m_vector[i] * other.m_vector[i];
	}

	return sum;

}

double VectorD::getNorm() const
{
	return sqrt(this->dot(*this));
}

void VectorD::normalize()
{
	double norm = getNorm();

	for(size_t i=0; i<size(); i++){
		m_vector[i] /= norm;
	}
}
