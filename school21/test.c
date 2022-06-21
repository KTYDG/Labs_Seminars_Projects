#include <stdio.h>
#include <stdlib.h>

#define input(x, n) _Generic((x),\
    int**: input_int, \
    short**: input_short, \
    long**: input_long, \
    double**: input_double, \
    long double**: input_longdouble, \
    float**: input_float, \
    char**: input_char \
    )(x, n)

#define output(x, n) _Generic((x),\
    int*: output_int, \
    short*: output_short, \
    long*: output_long, \
    double*: output_double, \
    long double*: output_longdouble, \
    float*: output_float, \
    char*: output_char \
    )(x, n)

void input_float(float **data, int *n);
void input_double(double **data, int *n);
void input_longdouble(long double **data, int *n);
void input_short(short **data, int *n);
void input_int(int **data, int *n);
void input_long(long **data, int *n);
void input_char(char **data, int *n);

void output_float(float *data, int n);
void output_double(double *data, int n);
void output_longdouble(long double *data, int n);
void output_short(short *data, int n);
void output_int(int *data, int n);
void output_long(long *data, int n);
void output_char(char *data, int n);

int main() {
    char *data;
    int n;
    input(&data, &n);
    output(data, n);
    return 0;
}

void input_float(float **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(float));
    for (int i = 0; i < *n; i++) {
        scanf("%f", &(*data)[i]);
    }
}
void output_float(float *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_double(double **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(double));
    for (int i = 0; i < *n; i++) {
        scanf("%lf", &(*data)[i]);
    }
}
void output_double(double *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2lf", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_longdouble(long double **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(long double));
    for (int i = 0; i < *n; i++) {
        scanf("%Lf", &(*data)[i]);
    }
}
void output_longdouble(long double *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2Lf", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_short(short **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(short));
    for (int i = 0; i < *n; i++) {
        scanf("%hd", &(*data)[i]);
    }
}
void output_short(short *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%hd", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_int(int **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(int));
    for (int i = 0; i < *n; i++) {
        scanf("%d", &(*data)[i]);
    }
}
void output_int(int *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_long(long **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(long));
    for (int i = 0; i < *n; i++) {
        scanf("%ld", &(*data)[i]);
    }
}
void output_long(long *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%ld", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_longlong(long long **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(long));
    for (int i = 0; i < *n; i++) {
        scanf("%lld", &(*data)[i]);
    }
}
void output_longlong(long long *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%lld", data[i]);
        if (i != n-1)
            printf(" ");
    }
}

void input_char(char **data, int *n) {
    scanf("%d", n);
    *data = malloc((*n)*sizeof(char));
    for (int i = 0; i < *n; i++) {
        scanf("%c", &(*data)[i]);
        if ((*data)[i] == '\0' || (*data)[i] == '\n')
            i--;
    }
}
void output_char(char *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", data[i]);
    }
}
