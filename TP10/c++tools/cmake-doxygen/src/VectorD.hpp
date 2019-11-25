#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

#include <fstream>


#ifndef __VECTORD__HPP
#define __VECTORD__HPP


// Doxygen menu
/// \version 0.1
/// \mainpage
/// \image html myImage.jpg
/// \tableofcontents
/// \section instroduction_sec What for?
/// VectorD is a super tool.
/// \section install_bigsec How to install
/// \subsection dependencies_sec Dependecies
/// \li nothing
/// \li nothing else
/// \li Doxygen (if you want the documentation)
/// \subsection install_sec Install with cmake (Linux)
/// \li go to garamon dir
/// \li mkdir build
/// \li cd build
/// \li cmake ..
/// \li make
/// \li make html
/// \li The documentation is located in [path to build]/doc/doc-doxygen/html/index.html



/// \class VectorD
/// \brief class defining a vector for linear algebra operations.
class VectorD {

public:

	/// \brief constructor from a size and default constructor
	/// \param size : the size of the requested vector (optional)
    VectorD(const size_t size = 0);

	/// \brief copy-constructor
	/// \param v : the source vector to be copied
	VectorD(const VectorD & v);

    /// \brief destructor
    ~VectorD();


private :
  
    size_t m_size;     /*!< size of the vector */

    double * m_data;   /*!< address of the data array */


public :
	
	/// \brief return the size of a Vector
	inline size_t size() const {
		return m_size;
	}

	/// \brief affectation operator
	VectorD & operator=(const VectorD &v);

	/// \brief operator to access to the ist element of a vector
	/// \param  i: index of the targeted vector component
	/// \return vector[i] 
	double& operator[](const size_t& i);

	/// \brief operator to access to the ist element of a vector (const version)
	/// \param i: index of the targeted vector component
	/// \return vector[i] (constant reference)
	const double& operator[](const size_t& i) const;

	/// \brief add 2 vectors of same size
	/// \param vector to add to the calling vector (should have the same dimension as the calling vector)
	/// \return the sum of the current vector and the argument vector
	VectorD operator+(const VectorD &v) const;

	/// \brief compute the norm L2 of a vector
	/// \return the L2 norm of the calling vector
    double norm() const;

	/// \brief normalize a vector such its norm is 1.
    void normalize();

    /// \brief compute the inner product between 2 vectors
    /// \param v : the second vector to consider in the dot product.
    /// \return : the scalar value corresponding to the dot product. 
    double dot(const VectorD &v) const;

    /// \brief computes the cross product between 2 vectors
    /// \param v : the second vector to consider in the cross product, of size 3.
    /// \return vector of size 3
    VectorD cross(const VectorD &v) const;

    /// \brief save a vector in a file
    /// \param filemane : name of the file (including path) where to save the vector data
    /// \return EXIT_SUCCESS if the file is save correctly, else EXIT_FAILURE 
    int save(const std::string &filename) const;

    /// \brief load a vector from a file, the size of the vector should be already the good one ...
    /// \param filemane : name of the file (including path) to open and load the vector data
    /// \return EXIT_SUCCESS if the file is save correctly, else EXIT_FAILURE 
    int load(const std::string &filename);

};

	/// \brief overload the operator << for VectorD
    /// \param stream : input stream
    /// \param v : the vector to output
    /// \return the output stream containing the vector data
    std::ostream& operator<< (std::ostream& stream, const VectorD& v);

#endif
