#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    printf("start running...");
    MPI_Init(NULL, NULL);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Perform a continuous loop of operations
    double counter = 0.0;
    while (1) {
        counter += 0.001;  // Simple operation to keep the process busy
        if ((int)counter % 1000000 == 0) {
           // printf("Rank %d: counter = %f\n", world_rank, counter);
        }
    }

    // Finalize the MPI environment (not reached due to the infinite loop)
    MPI_Finalize();
    return 0;
}

