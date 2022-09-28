#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ext2fs/ext2_fs.h>
#include <string.h>
#include <libgen.h>
#include <sys/stat.h>
#include <time.h>

#include "util.h"
#include "alloc_dalloc.h"

char parent[128], child[64];

int pino, ino;
MINODE* pmip;
MINODE* mip;
char nodeName[128];

int imkdir();
int ikmkdir(MINODE* pmip, char* basename);
int enter_name(MINODE *mip, int ino, char *name, int isDir);
int my_creat(char * pathname);