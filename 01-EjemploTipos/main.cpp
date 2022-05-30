#include <cassert>
#include <string>

using namespace std::string_literals;

int main()
{
	//TIPOS DE DATOS

	//Booleanos
	assert(true != false);
	assert(true != not true);
	assert(true == true);
	assert(true or false);
	assert(true and true);
	assert(true or not true);

	//Char
	assert('A'== 65);
	assert('E' - '!' != '{');
	assert('B' > '0');
	assert(('~' + 't')/2 >= 'I' - '+');
	assert('^' * 2 <= 'c' + 'Y');
	assert('z' % 'W' == '#');

	//Unsigned
	assert(3u*10u + 5u*2u == (2000u%1840u)/4u);
	assert(11u != 9u);
	
	//Int
	assert((99 - 91) / 4 == 10/5);
	assert(1098 != 12);
	assert(6e5 > 76 % 60);
	assert((35 * 7) + 5 == 515 % 265);
	
	//Double
	assert(10 * 0.1 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	assert(45.345435 != 3e-3);
	assert(662.545-45.9 <= 934756.238737);
	assert(10.0/3.0 != 3.0);

	//String
	assert("Hola"s != "mesa"s);
	assert(17 == "Santiago Apicella"s.length());
	assert(3 != "Hola mundo"s.length());
	assert(13 == "botella"s.length() + "tapita"s.length());
	assert("auto rojo"s != "auto"s + "rojo"s);
}