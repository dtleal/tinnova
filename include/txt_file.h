#ifndef _TXT_FILE_H
#define _TXT_FILE_H  1

#include <stdio.h>

#include "module_version.h"

#define APP_NAME    "txt-file-handler"

FILE *open_file_for_writing(const char *filename);
FILE *reopen_file_for_reading(const char *filename);
void input_characters(FILE *file);

#endif