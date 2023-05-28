#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_CLUSTERS 10
#define MAX_ENTRIES 100

struct DataPoint {
    double x;
    double y;
};

struct Cluster {
    struct DataPoint centroid; // K�me merkezi
    int numPoints; // K�medeki nokta say�s�
    struct DataPoint points[MAX_ENTRIES]; // K�medeki noktalar�n listesi
};

struct Cluster clusters[MAX_CLUSTERS]; // K�me veri yap�s�
int numClusters = 0; // Toplam k�me say�s�

double euclideanDistance(struct DataPoint a, struct DataPoint b) {
    // �ki nokta aras�ndaki �klidyen mesafesini hesaplar
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

void insertDataPoint(struct DataPoint point) {
    // Veri noktas�n� en yak�n k�me merkezine ekler
    int i, nearestCluster = 0;
    double minDistance = euclideanDistance(point, clusters[0].centroid);

    // Veri noktas�n� en yak�n k�me merkezini bulur
    for (i = 1; i < numClusters; i++) {
        double distance = euclideanDistance(point, clusters[i].centroid);
        if (distance < minDistance) {
            minDistance = distance;
            nearestCluster = i;
        }
    }

    // Veri noktas�n� ilgili k�me listesine ekler
    clusters[nearestCluster].points[clusters[nearestCluster].numPoints++] = point;
}

void updateCentroids() {
    // K�me merkezlerini g�nceller
    int i, j;

    for (i = 0; i < numClusters; i++) {
        double sumX = 0.0, sumY = 0.0;
        for (j = 0; j < clusters[i].numPoints; j++) {
            sumX += clusters[i].points[j].x;
            sumY += clusters[i].points[j].y;
        }

        // K�me merkezini noktalar�n ortalamas� olarak g�nceller
        clusters[i].centroid.x = sumX / clusters[i].numPoints;
        clusters[i].centroid.y = sumY / clusters[i].numPoints;
    }
}

void birch() {
    // �rnek veri noktalar�n� tan�mlar
    struct DataPoint data[MAX_ENTRIES] = {
        {2.0, 3.0}, {2.5, 3.5}, {1.8, 2.5}, {1.0, 1.0}, {1.2, 0.8},
        {4.0, 4.5}, {4.5, 4.0}, {4.2, 3.8}, {5.0, 4.0}, {5.5, 4.5}
    };
    int numDataPoints = 10;

    // �lk k�melemeyi ba�lat�r
    clusters[numClusters].centroid = data[0]; // �lk k�me merkezi
    clusters[numClusters].numPoints = 0; // �lk k�medeki nokta say�s�
    numClusters++; // Toplam k�me say�s�n� art�r�r

    // Veri noktalar�n� k�melerine ekler
    for (int i = 0; i < numDataPoints; i++) {
        insertDataPoint(data[i]);
    }

    // K�me merkezlerini g�nceller
    updateCentroids();

    // K�me merkezlerini yazd�r�r
    for (int i = 0; i < numClusters; i++) {
        printf("Cluster %d centroid: (%.2f, %.2f)\n", i+1, clusters[i].centroid.x, clusters[i].centroid.y);
    }
}

int main() {
    birch(); // BIRCH algoritmas�n� �al��t�r�r
    return 0;
}

