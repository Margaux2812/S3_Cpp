#include "VectorD.hpp"

#include <fstream>
#include <cstdlib>    // size_t
#include <algorithm>  // transform
#include <cmath>      // sqrt


VectorD::VectorD(const size_t size) : m_size(size) {
    //std::cout << "Constructeur standard" << std::endl;
    if(m_size == 0)
    	m_data = nullptr;
    else m_data = new double[size];
}

VectorD::VectorD(const VectorD & v) : VectorD(v.m_size){
    //std::cout << "Constructeur par recopie "<< std::endl;
    if(m_size != 0)
	    std::copy(v.m_data,v.m_data+v.m_size,m_data);    
}


VectorD::~VectorD() {
    //std::cout << "Destruction" << std::endl;
    if(m_data != nullptr)
	    delete[] m_data;
}


VectorD & VectorD::operator=(const VectorD &v){
	if(&v == this) return *this;

	// memory realloc
	if(v.m_size != this->m_size){
		if(m_data != nullptr) delete[] m_data;
		m_data = new double[v.m_size];
		m_size = v.m_size;
	}

	std::copy(v.m_data,v.m_data+v.m_size, m_data);

	return *this;
}


double& VectorD::operator[](const size_t& i){
	return m_data[i];
}


const double& VectorD::operator[](const size_t& i) const
{
	return m_data[i];
}


VectorD VectorD::operator+(const VectorD &v) const
{
	if(v.m_size != this->m_size){
		std::cerr << "error: VectorD::operator+: operand with incompatible size" << std::endl;
		return *this;
	}

	VectorD result(m_size);
	std::transform(m_data, m_data+m_size, v.m_data, result.m_data, std::plus<double>());

	return result;
}


double VectorD::norm() const{
	return sqrt(this->dot(*this));
}


void VectorD::normalize() {
    double vec_norm = norm();
    if (!vec_norm)
        return;
    
    for (size_t i =0; i<m_size; i++) 
        m_data[i] /= vec_norm;
}


double VectorD::dot(const VectorD & v) const {
    if (m_size != v.m_size ) {
        std::cerr << "Erreur dans la taille du vecteur " << std::endl;
        exit(EXIT_FAILURE);
    }    
    double result = 0.0;
    for(size_t i=0; i<m_size; ++i)
    	result += m_data[i]*v.m_data[i];

    // return std::inner_product(m_data, m_data+m_size, v.m_data,0.0);

    return result;
}


VectorD VectorD::cross(const VectorD & v) const {
    if ((m_size!=3) && (v.m_size!=3)){
        std::cerr << "Erreur dans la taille du vecteur " << std::endl;
        exit(EXIT_FAILURE);
    }    
    
    VectorD vr(3);
    
    vr.m_data[0] = (m_data[1]-v.m_data[2]) * (m_data[2]-v.m_data[1]);
    vr.m_data[1] = (m_data[2]-v.m_data[0]) * (m_data[0]-v.m_data[2]);
    vr.m_data[0] = (m_data[0]-v.m_data[1]) * (m_data[1]-v.m_data[0]);

    return vr;
}


int VectorD::save(const std::string &filename) const{

	//open the file
	std::ofstream myfile;
	myfile.open(filename, std::ios::out | std::ios::binary);
	
    if(!myfile.is_open()){
        std::cerr << "error: can not create file: " << filename << std::endl;
        return EXIT_FAILURE;
    }

	// write the vector size
	myfile << m_size << std::endl;

	for(size_t i=0; i<m_size; ++i)
		myfile << m_data[i] << " ";

	myfile.close();

	return EXIT_SUCCESS;
}


int VectorD::load(const std::string &filename){

	//open the file
	std::ifstream myfile;
	myfile.open(filename, std::ios::in | std::ios::binary);
    if(!myfile.is_open()){
        std::cerr << "error: can not open file: " << filename << std::endl;
        return EXIT_FAILURE;
    }

	// read the vector size
	unsigned int vectorSize;
	myfile >> vectorSize;
	if(vectorSize != m_size)
        *this = VectorD(vectorSize);

    // read the data
	for(size_t i=0; i<vectorSize; ++i)
		myfile >> m_data[i];

	// close file
	myfile.close();
	return EXIT_SUCCESS;
}


std::ostream& operator<< (std::ostream& stream, const VectorD& v) {
	if(v.size() == 0){
		stream << "Not initialized yet -> size is 0";
		return stream;
	}
			
	stream << "(";
	for(unsigned int i=0; i<v.size()-1; ++i)
		stream << v[i] << " , ";
 
 	stream << v[v.size()-1] << ")";

	return stream;
}