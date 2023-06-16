#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &old);
		~Fixed();
		Fixed& operator = (const Fixed &rhs);
		int		getRawBits(void) const; 
		void	setRawBits(int const raw);

	private:
		int					m_value;
		static const int	m_fractional_bit = 8;
};

#endif