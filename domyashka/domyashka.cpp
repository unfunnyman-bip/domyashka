#include <iostream>
#include "student.h"
#include <stdio.h>
using namespace std;
void print(struct student s) {
    printf("name: %s, age: %d, score: %.2f\n", s.name, s.age, s.score);
}
void printall(struct student arr[], int n) {
    for (int i = 0; i < n; i++) {
        print(arr[i]);
    }
}
float avgs(struct student arr[], int n) {
    if (n == 0) return 0;
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].score;
    }
    return sum / n;
}
void printgood(struct student arr[], int n, float minscore) {
    for (int i = 0; i < n; i++) {
        if (arr[i].score >= minscore) {
            print(arr[i]);
        }
    }
}