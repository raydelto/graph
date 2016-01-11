/*
 * Vertex.h
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#ifndef VERTEX_H_
#define VERTEX_H_
#include <string>
class Vertex {
public:
	Vertex(std::string name);
	virtual ~Vertex();
	void addAdjacent(Vertex* adjacent);
    int getDistance() const;
    std::string getName() const;
    Vertex *getRoute() const;
private:
	std::string _name;
	Vertex* _firstAdjacent;
	Vertex* _lastAdjacent;
	Vertex* _nextAdjacent;
	Vertex* _nextQueueVertex;
	Vertex* _route;
	int _distance;
	friend class Queue;
	friend class Graph;
};

#endif /* VERTEX_H_ */

