#include "Particle.h"
#include <stdlib.h>

namespace particle
{
Particle::Particle()
{
	m_x = ((2.0 * rand() / RAND_MAX) - 1); // Random number from -1 to +1
	m_y = ((2.0 * rand() / RAND_MAX) - 1); // Random number from -1 to +1
}

Particle::~Particle()
{

}

void Particle::update() {
	const double speed = 0.01;

	m_x += speed;
	m_y += speed;
}

}