#include <stdio.h>
int main()
{
    int cnt, j, n, t, remain, flag = 0, tq;
    int wt = 0, tat = 0; // Total waiting time and total turnaround time
    int at[10], bt[10], rt[10]; // Arrival Time, Burst Time, Remaining Time arrays
// Input total number of processes
    printf("Enter Total Process:\t ");
    scanf("%d", &n);
    remain = n; // Number of processes yet to be completed
// Input arrival and burst time for each process
    for (cnt = 0; cnt < n; cnt++)
    {
        printf("Enter Arrival Time and Burst Time for Process Number %d :", cnt + 1);
        scanf("%d", &at[cnt]); // Arrival time
        scanf("%d", &bt[cnt]); // Burst time
        rt[cnt] = bt[cnt]; // Initialize remaining time
    }
// Input the time quantum
    printf("Enter Time Quantum:\t");
    scanf("%d", &tq);
    printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
// Round Robin Scheduling Logic
    for (t = 0, cnt = 0; remain != 0;)
    {
// If the process can finish in the given time quantum
        if (rt[cnt] <= tq && rt[cnt] > 0)
        {
            t += rt[cnt]; // Increase current time
            rt[cnt] = 0; // Process completed
            flag = 1; // Flag to indicate process completion
        }
// If the process needs more time than the time quantum
        else if (rt[cnt] > 0)
        {
            rt[cnt] -= tq; // Decrease remaining time
            t += tq; // Increase current time
        }
// If process is completed, print its turnaround and waiting time
        if (rt[cnt] == 0 && flag == 1)
        {
            remain--; // Decrement remaining process count
            printf("P[%d]\t|\t%d\t|\t%d\n", cnt + 1, t - at[cnt], t - at[cnt] - bt[cnt]);
            wt += t - at[cnt] - bt[cnt]; // Add to total waiting time
            tat += t - at[cnt]; // Add to total turnaround time
            flag = 0; // Reset flag
        }
// Move to the next process
// If at the last process, loop back to first
        if (cnt == n - 1)
            cnt = 0;
// Else, go to the next process if its arrival time has passed
        else if (at[cnt + 1] <= t)
            cnt++;
// If the next process hasn't arrived, start again from the first process
        else
            cnt = 0;
    }
// Print average waiting and turnaround times
    printf("\nAverage Waiting Time= %f\n", wt * 1.0 / n);
    printf("Avg Turnaround Time = %f", tat * 1.0 / n);
    return 0;
}










#include <stdio.h>
int main()
{
// Maximum of 5 processes and 3 resource types; increase if needed
    int p, c, count = 0, i, j;
    int alc[5][3]; // Allocation matrix
    int max[5][3]; // Maximum demand matrix
    int need[5][3]; // Remaining need matrix
    int safe[5]; // Stores safe sequence
    int available[3]; // Available resources
    int done[5]; // Flags for completed processes
    int terminate = 0; // Counter to detect unsafe state
    printf("Enter the number of processes and resources: ");
    scanf("%d %d", &p, &c); // Input number of processes and resource types
// Input allocation matrix
    printf("Enter allocation of resources (matrix %dx%d):\n", p, c);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &alc[i][j]);
        }
    }
// Input maximum demand matrix
    printf("Enter maximum resources required (matrix %dx%d):\n", p, c);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }
// Input available resources
    printf("Enter available resources:\n");
    for (i = 0; i < c; i++)
    {
        scanf("%d", &available[i]);
    }
// Calculate and display need matrix (Need = Max - Allocation)
    printf("\nNeed matrix (Remaining resource needs):\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < c; j++)
        {
            need[i][j] = max[i][j] - alc[i][j];
            printf("%d\t", need[i][j]);
        }
        printf("\n")
        16
    }
// Initialize done array to track completed processes
    for (i = 0; i < p; i++)
    {
        done[i] = 0;
    }
// Main loop to find safe sequence
    while (count < p)
    {
        for (i = 0; i < p; i++)
        {
            if (done[i] == 0)
            {
// Check if this process can be executed
                for (j = 0; j < c; j++)
                {
                    if (need[i][j] > available[j])
                        break;
                }
// If all needs can be satisfied
                if (j == c)
                {
                    safe[count] = i; // Add process to safe sequence
                    done[i] = 1; // Mark process as done
                    for (j = 0; j < c; j++)
                    {
                        available[j] += alc[i][j]; // Release allocated resources
                    }
                    count++;
                    terminate = 0; // Reset terminate counter
                }
                else
                {
                    terminate++; // Count how many could not proceed
                }
            }
        }
// If all remaining processes can't proceed => unsafe state
        if (terminate == (p - 1))
        {
            printf("Safe sequence does not exist. System is in an UNSAFE state.\n");
            break;
        }
    }
// If system is in safe state, print results
    if (terminate != (p - 1))
    {
        printf("\nAvailable resources after completion:\n");
        for (i = 0; i < c; i++)
        {
            printf("%d\t", available[i]);
        }
        printf("\n\nSafe sequence:\n");
        for (i = 0; i < p; i++)
        {
            printf("P%d\t", safe[i]);
        }
        printf("\n");
    }
    return 0;
}
