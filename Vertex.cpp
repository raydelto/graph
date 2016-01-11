/*
 * Vertex.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Vertex.h"


Vertex::Vertex(std::string name): _name(name), _firstAdjacent(NULL),_lastAdjacent(NULL),_nextAdjacent(NULL),_nextQueueVertex(NULL), _route(NULL),_distance(-1)
{
}

Vertex::~Vertex()
{

}

void Vertex::addAdjacent(Vertex *adjacent)
{
	if(_firstAdjacent == NULL)
	{
		_firstAdjacent = adjacent;
		_lastAdjacent = adjacent;
	}else
	{
		_lastAdjacent -> _nextAdjacent = adjacent;
		_lastAdjacent = adjacent;
	}
}

int Vertex::getDistance() const
{
    return _distance;
}

std::string Vertex::getName() const
{
    return _name;
}

Vertex *Vertex::getRoute() const
{
    return _route;
}








