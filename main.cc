#include <uk/config.h>
#include <pthread.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "rocksdb/db_bench_tool.h"

int main(int argc, char *argv[]) {
    printf("Running Rocksdb supported by Unikraft...\n");

    printf("Create directory /tmp for dbbench\n");
    if (mkdir("tmp", 0777)) return -1;

    return ROCKSDB_NAMESPACE::db_bench_tool(argc, argv);
}