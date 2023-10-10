#include <stdio.h>

// struct m� t? m?t ti?n tr�nh
struct Process {
    int pid; // ID c?a ti?n tr�nh
    int burst_time; // Th?i gian th?c thi c?a ti?n tr�nh
};

// h�m swap d? ho�n d?i gi� tr? c?a hai bi?n
void swap(struct Process* a, struct Process* b) {
    struct Process temp = *a;
    *a = *b;
    *b = temp;
}

// h�m s?p x?p m?ng ti?n tr�nh theo burst time tang d?n
void sort_by_burst_time(struct Process* processes, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (processes[i].burst_time > processes[j].burst_time) {
                swap(&processes[i], &processes[j]);
            }
        }
    }
}

// h�m t�nh th?i gian ch? d?i v� th?i gian ho�n th�nh c?a c�c ti?n tr�nh
void calculate_waiting_time_and_turnaround_time(struct Process* processes, int n, int* waiting_time, int* turnaround_time) {
    waiting_time[0] = 0; // th?i gian ch? d?i c?a ti?n tr�nh d?u ti�n l� 0
    turnaround_time[0] = processes[0].burst_time; // th?i gian ho�n th�nh c?a ti?n tr�nh d?u ti�n l� th?i gian th?c thi c?a n�

    for (int i = 1; i < n; i++) {
        // t�nh th?i gian ch? d?i c?a ti?n tr�nh hi?n t?i b?ng t?ng th?i gian ch? d?i c?a c�c ti?n tr�nh tru?c d� v� th?i gian th?c thi c?a ti?n tr�nh tru?c d�
        waiting_time[i] = waiting_time[i - 1] + processes[i - 1].burst_time;

        // t�nh th?i gian ho�n th�nh c?a ti?n tr�nh hi?n t?i b?ng t?ng th?i gian ch? d?i v� th?i gian th?c thi c?a n�
        turnaround_time[i] = waiting_time[i] + processes[i].burst_time;
    }
}

// h�m t�nh th?i gian ch? d?i trung b�nh v� th?i gian ho�n th�nh trung b�nh c?a c�c ti?n tr�nh
void calculate_average_waiting_time_and_turnaround_time(struct Process* processes, int n) {
    int waiting_time[n], turnaround_time[n], total_waiting_time = 0, total_turnaround_time = 0;

    sort_by_burst_time(processes, n); // s?p x?p m?ng ti?n tr�nh theo burst time tang d?n

    calculate_waiting_time_and_turnaround_time(processes, n, waiting_time, turnaround_time); // t�nh th?i gian ch? d?i v� th?i gian ho�n th�nh c?a c�c ti?n tr�nh

    // t�nh t?ng th?i gian ch? d?i v� t?ng th?i

