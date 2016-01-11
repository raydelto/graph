/*
 * Graph.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Graph.h"

Graph::Graph()
{
	_queue = new Queue();

}

Graph::~Graph()
{

}

void Graph::traverse(Vertex *start)
{
	start -> _distance = 0;
	_queue -> enqueue(start);
	Vertex* i;
	Vertex* adjacent;
	while(!_queue -> isEmpty())
	{
		i = _queue -> dequeue();
		adjacent = i -> _firstAdjacent;
		while(adjacent != NULL)
		{
			if(adjacent -> _distance == -1)
			{
				_queue -> enqueue(adjacent);
				adjacent -> _distance = i -> _distance + 1;
				adjacent -> _route = i;
			}
			adjacent = adjacent ->_nextAdjacent;
		}

	}

}


