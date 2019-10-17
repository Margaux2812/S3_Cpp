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

int VectorD::save(const std::string &filename) const
{
	std::ofstream myFile;
	myFile.open(filename, std::ios::out | std::ios::binary);

	if(!myFile.is_open()){
		std::cout << "Error : cannot create file : " << filename << std::endl;
		return EXIT_FAILURE;
	}

	myFile << m_vecSize << std::endl;

	for(size_t i; i<m_vecSize; i++)
		myFile << m_vector[i] << " ";
	std::cout << std::endl;

	myFile.close();

	return EXIT_SUCCESS;
}

VectorD VectorD::load(const std::string &filename){
	std::ifstream myFile;
	myFile.open(filename, std::ios::in | std::ios::binary);

	if(!myFile.is_open()){
		std::cout << "Error : cannot create file : " << filename << std::endl;
		return VectorD(0);
	}

	size_t vecSize;
	myFile >> vecSize;

	VectorD vec(vecSize);

	for(size_t i; i<vecSize; i++)
		myFile >> vec.m_vector[i];

	myFile.close();

	return vec;
}

std::ostream& operator<<(std::ostream &stream, const VectorD &vec){
	stream << "(";

	for(size_t i=0; i<vec.size()-1; ++i)
		stream << vec[i] << ", ";
	stream << vec[vec.size()-1] << ")";

	return stream;
}

VectorD VectorD::operator+(const VectorD &vec) const
{
	if(m_vecSize != vec.m_vecSize){
		std::cerr << "Eh faut qu'ils fassent la même taille ! " << std::endl;
		return *this;
	}

	VectorD res(m_vecSize);

	/*for(size_t i = 0; i < m_vecSize; i++)
		res[i] = m_vector[i] + vec[i];
	*/
	std::transform(m_vector, m_vector+m_vecSize, vec.m_vector, res.m_vector, std::plus<double>());

	return res;
}