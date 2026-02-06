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
int main() {
    struct student list[5] = {
        {"ivanov ivan", 20, 4.5},
        {"petrov petr", 21, 3.8},
        {"sidorov alex", 19, 4.9},
        {"kozlov dmitry", 22, 3.2},
        {"nikolaev sergey", 20, 4.1}
    };
    printf("all students:\n");
    printall(list, 5);
    float avg = avgs(list, 5);
    printf("average score: %.2f\n", avg);
    float minscore;
    printf("enter minimum score: ");
    scanf("%f", &minscore);
    printf("students with score >= %.2f:\n", minscore);
    printgood(list, 5, minscore);
    return 0;
}