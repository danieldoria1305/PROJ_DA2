#include <iostream>
#include <vector>
#include "Code/include/LoadFiles.h"
#include "Code/include/Graph.h"
#include "Code/include/VertexEdge.h"
#include "Code/include/Functions.h"
#include "Code/include/app.h"


int main() {
    cout << "Welcome to the Graphs Project!" << endl;

    app a;
    a.start();

//    LoadFiles lf;
//    lf.chooseExtra();
//    Graph g = lf.getExtraGraph();
//    lf.createDistanceMatrix(g);
//    vector <int> teste = min_path(g);
//    float dist = calculate_distance(teste, g);
//    cout << "Using nearest neighbor: " << dist << endl;
//    linKernighan(g);
//    lf.deleteAll();
//    g.deleteGraph();
//    float dist2 = calculate_distance(dois, g);
//    cout << "Using Lin Kernighan: " << dist2 << endl;
//    join4(g);



//    vector<vector<float>> dist = lf.createDistanceMatrix(g);
//    ;
//
//    vector<int> path = {1, 2};
//    cout << calculate_distance(path, g) << endl;
//    cout << dist[1][2] << endl;

//    clock_t startTime = clock();
//    LoadFiles lf;
//    lf.chooseReal();
//    Graph g = lf.getRealGraph();
//    vector<Vertex*> v = lf.getRealVector();
//    clock_t endTime = clock();
//
//    cout << "Time taken reading and creating adjs for graph 1: " << (double)(endTime - startTime)/CLOCKS_PER_SEC << " seconds" << endl;
//
//    for (auto a: g.getVertexSet()){
//        cout << a->getID() << "  " <<  a->getAdj().size() << endl;
//    }

//
//    LoadFiles lf;
//    lf.chooseToy();
//    Graph novo = lf.getToyGraph();
//
//    cout << tsp(novo);

    return 0;
}
