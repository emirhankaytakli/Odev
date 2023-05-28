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
    struct DataPoint centroid; // Küme merkezi
    int numPoints; // Kümedeki nokta sayýsý
    struct DataPoint points[MAX_ENTRIES]; // Kümedeki noktalarýn listesi
};

struct Cluster clusters[MAX_CLUSTERS]; // Küme veri yapýsý
int numClusters = 0; // Toplam küme sayýsý

double euclideanDistance(struct DataPoint a, struct DataPoint b) {
    // Ýki nokta arasýndaki Öklidyen mesafesini hesaplar
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

void insertDataPoint(struct DataPoint point) {
    // Veri noktasýný en yakýn küme merkezine ekler
    int i, nearestCluster = 0;
    double minDistance = euclideanDistance(point, clusters[0].centroid);

    // Veri noktasýný en yakýn küme merkezini bulur
    for (i = 1; i < numClusters; i++) {
        double distance = euclideanDistance(point, clusters[i].centroid);
        if (distance < minDistance) {
            minDistance = distance;
            nearestCluster = i;
        }
    }

    // Veri noktasýný ilgili küme listesine ekler
    clusters[nearestCluster].points[clusters[nearestCluster].numPoints++] = point;
}

void updateCentroids() {
    // Küme merkezlerini günceller
    int i, j;

    for (i = 0; i < numClusters; i++) {
        double sumX = 0.0, sumY = 0.0;
        for (j = 0; j < clusters[i].numPoints; j++) {
            sumX += clusters[i].points[j].x;
            sumY += clusters[i].points[j].y;
        }

        // Küme merkezini noktalarýn ortalamasý olarak günceller
        clusters[i].centroid.x = sumX / clusters[i].numPoints;
        clusters[i].centroid.y = sumY / clusters[i].numPoints;
    }
}

void birch() {
    // Örnek veri noktalarýný tanýmlar
    struct DataPoint data[MAX_ENTRIES] = {
        {2.0, 3.0}, {2.5, 3.5}, {1.8, 2.5}, {1.0, 1.0}, {1.2, 0.8},
        {4.0, 4.5}, {4.5, 4.0}, {4.2, 3.8}, {5.0, 4.0}, {5.5, 4.5}
    };
    int numDataPoints = 10;

    // Ýlk kümelemeyi baþlatýr
    clusters[numClusters].centroid = data[0]; // Ýlk küme merkezi
    clusters[numClusters].numPoints = 0; // Ýlk kümedeki nokta sayýsý
    numClusters++; // Toplam küme sayýsýný artýrýr

    // Veri noktalarýný kümelerine ekler
    for (int i = 0; i < numDataPoints; i++) {
        insertDataPoint(data[i]);
    }

    // Küme merkezlerini günceller
    updateCentroids();

    // Küme merkezlerini yazdýrýr
    for (int i = 0; i < numClusters; i++) {
        printf("Cluster %d centroid: (%.2f, %.2f)\n", i+1, clusters[i].centroid.x, clusters[i].centroid.y);
    }
}

int main() {
    birch(); // BIRCH algoritmasýný çalýþtýrýr
    return 0;
}

