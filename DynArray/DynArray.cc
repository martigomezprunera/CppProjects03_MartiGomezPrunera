#include "DynArray.hh"

//CONSTRUCTOR
DynArray::DynArray(void)
{
	//ATTRIBUTES
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
	m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size)
{
	//ATTRIBUTES
	m_capacity = size;
	m_size = size;
	m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size, const int & value)
{
	//ATTRIBUTES
	m_capacity = size;
	m_size = size;
	m_data = new int[m_capacity];

	//LA ARRAY INICIALIZADA CON VALORES
	fill(m_data, m_data + m_size-1, value);
}

DynArray::DynArray(int * arr, size_t size)
{
}

//DESTRUCTOR
DynArray::~DynArray(void)
{
	delete m_data;
}


//ITINERATIONS
int * DynArray::begin(void) const
{
	return nullptr;
}

int * DynArray::end(void) const
{
	return nullptr;
}

//CAPACITY METHODS
void DynArray::resize(size_t n)
{
	m_data[m_capacity] = m_data[n];
}

void DynArray::reserve(size_t n)
{
}


//MODIFIERS METHODS
void DynArray::assign(size_t n, const int & val)
{
	m_data[n] = val;
}

void DynArray::push(const int & val)
{
	//VARIABLES
	int tam = sizeof(m_data);
	m_data[tam] = val;
}

void DynArray::pop(void)
{
	//VARIABLES
	int tam = sizeof(m_data);
	tam--;
	m_data[m_capacity] = m_data[tam];
}

void DynArray::insert(size_t position, const int & val)
{

}

//METHODS
void DynArray::fill(int * first, int * last, int value)
{
	//FIRST POSICION DE MEMORIA
	while (first < last)
	{
		*first = value;
		first++;
	}
}
