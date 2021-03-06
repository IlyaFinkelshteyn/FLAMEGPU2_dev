 /**
 * @file AgentFunctionDescription.cpp
 * @authors Paul
 * @date
 * @brief
 *
 * @see
 * @warning
 */

#include "AgentFunctionDescription.h"


AgentFunctionDescription::AgentFunctionDescription(const std::string function_name) : function_name(function_name), initial_state("default"), end_state("default") {

}

AgentFunctionDescription::~AgentFunctionDescription() {}

const std::string AgentFunctionDescription::getEndState() const {
	return end_state;
}

void AgentFunctionDescription::setEndState(const std::string end_state) {
	this->end_state = end_state;
}

const std::string AgentFunctionDescription::getIntialState() const {
	return initial_state;
}

void AgentFunctionDescription::setIntialState(const std::string intial_state) {
	this->initial_state = initial_state;
}

const std::string AgentFunctionDescription::getName() const{
	return function_name;
}

void AgentFunctionDescription::addInput(const AgentFunctionInput &input) {
	if (inputs.size() == 0)
		inputs.insert(InputsMap::value_type(input.getMessageName(), input));
	//else TODO: raise error
}

void AgentFunctionDescription::addOutput(const AgentFunctionOutput &output) {
	if (outputs.size() == 0)
		outputs.insert(OutputsMap::value_type(output.getMessageName(), output));
	//else TODO: raise error

}
