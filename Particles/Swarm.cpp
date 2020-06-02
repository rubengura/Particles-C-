#include "Swarm.h"

namespace particle
{
Swarm::Swarm()
{
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm()
{
	delete[] m_pParticles;
}
}