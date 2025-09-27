#pragma once
#ifndef STUDENT_H
#define STUDENT_H
struct student {
    char name[50];
    int age;
    float score;
};
void print(struct student s);
void printall(struct student arr[], int n);
float avgs(struct student arr[], int n);
void printgood(struct student arr[], int n, float minscore);
#endif