#ifndef _object_h
#define _object_h

typedef enum {
	NORTH, SOUTH, EAST, WEST
} Direction;

typedef struct {
	char *description;
	int (*init)(void *self);
	void (*describe)(void *self);
	void (*destroy)(void *self);
	void *(*move)(void *self, Direction direction);
	int (*attack)(void *self, int damage);
} Object;
