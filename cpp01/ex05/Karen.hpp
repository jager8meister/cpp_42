#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
class Karen
{
private:
	int	level;
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	increaseLevel(void);
	int		getLevel(void);
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};



#endif