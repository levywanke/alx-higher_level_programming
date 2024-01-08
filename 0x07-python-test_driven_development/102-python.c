#include <Python.h>
#include <stdio.h>

void print_python_string(PyObject *p) {
    if (!PyUnicode_Check(p)) {
        printf("[ERROR] Invalid String Object\n");
        return;
    }

    Py_ssize_t length;
    Py_UNICODE *unicode = PyUnicode_AsUnicodeAndSize(p, &length);

    if (unicode == NULL) {
        printf("[ERROR] Invalid String Object\n");
        return;
    }

    printf("[.] string object info\n");
    printf("  type: compact unicode object\n");
    printf("  length: %ld\n", length);
    printf("  value: %ls\n", unicode);
}
