#ifndef __BRAIN__H__
#define __BRAIN__H__
#include <iostream>

class Brain
{
	private:

	public:
		Brain();
		Brain(const Brain &brain);
		~Brain();
		Brain & operator = (const Brain &brain);

		std::string ideas[100];
};
#endif  //!__BRAIN__H__