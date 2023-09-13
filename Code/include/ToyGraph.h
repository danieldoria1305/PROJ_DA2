//
// Created by gonca on 03/05/2023.
//

#ifndef TRABALHO2_TOYGRAPH_H
#define TRABALHO2_TOYGRAPH_H


class ToyGraph {
public:
    ToyGraph(int orig, int dest, float dist);
    int getOrig() const ;
    int getDest() const ;
    float getDist() const ;



private:

    int orig;
    int dest;
    float dist;

};


#endif //TRABALHO2_TOYGRAPH_H
