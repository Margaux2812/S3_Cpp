template <typename Type>
class Point3D{
private: 
	Type m_x;
	Type m_y;
	Type m_z;
public:
	Point3D()
	:m_x(0), m_y(0), m_z(0)
	{
	}

	Point3D(const Type &x, const Type &y, const Type &z)
	: m_x(x), m_y(y), m_z(z)
	{
	}

	/*GETTERS*/

	Type getX() const{
		return m_x;
	}
	Type getY() const{
		return m_y;
	}
	Type getZ() const{
		return m_z;
	}


	template <typename U>
	friend class Point3D;

	template <typename U>
	Point3D<Type>(const Point3D<U> &a)
	: m_x(static_cast<Type>(a.m_x)), m_y(static_cast<Type>(a.m_y)), m_z(static_cast<Type>(a.m_z))
	{
	}

	/*Les opérateurs*/
	void operator=(const Point3D<Type> other){
		m_x = other.m_x;
		m_y = other.m_y;
		m_z = other.m_z;
	}

	Point3D<Type> operator+(const double number){
		m_x += number;
		m_y += number;
		m_z += number;
		return *this;
	}

	Point3D<Type> operator+(const Point3D<Type> &other){
		m_x += other.m_x;
		m_y += other.m_y;
		m_z += other.m_z;
		return *this;
	}

	friend std::ostream &operator<<(std::ostream &os, const Point3D<Type> &a){
		os << "(" << a.m_x << ", " << a.m_y << ", " << a.m_z << ")";
		return os;
	}
};

using Point3Di = Point3D<int>;
using Point3Df = Point3D<float>;
using Point3Dd = Point3D<double>;
