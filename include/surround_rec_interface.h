/*
 * Extrapolated / reversed header for surround sound rec
 */

#ifndef SURROUND_REC_INTERFACE_H
#define SURROUND_REC_INTERFACE_H

typedef struct {
    const char *name;
    char *(*get_param_fn)(void *h);
} get_param_data_t;

typedef struct {
    const char *name;
    void (*set_param_fn)(void *h, const char *val);
} set_param_data_t;

#endif
