#ifndef CPP01_KAREN_H
#define CPP01_KAREN_H

#include <string>
#include <iostream>

class Karen
{
private:

	void (Karen::*f[4]) ( void ) ;
	std::string *ref;

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:

	Karen();
	~Karen();
	void complain( std::string level );

};


#endif //CPP01_KAREN_H
