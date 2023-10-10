#include <stdio.h>

// struct mô t? m?t ti?n trình
struct Process {
    int pid; // ID c?a ti?n trình
    int burst_time; // Th?i gian th?c thi c?a ti?n trình
};

// hàm swap d? hoán d?i giá tr? c?a hai bi?n
void swap(struct Process* a, struct Process* b) {
    struct Process temp = *a;
    *a = *b;
    *b = temp;
}

// hàm s?p x?p m?ng ti?n trình theo burst time tang d?n
void sort_by_burst_time(struct Process* processes, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (processes[i].burst_time > processes[j].burst_time) {
                swap(&processes[i], &processes[j]);
            }
        }
    }
}

// hàm tính th?i gian ch? d?i và th?i gian hoàn thành c?a các ti?n trình
void calculate_waiting_time_and_turnaround_time(struct Process* processes, int n, int* waiting_time, int* turnaround_time) {
    waiting_time[0] = 0; // th?i gian ch? d?i c?a ti?n trình d?u tiên là 0
    turnaround_time[0] = processes[0].burst_time; // th?i gian hoàn thành c?a ti?n trình d?u tiên là th?i gian th?c thi c?a nó

    for (int i = 1; i < n; i++) {
        // tính th?i gian ch? d?i c?a ti?n trình hi?n t?i b?ng t?ng th?i gian ch? d?i c?a các ti?n trình tru?c dó và th?i gian th?c thi c?a ti?n trình tru?c dó
        waiting_time[i] = waiting_time[i - 1] + processes[i - 1].burst_time;

        // tính th?i gian hoàn thành c?a ti?n trình hi?n t?i b?ng t?ng th?i gian ch? d?i và th?i gian th?c thi c?a nó
        turnaround_time[i] = waiting_time[i] + processes[i].burst_time;
    }
}

// hàm tính th?i gian ch? d?i trung bình và th?i gian hoàn thành trung bình c?a các ti?n trình
void calculate_average_waiting_time_and_turnaround_time(struct Process* processes, int n) {
    int waiting_time[n], turnaround_time[n], total_waiting_time = 0, total_turnaround_time = 0;

    sort_by_burst_time(processes, n); // s?p x?p m?ng ti?n trình theo burst time tang d?n

    calculate_waiting_time_and_turnaround_time(processes, n, waiting_time, turnaround_time); // tính th?i gian ch? d?i và th?i gian hoàn thành c?a các ti?n trình

    // tính t?ng th?i gian ch? d?i và t?ng th?i

