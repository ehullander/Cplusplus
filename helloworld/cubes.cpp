#include <iostream>
#include <algorithm>
//needed for sort, else write a compare function and use qsort

using namespace std;

const int dim = 3;

struct Cube {

    float edges[dim];
    float origin[dim];
    float getVolume(){
        return abs(edges[0]*edges[1]*edges[2]);
    }
    void setOrigin(float *myarray) {
        for (int i = 0; i < dim; i++) {        
            origin[i] = myarray[i];
        }
    }
    void setSides(float *myarray) {
        for (int i = 0; i < dim; i++) {        
            edges[i] = myarray[i];
        }
    }
    void getVertices() {
        for (int i = 0; i < dim; i++) {        
            printf("<%f,%f>\n", origin[i], origin[i] + edges[i]);
        };
    }

};

Cube Intersect(Cube c1, Cube c2) {
    //float V = c1.getVolume();
    //return V;
    Cube c3;
    float points[4];  
    for (int i = 0; i < dim; i++) {
        //Check if either endpoint of one segment is between the enpoints of the other
        bool test1 = (c1.origin[i] <= c2.origin[i]) & (c2.origin[i] <= c1.origin[i] + c1.edges[i]);
        bool test2 = (c2.origin[i] <= c1.origin[i]) & (c1.origin[i] <= c2.origin[i] + c2.edges[i]);
        // if intersect
        if (test1 || test2) {
            // sort all for vertices and select the middle two as the intersecting vertices
            points[0] = c1.origin[i];
            points[1] = c1.origin[i] + c1.edges[i];
            points[2] = c2.origin[i];
            points[3] = c2.origin[i] + c2.edges[i];
            sort(points, points + 4);
            c3.origin[i] = points[1];
            c3.edges[i] = points[1] - points[2];
        };
    };
    return c3;
};


int main() {
    float s1[3] = {.6,.6,.6};
    float s2[3] = {1,1,1};
    float o1[3] = {0,0,0};
    float o2[3] = {0,.5,.5};
    Cube c1;
    c1.setSides(s1);
    c1.setOrigin(o1);
    printf("V1 = %f\n", c1.getVolume());

    Cube c2;
    c2.setSides(s2);
    c2.setOrigin(o2);
    printf("V2 = %f\n", c2.getVolume());

    //c1.getVertices();
    //c2.getVertices();

    Cube c3 = Intersect(c1,c2);
    printf("volume of intersection %f\n", c3.getVolume());

    return 0;
}
