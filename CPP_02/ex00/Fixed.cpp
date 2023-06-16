#include "Fixed.hpp"
#include <iostream>
#include <string>

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	m_value = to_copy.getRawBits();
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator = (const Fixed &to_copy)
{
	std::cout << "Copy assigment operator called" << std::endl;
	m_value = to_copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_value);
}

void	Fixed::setRawBits(int const raw)
{
	m_value = raw;
}
