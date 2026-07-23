#ifndef PRIORTYQUEUEAPP_HPP
#define PRIORITYQUEUEAPP_HPP
#include "PriorityQueue.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace PriorityQueueStackSpace
{
    struct Student {
        string name;
        int priority;
        
        // Default constructor
        Student() : name(""), priority(0) {}
        
        // Parameterized constructor
        Student(string name, int priority) {
            this->name = name;
            this->priority = priority;
        }

        

        
    };

    void Demo() {
        PriorityQueue<Student> PQ(10);
        
        // Create and insert students
        Student s1("A", 1);
        Student s2("B", 2);
        Student s3("C", 3);
        Student s4("D", 4);
        Student s5("E", 5);
        Student s6("F", 6);
        Student s7("G", 7);
        Student s8("H", 8);
        Student s9("I", 9);
        
        // Insert students into priority queue
        PQ.insert(s9); // Highest priority
        PQ.insert(s8);
        PQ.insert(s7);
        PQ.insert(s6);
        PQ.insert(s5);
        PQ.insert(s4);
        PQ.insert(s3);
        PQ.insert(s2);
        PQ.insert(s1); // Lowest priority

        // Display queue contents
        cout << "\nPriority Queue Contents (in order of priority):\n";
        Student temp;
        while (!PQ.isEmpty()) {
            if (PQ.getmax(temp)) {
                cout <<"Name: " << temp.name << " Priority: " << temp.priority << endl;
            }
            else {
                cout << "Queue is empty!" << endl;
                break;
            }
        }
    }
}

#endif