#ifndef _SIMULATION
#define _SIMULATION

#include <vector>
#include <string.h>

//include class dependencies
#include "SimulationLayer.h"

//forward declare dependencies from other modules
class ModelDescription;

class Simulation
{
public:
	Simulation(const ModelDescription& model);
	~Simulation(void);

	unsigned int addSimulationLayer(SimulationLayer& layer);
	void addFunctionToLayer(int layer, std::string function_name);
	void setSimulationSteps(unsigned int steps);
	const ModelDescription& getModelDescritpion() const;

private:
	std::vector<SimulationLayer*> layers;
	const ModelDescription& model_description;
	unsigned int simulation_steps;
};

#endif

