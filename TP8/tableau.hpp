template <typename T, int N>
class Tableau{
private: 
	T data[N];
	size_t size;
public:

	Tableau(size_t taille)
	: size(taille)
	{
	}

	/*GETTER*/

	size_t getSize() const{
		return size;
	}

	int getMaxSize() const{
		return N;
	}

	T getFirst() const{
		if(data[0] != NULL)
			return data[0];
		else{
			throw "Le premier élément est vide :'(";
		}
	}

	T getLast() const{
		if(data[size-1] != NULL)
			return data[size-1];
		else{
			throw "Le dernier élément est vide :'(";
		}
	}

	bool isEmpty(){
		return data == NULL ? true : false;
	}

	T operator[](const int index){
		return data[index];
	}

	T at(const int index){
		return data[index];
	}

	void push(const int value){
		if(size < N){
			data[size] = value;
			size++;
		}else{
			throw "Votre tableau a atteint sa taille maximale";
		}
	}

	void pop(){
		if(data[0] != NULL){
			for(int i=0; i<size-1; i++){
				data[i] = data[i+1];
			}
			data[size-1] = NULL;
			size--;
		}else{
			throw "Votre tableau était vide";
		}
	}

	void insert(const int value, const int index){
		if(index < size){
			data[index] = value;
		}else{
			throw "Votre index est out of range";
		}
	}

	void erase(const int index){
		if(index < size){
			for(int i=0; i < size-1; i++){
				if(i == index)
					data[index] = data[index+1];
				else if(i > index){
					data[i] = data [i+1];
				}
			}
			data[size-1] = data[size];
			data[size] = NULL;
			size--;
		}else{
			throw "This index does not exist";
		}
	}

	/*friend std::ostream &operator<<(std::ostream &os, const Tableau<T, N> &a){
		os << "[";
		for(int i=0; i< Tableau.getSize()-1; i++){
			os << Tableau[i] << ",";
		}
		os << Tableau[Tableau.getSize()-1] << "]";
		return os;
	}*/
};

using Tableaui = Tableau<int, 50>;
using Tableauf = Tableau<float, 50>;
using Tableaud = Tableau<double, 50>;
