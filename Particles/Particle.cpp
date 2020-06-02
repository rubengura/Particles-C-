#define _USE_MATH_DEFINES

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace particle
{
Particle::Particle() : m_x(0), m_y(0)
{
	m_direction = (2 * M_PI * rand()) / RAND_MAX;
	m_speed = (0.01 * rand()) / RAND_MAX;
}

Particle::~Particle()
{

}

void Particle::update() {
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed;
	m_y += yspeed;

	if (m_x < -1.0 || m_x >= 1.0)
	{
		xspeed = -xspeed;
	}

	if (m_y < 1.0 || m_y >= 1.0)
	{
		yspeed = -yspeed;
	}

}

}