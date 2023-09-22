#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


# define R			"\x1b[0m"
# define BOLD		"\x1b[1m"
# define RED		"\x1b[1;31m"
# define YELLOW		"\x1b[1;33m"
# define CYAN		"\x1b[1;36m"
# define MAGENTA	"\x1b[1;35m"
# define GRAY		"\x1b[1;90m"

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed &src);
		~Fixed(void);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
};

#endif